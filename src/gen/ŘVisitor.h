
// Generated from Ř.g4 by ANTLR 4.12.0

#pragma once


#include "antlr4-runtime.h"
#include "ŘParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by ŘParser.
 */
class  ŘVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by ŘParser.
   */
    virtual std::any visitProg(ŘParser::ProgContext *context) = 0;

    virtual std::any visitBlock(ŘParser::BlockContext *context) = 0;

    virtual std::any visitStmtlist(ŘParser::StmtlistContext *context) = 0;

    virtual std::any visitVariableAssignment(ŘParser::VariableAssignmentContext *context) = 0;

    virtual std::any visitFunctionDefinition(ŘParser::FunctionDefinitionContext *context) = 0;

    virtual std::any visitIfCondition(ŘParser::IfConditionContext *context) = 0;

    virtual std::any visitIfElseCondition(ŘParser::IfElseConditionContext *context) = 0;

    virtual std::any visitWhileLoop(ŘParser::WhileLoopContext *context) = 0;

    virtual std::any visitExpression(ŘParser::ExpressionContext *context) = 0;

    virtual std::any visitVariableRead(ŘParser::VariableReadContext *context) = 0;

    virtual std::any visitLit(ŘParser::LitContext *context) = 0;

    virtual std::any visitOpComparsion(ŘParser::OpComparsionContext *context) = 0;

    virtual std::any visitFunctionCall(ŘParser::FunctionCallContext *context) = 0;

    virtual std::any visitOpParens(ŘParser::OpParensContext *context) = 0;

    virtual std::any visitOpNegation(ŘParser::OpNegationContext *context) = 0;

    virtual std::any visitOpComputation(ŘParser::OpComputationContext *context) = 0;

    virtual std::any visitArglist(ŘParser::ArglistContext *context) = 0;

    virtual std::any visitFunc(ŘParser::FuncContext *context) = 0;

    virtual std::any visitParamlist(ŘParser::ParamlistContext *context) = 0;

    virtual std::any visitLiteral(ŘParser::LiteralContext *context) = 0;


};

