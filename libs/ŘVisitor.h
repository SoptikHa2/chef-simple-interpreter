
// Generated from Ř.g4 by ANTLR 4.11.1

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

    virtual std::any visitStmt(ŘParser::StmtContext *context) = 0;

    virtual std::any visitExpr(ŘParser::ExprContext *context) = 0;

    virtual std::any visitArglist(ŘParser::ArglistContext *context) = 0;

    virtual std::any visitFunc(ŘParser::FuncContext *context) = 0;

    virtual std::any visitLiteral(ŘParser::LiteralContext *context) = 0;


};

