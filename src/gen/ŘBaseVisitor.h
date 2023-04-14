
// Generated from Ř.g4 by ANTLR 4.12.0

#pragma once


#include "antlr4-runtime.h"
#include "ŘVisitor.h"


/**
 * This class provides an empty implementation of ŘVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  ŘBaseVisitor : public ŘVisitor {
public:

  virtual std::any visitProg(ŘParser::ProgContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBlock(ŘParser::BlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStmtlist(ŘParser::StmtlistContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVariableAssignment(ŘParser::VariableAssignmentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunctionDefinition(ŘParser::FunctionDefinitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIfCondition(ŘParser::IfConditionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIfElseCondition(ŘParser::IfElseConditionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWhileLoop(ŘParser::WhileLoopContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpression(ŘParser::ExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVariableRead(ŘParser::VariableReadContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLit(ŘParser::LitContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOpComparsion(ŘParser::OpComparsionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunctionCall(ŘParser::FunctionCallContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOpParens(ŘParser::OpParensContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOpNegation(ŘParser::OpNegationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOpComputation(ŘParser::OpComputationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitArglist(ŘParser::ArglistContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunc(ŘParser::FuncContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParamlist(ŘParser::ParamlistContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLiteral(ŘParser::LiteralContext *ctx) override {
    return visitChildren(ctx);
  }


};

