#include <any>
#include <vector>
#include <exception>

#include "Interpreter.h"
#include "RRstdlib.hpp"
#include "S2ETools.hpp"

using namespace std;

Interpreter::Interpreter(bool symbexec_enabled) : symbexec_enabled(symbexec_enabled) {
    if (symbexec_enabled)
        StartSymbex();
}

Interpreter::~Interpreter() {
    if (symbexec_enabled)
        EndSymbex(state.error_occurred);
}

any Interpreter::visitFunc(RRParser::FuncContext *ctx) {
    Function f {
            any_cast<vector<string>>(visitParamlist(ctx->params)),
            ctx->block()
    };

    return f;
}

any Interpreter::visitLiteral(RRParser::LiteralContext *ctx) {
    return atoi(ctx->INTLIT()->getText().c_str());
}

any Interpreter::visitArglist(RRParser::ArglistContext *ctx) {
    if(!ctx) return vector<int>();

    vector<int> args;

    args.push_back(any_cast<int>(visit(ctx->expr())));

    auto next = ctx->arglist();
    for(const auto & arg : next) {
        args.push_back(any_cast<int>(visit(arg->expr())));
    }

    return args;
}

any Interpreter::visitParamlist(RRParser::ParamlistContext *ctx) {
    if(!ctx) return vector<string>();

    vector<string> names;

    names.push_back(any_cast<string>(ctx->ID()->getText()));

    for(const auto & param : ctx->paramlist()) {
        names.push_back(any_cast<string>(param->ID()->getText()));
    }

    return names;
}

any Interpreter::visitVariableAssignment(RRParser::VariableAssignmentContext *ctx) {
    auto varname = ctx->ID()->getText();
    auto value = visit(ctx->expr());
    state.variables[varname] = any_cast<int>(value);
    return {};
}

any Interpreter::visitFunctionDefinition(RRParser::FunctionDefinitionContext *ctx) {
    auto funcname = ctx->ID()->getText();
    auto body = visitFunc(ctx->func());
    state.functions[funcname] = any_cast<Function>(body);
    return {};
}

any Interpreter::visitIfCondition(RRParser::IfConditionContext *ctx) {
    auto cond = any_cast<int>(visit(ctx->cond));
    if (cond) {
        RRBaseVisitor::visitBlock(ctx->body);
    }
    return {};
}

any Interpreter::visitIfElseCondition(RRParser::IfElseConditionContext *ctx) {
    auto cond = any_cast<int>(visit(ctx->cond));
    if (cond) {
        RRBaseVisitor::visitBlock(ctx->truebody);
    } else {
        RRBaseVisitor::visitBlock(ctx->falsebody);
    }
    return {};
}

any Interpreter::visitWhileLoop(RRParser::WhileLoopContext *ctx) {
    while(any_cast<int>(visit(ctx->cond))) {
        RRBaseVisitor::visitBlock(ctx->body);
    }
    return {};
}

any Interpreter::visitVariableRead(RRParser::VariableReadContext *ctx) {
    auto varName = ctx->ID()->getText();
    if (state.variables.count(varName)) {
        return state.variables[varName];
    } else {
        state.error_occurred = true;
        throw runtime_error("Unknown variable name: " + varName);
    }
}

any Interpreter::visitOpComparsion(RRParser::OpComparsionContext *ctx) {
    auto left = any_cast<int>(visit(ctx->left));
    auto right = any_cast<int>(visit(ctx->right));
    auto op = ctx->op->getText();
    if (op == "==") return (int)(left == right);
    if (op == ">") return (int)(left > right);
    if (op == "<") return (int)(left < right);

    state.error_occurred = true;
    throw runtime_error("Unknown operator: " + op);
}

any Interpreter::visitFunctionCall(RRParser::FunctionCallContext *ctx) {
    auto funName = ctx->fun->getText();

    size_t targetArgSize;
    function<int(vector<int>)> funcToCall;

    // Construct the function to call
    if (rrstd::_vifunc.count(funName)) {
        targetArgSize = 1;
        funcToCall = [&](vector<int> args) {
            rrstd::_vifunc[funName](args[0]);
            return 0;
        };
    } else if (rrstd::_ivfunc.count(funName)) {
        targetArgSize = 0;
        funcToCall = [&](auto _) {
            return rrstd::_ivfunc[funName]();
        };
    } else if (state.functions.count(funName)) {
        auto function = state.functions[funName];
        targetArgSize = function.params.size();
        funcToCall = [=](vector<int> args) {
            // Make backup of current context, will restore it after return
            auto backupState = state;
            // Add arguments to context
            int argId = 0;
            for(const auto & param : function.params) {
                state.variables[param] = args[argId++];
            }
            // Call the function
            RRBaseVisitor::visitBlock(state.functions[funName].body);
            // Save return value
            auto retVal = state.variables["result"];
            // Restore backup
            state = backupState;
            return retVal;
        };
    } else {
        state.error_occurred = true;
        throw runtime_error("Unknown function name: " + funName);
    }

    // Call the constructed function

    // Make sure there are enough arguments
    auto args = any_cast<vector<int>>(visitArglist(ctx->args));
    if (args.size() != targetArgSize) {
        state.error_occurred = true;
        throw runtime_error("Function " + funName + " called with incorrect number of parameters.");
    }

    return funcToCall(args);
}

any Interpreter::visitOpComputation(RRParser::OpComputationContext *ctx) {
    auto left = any_cast<int>(visit(ctx->left));
    auto right = any_cast<int>(visit(ctx->right));
    auto op = ctx->op->getText();
    if (op == "*") return left * right;
    if (op == "/" && right == 0) {
        state.error_occurred = true;
        throw runtime_error("Division by zero");
    }
    if (op == "/") return left / right;
    if (op == "+") return left + right;
    if (op == "-") return left - right;

    state.error_occurred = true;
    throw runtime_error("Unknown operator: " + op);
}

any Interpreter::visitOpUnary(RRParser::OpUnaryContext *ctx) {
    auto expr = any_cast<int>(visit(ctx->e));
    auto op = ctx->op->getText();
    if (op == "!") return !expr;
    if (op == "-") return -expr;

    state.error_occurred = true;
    throw runtime_error("Unknown operator: " + op);
}

ostream &operator<<(ostream &os, const Interpreter &interpreter) {
    os << "Interpreter state:\n\tvariables:\n";
    for(const auto & variable : interpreter.state.variables) {
        os << "\t\t" << variable.first << " -> " << variable.second << "\n";
    }
    os << "\n\tfunctions:\n";
    for(const auto & function : interpreter.state.functions) {
        os << "\t\t" << function.first << "\n";
    }
    return os;
}
