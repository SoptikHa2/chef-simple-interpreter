#pragma once

#include <ostream>
#include "gen/ŘBaseVisitor.h"
#include "State.h"

class Interpreter : public ŘBaseVisitor {
    State state;

public:
    std::any visitFunc(ŘParser::FuncContext *ctx) override;

    std::any visitLiteral(ŘParser::LiteralContext *ctx) override;

    std::any visitVariableAssignment(ŘParser::VariableAssignmentContext *ctx) override;

    std::any visitFunctionDefinition(ŘParser::FunctionDefinitionContext *ctx) override;

    std::any visitIfCondition(ŘParser::IfConditionContext *ctx) override;

    std::any visitIfElseCondition(ŘParser::IfElseConditionContext *ctx) override;

    std::any visitWhileLoop(ŘParser::WhileLoopContext *ctx) override;

    std::any visitVariableRead(ŘParser::VariableReadContext *ctx) override;

    std::any visitOpComparsion(ŘParser::OpComparsionContext *ctx) override;

    std::any visitFunctionCall(ŘParser::FunctionCallContext *ctx) override;

    std::any visitOpComputation(ŘParser::OpComputationContext *ctx) override;

    std::any visitOpNegation(ŘParser::OpNegationContext *ctx) override;

    friend std::ostream &operator<<(std::ostream &os, const Interpreter &interpreter);

    std::any visitArglist(ŘParser::ArglistContext *ctx) override;

    std::any visitParamlist(ŘParser::ParamlistContext *ctx) override;
};
