#include <any>
#include <vector>
#include <exception>

#include "Interpreter.h"
#include "RuleIndices.cpp"

using namespace std;

any Interpreter::visitFunc(ŘParser::FuncContext *ctx) {
    Function f {
            any_cast<vector<string>>(visitParamlist(ctx->params)),
            ctx->block()
    };

    return f;
}

any Interpreter::visitLiteral(ŘParser::LiteralContext *ctx) {
    return atoi(ctx->INTLIT()->getText().c_str());
}

any Interpreter::visitArglist(ŘParser::ArglistContext *ctx) {
    if(!ctx) return vector<int>();

    vector<int> args;

    args.push_back(any_cast<int>(visit(ctx->expr())));

    auto next = ctx->arglist();
    for(const auto & arg : next) {
        args.push_back(any_cast<int>(visit(arg->expr())));
    }

    return args;
}

any Interpreter::visitParamlist(ŘParser::ParamlistContext *ctx) {
    if(!ctx) return vector<string>();

    vector<string> names;

    names.push_back(any_cast<string>(ctx->ID()->getText()));

    for(const auto & param : ctx->paramlist()) {
        names.push_back(any_cast<string>(param->ID()->getText()));
    }

    return names;
}

any Interpreter::visitVariableAssignment(ŘParser::VariableAssignmentContext *ctx) {
    auto varname = ctx->ID()->getText();
    auto value = visit(ctx->expr());
    state.variables[varname] = any_cast<int>(value);
    return {};
}

any Interpreter::visitFunctionDefinition(ŘParser::FunctionDefinitionContext *ctx) {
    auto funcname = ctx->ID()->getText();
    auto body = visitFunc(ctx->func());
    state.functions[funcname] = any_cast<Function>(body);
    return {};
}

any Interpreter::visitIfCondition(ŘParser::IfConditionContext *ctx) {
    auto cond = any_cast<int>(visit(ctx->cond));
    if (cond) {
        ŘBaseVisitor::visitBlock(ctx->body);
    }
    return {};
}

any Interpreter::visitIfElseCondition(ŘParser::IfElseConditionContext *ctx) {
    auto cond = any_cast<int>(visit(ctx->cond));
    if (cond) {
        ŘBaseVisitor::visitBlock(ctx->truebody);
    } else {
        ŘBaseVisitor::visitBlock(ctx->falsebody);
    }
    return {};
}

any Interpreter::visitWhileLoop(ŘParser::WhileLoopContext *ctx) {
    while(any_cast<int>(visit(ctx->cond))) {
        ŘBaseVisitor::visitBlock(ctx->body);
    }
    return {};
}

any Interpreter::visitVariableRead(ŘParser::VariableReadContext *ctx) {
    auto varName = ctx->ID()->getText();
    if (state.variables.count(varName)) {
        return state.variables[varName];
    } else {
        throw runtime_error("Unknown variable name: " + varName);
    }
}

any Interpreter::visitOpComparsion(ŘParser::OpComparsionContext *ctx) {
    auto left = any_cast<int>(visit(ctx->left));
    auto right = any_cast<int>(visit(ctx->right));
    auto op = ctx->op->getText();
    if (op == "==") return left == right;
    if (op == ">") return left > right;
    if (op == "<") return left < right;
    throw runtime_error("Unknown operator: " + op);
}

any Interpreter::visitFunctionCall(ŘParser::FunctionCallContext *ctx) {
    auto funName = ctx->fun->getText();
    if (state.functions.count(funName)) {
        auto function = state.functions[funName];
        auto args = any_cast<vector<int>>(visitArglist(ctx->args));

        // Make sure there are enough arguments
        if (args.size() != function.params.size()) {
            throw runtime_error("Function " + funName + " called with incorrect number of parameters.");
        }

        // Make backup of current context, will restore it after return
        auto backupState = state;

        // Add arguments to context
        int argId = 0;
        for(const auto & param : function.params) {
            state.variables[param] = args[argId++];
        }

        // Call the function
        ŘBaseVisitor::visitBlock(state.functions[funName].body);

        // Save return value
        auto retVal = state.variables["return"];

        // Restore backup
        state = backupState;

        return retVal;
    } else {
        throw runtime_error("Unknown function name: " + funName);
    }
}

any Interpreter::visitOpComputation(ŘParser::OpComputationContext *ctx) {
    auto left = any_cast<int>(visit(ctx->left));
    auto right = any_cast<int>(visit(ctx->right));
    auto op = ctx->op->getText();
    if (op == "*") return left * right;
    if (op == "/" && right == 0) throw runtime_error("Division by zero");
    if (op == "/") return left / right;
    if (op == "+") return left + right;
    if (op == "-") return left - right;
    throw runtime_error("Unknown operator: " + op);
}

any Interpreter::visitOpNegation(ŘParser::OpNegationContext *ctx) {
    auto expr = any_cast<int>(visit(ctx->e));
    return !expr;
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
