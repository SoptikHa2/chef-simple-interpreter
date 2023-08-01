
// Generated from RR.g4 by ANTLR 4.12.0

#pragma once


#include "antlr4-runtime.h"
#include "RRParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by RRParser.
 */
class  RRVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by RRParser.
   */
    virtual std::any visitProg(RRParser::ProgContext *context) = 0;

    virtual std::any visitBlock(RRParser::BlockContext *context) = 0;

    virtual std::any visitStmtlist(RRParser::StmtlistContext *context) = 0;

    virtual std::any visitVariableAssignment(RRParser::VariableAssignmentContext *context) = 0;

    virtual std::any visitFunctionDefinition(RRParser::FunctionDefinitionContext *context) = 0;

    virtual std::any visitIfCondition(RRParser::IfConditionContext *context) = 0;

    virtual std::any visitIfElseCondition(RRParser::IfElseConditionContext *context) = 0;

    virtual std::any visitWhileLoop(RRParser::WhileLoopContext *context) = 0;

    virtual std::any visitExpression(RRParser::ExpressionContext *context) = 0;

    virtual std::any visitOpUnary(RRParser::OpUnaryContext *context) = 0;

    virtual std::any visitVariableRead(RRParser::VariableReadContext *context) = 0;

    virtual std::any visitLit(RRParser::LitContext *context) = 0;

    virtual std::any visitOpComparsion(RRParser::OpComparsionContext *context) = 0;

    virtual std::any visitFunctionCall(RRParser::FunctionCallContext *context) = 0;

    virtual std::any visitOpParens(RRParser::OpParensContext *context) = 0;

    virtual std::any visitOpComputation(RRParser::OpComputationContext *context) = 0;

    virtual std::any visitArglist(RRParser::ArglistContext *context) = 0;

    virtual std::any visitFunc(RRParser::FuncContext *context) = 0;

    virtual std::any visitParamlist(RRParser::ParamlistContext *context) = 0;

    virtual std::any visitLiteral(RRParser::LiteralContext *context) = 0;


};

