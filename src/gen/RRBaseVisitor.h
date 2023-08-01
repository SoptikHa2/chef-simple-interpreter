
// Generated from RR.g4 by ANTLR 4.12.0

#pragma once


#include "antlr4-runtime.h"
#include "RRVisitor.h"


/**
 * This class provides an empty implementation of RRVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  RRBaseVisitor : public RRVisitor {
public:

  virtual std::any visitProg(RRParser::ProgContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBlock(RRParser::BlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStmtlist(RRParser::StmtlistContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVariableAssignment(RRParser::VariableAssignmentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunctionDefinition(RRParser::FunctionDefinitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIfCondition(RRParser::IfConditionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIfElseCondition(RRParser::IfElseConditionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWhileLoop(RRParser::WhileLoopContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpression(RRParser::ExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOpUnary(RRParser::OpUnaryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVariableRead(RRParser::VariableReadContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLit(RRParser::LitContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOpComparsion(RRParser::OpComparsionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunctionCall(RRParser::FunctionCallContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOpParens(RRParser::OpParensContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOpComputation(RRParser::OpComputationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitArglist(RRParser::ArglistContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunc(RRParser::FuncContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParamlist(RRParser::ParamlistContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLiteral(RRParser::LiteralContext *ctx) override {
    return visitChildren(ctx);
  }


};

