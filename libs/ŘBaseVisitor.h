
// Generated from Ř.g4 by ANTLR 4.11.1

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

  virtual std::any visitStmt(ŘParser::StmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpr(ŘParser::ExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitArglist(ŘParser::ArglistContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunc(ŘParser::FuncContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLiteral(ŘParser::LiteralContext *ctx) override {
    return visitChildren(ctx);
  }


};

