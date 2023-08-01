
// Generated from RR.g4 by ANTLR 4.12.0

#pragma once


#include "antlr4-runtime.h"




class  RRParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, T__9 = 10, T__10 = 11, T__11 = 12, T__12 = 13, T__13 = 14, 
    T__14 = 15, T__15 = 16, T__16 = 17, T__17 = 18, T__18 = 19, INTLIT = 20, 
    ID = 21, WS = 22
  };

  enum {
    RuleProg = 0, RuleBlock = 1, RuleStmtlist = 2, RuleStmt = 3, RuleExpr = 4, 
    RuleArglist = 5, RuleFunc = 6, RuleParamlist = 7, RuleLiteral = 8
  };

  explicit RRParser(antlr4::TokenStream *input);

  RRParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~RRParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class ProgContext;
  class BlockContext;
  class StmtlistContext;
  class StmtContext;
  class ExprContext;
  class ArglistContext;
  class FuncContext;
  class ParamlistContext;
  class LiteralContext; 

  class  ProgContext : public antlr4::ParserRuleContext {
  public:
    ProgContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StmtlistContext *stmtlist();
    antlr4::tree::TerminalNode *EOF();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ProgContext* prog();

  class  BlockContext : public antlr4::ParserRuleContext {
  public:
    BlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StmtlistContext *stmtlist();
    StmtContext *stmt();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BlockContext* block();

  class  StmtlistContext : public antlr4::ParserRuleContext {
  public:
    StmtlistContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StmtContext *stmt();
    std::vector<StmtlistContext *> stmtlist();
    StmtlistContext* stmtlist(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StmtlistContext* stmtlist();

  class  StmtContext : public antlr4::ParserRuleContext {
  public:
    StmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    StmtContext() = default;
    void copyFrom(StmtContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  ExpressionContext : public StmtContext {
  public:
    ExpressionContext(StmtContext *ctx);

    ExprContext *expr();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  IfElseConditionContext : public StmtContext {
  public:
    IfElseConditionContext(StmtContext *ctx);

    RRParser::ExprContext *cond = nullptr;
    RRParser::BlockContext *truebody = nullptr;
    RRParser::BlockContext *falsebody = nullptr;
    ExprContext *expr();
    std::vector<BlockContext *> block();
    BlockContext* block(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  VariableAssignmentContext : public StmtContext {
  public:
    VariableAssignmentContext(StmtContext *ctx);

    antlr4::tree::TerminalNode *ID();
    ExprContext *expr();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  FunctionDefinitionContext : public StmtContext {
  public:
    FunctionDefinitionContext(StmtContext *ctx);

    antlr4::tree::TerminalNode *ID();
    FuncContext *func();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  IfConditionContext : public StmtContext {
  public:
    IfConditionContext(StmtContext *ctx);

    RRParser::ExprContext *cond = nullptr;
    RRParser::BlockContext *body = nullptr;
    ExprContext *expr();
    BlockContext *block();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  WhileLoopContext : public StmtContext {
  public:
    WhileLoopContext(StmtContext *ctx);

    RRParser::ExprContext *cond = nullptr;
    RRParser::BlockContext *body = nullptr;
    ExprContext *expr();
    BlockContext *block();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  StmtContext* stmt();

  class  ExprContext : public antlr4::ParserRuleContext {
  public:
    ExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ExprContext() = default;
    void copyFrom(ExprContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  OpUnaryContext : public ExprContext {
  public:
    OpUnaryContext(ExprContext *ctx);

    antlr4::Token *op = nullptr;
    RRParser::ExprContext *e = nullptr;
    ExprContext *expr();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  VariableReadContext : public ExprContext {
  public:
    VariableReadContext(ExprContext *ctx);

    antlr4::tree::TerminalNode *ID();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  LitContext : public ExprContext {
  public:
    LitContext(ExprContext *ctx);

    LiteralContext *literal();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  OpComparsionContext : public ExprContext {
  public:
    OpComparsionContext(ExprContext *ctx);

    RRParser::ExprContext *left = nullptr;
    antlr4::Token *op = nullptr;
    RRParser::ExprContext *right = nullptr;
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  FunctionCallContext : public ExprContext {
  public:
    FunctionCallContext(ExprContext *ctx);

    antlr4::Token *fun = nullptr;
    RRParser::ArglistContext *args = nullptr;
    antlr4::tree::TerminalNode *ID();
    ArglistContext *arglist();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  OpParensContext : public ExprContext {
  public:
    OpParensContext(ExprContext *ctx);

    RRParser::ExprContext *e = nullptr;
    ExprContext *expr();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  OpComputationContext : public ExprContext {
  public:
    OpComputationContext(ExprContext *ctx);

    RRParser::ExprContext *left = nullptr;
    antlr4::Token *op = nullptr;
    RRParser::ExprContext *right = nullptr;
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ExprContext* expr();
  ExprContext* expr(int precedence);
  class  ArglistContext : public antlr4::ParserRuleContext {
  public:
    ArglistContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExprContext *expr();
    std::vector<ArglistContext *> arglist();
    ArglistContext* arglist(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ArglistContext* arglist();

  class  FuncContext : public antlr4::ParserRuleContext {
  public:
    RRParser::ParamlistContext *params = nullptr;
    FuncContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BlockContext *block();
    ParamlistContext *paramlist();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FuncContext* func();

  class  ParamlistContext : public antlr4::ParserRuleContext {
  public:
    ParamlistContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    std::vector<ParamlistContext *> paramlist();
    ParamlistContext* paramlist(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParamlistContext* paramlist();

  class  LiteralContext : public antlr4::ParserRuleContext {
  public:
    LiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INTLIT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LiteralContext* literal();


  bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;

  bool exprSempred(ExprContext *_localctx, size_t predicateIndex);

  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

