#pragma once

#include <ostream>
#include "gen/RRBaseVisitor.h"
#include "State.h"

enum Instructions {
    VariableAssignment,
    FunctionAssignment,
    Condition,
    WhileLoop,
    VariableRead,
    Comparsion,
    FuncCall,
    Arithmetics,
    UnaryArithmetics,
};

class Interpreter : public RRBaseVisitor {
    State state;
    bool symbexec_enabled;

public:
    Interpreter(bool symbexec_enabled);

    virtual ~Interpreter();

    std::any visitFunc(RRParser::FuncContext *ctx) override;

    std::any visitLiteral(RRParser::LiteralContext *ctx) override;

    std::any visitVariableAssignment(RRParser::VariableAssignmentContext *ctx) override;

    std::any visitFunctionDefinition(RRParser::FunctionDefinitionContext *ctx) override;

    std::any visitIfCondition(RRParser::IfConditionContext *ctx) override;

    std::any visitIfElseCondition(RRParser::IfElseConditionContext *ctx) override;

    std::any visitWhileLoop(RRParser::WhileLoopContext *ctx) override;

    std::any visitVariableRead(RRParser::VariableReadContext *ctx) override;

    std::any visitOpComparsion(RRParser::OpComparsionContext *ctx) override;

    std::any visitFunctionCall(RRParser::FunctionCallContext *ctx) override;

    std::any visitOpComputation(RRParser::OpComputationContext *ctx) override;

    std::any visitOpUnary(RRParser::OpUnaryContext *ctx) override;

    std::any visitArglist(RRParser::ArglistContext *ctx) override;

    std::any visitParamlist(RRParser::ParamlistContext *ctx) override;

    friend std::ostream &operator<<(std::ostream &os, const Interpreter &interpreter);
};
