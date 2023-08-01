
// Generated from RR.g4 by ANTLR 4.12.0


#include "RRVisitor.h"

#include "RRParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct RRParserStaticData final {
  RRParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  RRParserStaticData(const RRParserStaticData&) = delete;
  RRParserStaticData(RRParserStaticData&&) = delete;
  RRParserStaticData& operator=(const RRParserStaticData&) = delete;
  RRParserStaticData& operator=(RRParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag rrParserOnceFlag;
RRParserStaticData *rrParserStaticData = nullptr;

void rrParserInitialize() {
  assert(rrParserStaticData == nullptr);
  auto staticData = std::make_unique<RRParserStaticData>(
    std::vector<std::string>{
      "prog", "block", "stmtlist", "stmt", "expr", "arglist", "func", "paramlist", 
      "literal"
    },
    std::vector<std::string>{
      "", "'{'", "'}'", "';'", "'<-'", "'if'", "'else'", "'while'", "'('", 
      "')'", "'*'", "'/'", "'+'", "'-'", "'=='", "'>'", "'<'", "'!'", "','", 
      "'fun'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "INTLIT", "ID", "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,22,120,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,1,0,1,0,1,0,1,1,1,1,1,1,1,1,1,1,3,1,27,8,1,1,2,1,2,1,2,
  	5,2,32,8,2,10,2,12,2,35,9,2,1,2,3,2,38,8,2,1,3,1,3,1,3,1,3,1,3,1,3,1,
  	3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,3,3,61,8,3,
  	1,4,1,4,1,4,1,4,1,4,1,4,3,4,69,8,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,3,4,78,
  	8,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,5,4,89,8,4,10,4,12,4,92,9,4,1,
  	5,1,5,1,5,5,5,97,8,5,10,5,12,5,100,9,5,1,6,1,6,1,6,3,6,105,8,6,1,6,1,
  	6,1,6,1,7,1,7,1,7,5,7,113,8,7,10,7,12,7,116,9,7,1,8,1,8,1,8,0,1,8,9,0,
  	2,4,6,8,10,12,14,16,0,4,2,0,13,13,17,17,1,0,10,11,1,0,12,13,1,0,14,16,
  	129,0,18,1,0,0,0,2,26,1,0,0,0,4,28,1,0,0,0,6,60,1,0,0,0,8,77,1,0,0,0,
  	10,93,1,0,0,0,12,101,1,0,0,0,14,109,1,0,0,0,16,117,1,0,0,0,18,19,3,4,
  	2,0,19,20,5,0,0,1,20,1,1,0,0,0,21,22,5,1,0,0,22,23,3,4,2,0,23,24,5,2,
  	0,0,24,27,1,0,0,0,25,27,3,6,3,0,26,21,1,0,0,0,26,25,1,0,0,0,27,3,1,0,
  	0,0,28,33,3,6,3,0,29,30,5,3,0,0,30,32,3,4,2,0,31,29,1,0,0,0,32,35,1,0,
  	0,0,33,31,1,0,0,0,33,34,1,0,0,0,34,37,1,0,0,0,35,33,1,0,0,0,36,38,5,3,
  	0,0,37,36,1,0,0,0,37,38,1,0,0,0,38,5,1,0,0,0,39,40,5,21,0,0,40,41,5,4,
  	0,0,41,61,3,8,4,0,42,43,5,21,0,0,43,44,5,4,0,0,44,61,3,12,6,0,45,46,5,
  	5,0,0,46,47,3,8,4,0,47,48,3,2,1,0,48,61,1,0,0,0,49,50,5,5,0,0,50,51,3,
  	8,4,0,51,52,3,2,1,0,52,53,5,6,0,0,53,54,3,2,1,0,54,61,1,0,0,0,55,56,5,
  	7,0,0,56,57,3,8,4,0,57,58,3,2,1,0,58,61,1,0,0,0,59,61,3,8,4,0,60,39,1,
  	0,0,0,60,42,1,0,0,0,60,45,1,0,0,0,60,49,1,0,0,0,60,55,1,0,0,0,60,59,1,
  	0,0,0,61,7,1,0,0,0,62,63,6,4,-1,0,63,78,3,16,8,0,64,78,5,21,0,0,65,66,
  	5,21,0,0,66,68,5,8,0,0,67,69,3,10,5,0,68,67,1,0,0,0,68,69,1,0,0,0,69,
  	70,1,0,0,0,70,78,5,9,0,0,71,72,7,0,0,0,72,78,3,8,4,2,73,74,5,8,0,0,74,
  	75,3,8,4,0,75,76,5,9,0,0,76,78,1,0,0,0,77,62,1,0,0,0,77,64,1,0,0,0,77,
  	65,1,0,0,0,77,71,1,0,0,0,77,73,1,0,0,0,78,90,1,0,0,0,79,80,10,5,0,0,80,
  	81,7,1,0,0,81,89,3,8,4,6,82,83,10,4,0,0,83,84,7,2,0,0,84,89,3,8,4,5,85,
  	86,10,3,0,0,86,87,7,3,0,0,87,89,3,8,4,4,88,79,1,0,0,0,88,82,1,0,0,0,88,
  	85,1,0,0,0,89,92,1,0,0,0,90,88,1,0,0,0,90,91,1,0,0,0,91,9,1,0,0,0,92,
  	90,1,0,0,0,93,98,3,8,4,0,94,95,5,18,0,0,95,97,3,10,5,0,96,94,1,0,0,0,
  	97,100,1,0,0,0,98,96,1,0,0,0,98,99,1,0,0,0,99,11,1,0,0,0,100,98,1,0,0,
  	0,101,102,5,19,0,0,102,104,5,8,0,0,103,105,3,14,7,0,104,103,1,0,0,0,104,
  	105,1,0,0,0,105,106,1,0,0,0,106,107,5,9,0,0,107,108,3,2,1,0,108,13,1,
  	0,0,0,109,114,5,21,0,0,110,111,5,18,0,0,111,113,3,14,7,0,112,110,1,0,
  	0,0,113,116,1,0,0,0,114,112,1,0,0,0,114,115,1,0,0,0,115,15,1,0,0,0,116,
  	114,1,0,0,0,117,118,5,20,0,0,118,17,1,0,0,0,11,26,33,37,60,68,77,88,90,
  	98,104,114
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  rrParserStaticData = staticData.release();
}

}

RRParser::RRParser(TokenStream *input) : RRParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

RRParser::RRParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  RRParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *rrParserStaticData->atn, rrParserStaticData->decisionToDFA, rrParserStaticData->sharedContextCache, options);
}

RRParser::~RRParser() {
  delete _interpreter;
}

const atn::ATN& RRParser::getATN() const {
  return *rrParserStaticData->atn;
}

std::string RRParser::getGrammarFileName() const {
  return "RR.g4";
}

const std::vector<std::string>& RRParser::getRuleNames() const {
  return rrParserStaticData->ruleNames;
}

const dfa::Vocabulary& RRParser::getVocabulary() const {
  return rrParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView RRParser::getSerializedATN() const {
  return rrParserStaticData->serializedATN;
}


//----------------- ProgContext ------------------------------------------------------------------

RRParser::ProgContext::ProgContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

RRParser::StmtlistContext* RRParser::ProgContext::stmtlist() {
  return getRuleContext<RRParser::StmtlistContext>(0);
}

tree::TerminalNode* RRParser::ProgContext::EOF() {
  return getToken(RRParser::EOF, 0);
}


size_t RRParser::ProgContext::getRuleIndex() const {
  return RRParser::RuleProg;
}


std::any RRParser::ProgContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RRVisitor*>(visitor))
    return parserVisitor->visitProg(this);
  else
    return visitor->visitChildren(this);
}

RRParser::ProgContext* RRParser::prog() {
  ProgContext *_localctx = _tracker.createInstance<ProgContext>(_ctx, getState());
  enterRule(_localctx, 0, RRParser::RuleProg);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(18);
    stmtlist();
    setState(19);
    match(RRParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockContext ------------------------------------------------------------------

RRParser::BlockContext::BlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

RRParser::StmtlistContext* RRParser::BlockContext::stmtlist() {
  return getRuleContext<RRParser::StmtlistContext>(0);
}

RRParser::StmtContext* RRParser::BlockContext::stmt() {
  return getRuleContext<RRParser::StmtContext>(0);
}


size_t RRParser::BlockContext::getRuleIndex() const {
  return RRParser::RuleBlock;
}


std::any RRParser::BlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RRVisitor*>(visitor))
    return parserVisitor->visitBlock(this);
  else
    return visitor->visitChildren(this);
}

RRParser::BlockContext* RRParser::block() {
  BlockContext *_localctx = _tracker.createInstance<BlockContext>(_ctx, getState());
  enterRule(_localctx, 2, RRParser::RuleBlock);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(26);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case RRParser::T__0: {
        enterOuterAlt(_localctx, 1);
        setState(21);
        match(RRParser::T__0);
        setState(22);
        stmtlist();
        setState(23);
        match(RRParser::T__1);
        break;
      }

      case RRParser::T__4:
      case RRParser::T__6:
      case RRParser::T__7:
      case RRParser::T__12:
      case RRParser::T__16:
      case RRParser::INTLIT:
      case RRParser::ID: {
        enterOuterAlt(_localctx, 2);
        setState(25);
        stmt();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StmtlistContext ------------------------------------------------------------------

RRParser::StmtlistContext::StmtlistContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

RRParser::StmtContext* RRParser::StmtlistContext::stmt() {
  return getRuleContext<RRParser::StmtContext>(0);
}

std::vector<RRParser::StmtlistContext *> RRParser::StmtlistContext::stmtlist() {
  return getRuleContexts<RRParser::StmtlistContext>();
}

RRParser::StmtlistContext* RRParser::StmtlistContext::stmtlist(size_t i) {
  return getRuleContext<RRParser::StmtlistContext>(i);
}


size_t RRParser::StmtlistContext::getRuleIndex() const {
  return RRParser::RuleStmtlist;
}


std::any RRParser::StmtlistContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RRVisitor*>(visitor))
    return parserVisitor->visitStmtlist(this);
  else
    return visitor->visitChildren(this);
}

RRParser::StmtlistContext* RRParser::stmtlist() {
  StmtlistContext *_localctx = _tracker.createInstance<StmtlistContext>(_ctx, getState());
  enterRule(_localctx, 4, RRParser::RuleStmtlist);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(28);
    stmt();
    setState(33);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(29);
        match(RRParser::T__2);
        setState(30);
        stmtlist(); 
      }
      setState(35);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx);
    }
    setState(37);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
    case 1: {
      setState(36);
      match(RRParser::T__2);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StmtContext ------------------------------------------------------------------

RRParser::StmtContext::StmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t RRParser::StmtContext::getRuleIndex() const {
  return RRParser::RuleStmt;
}

void RRParser::StmtContext::copyFrom(StmtContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ExpressionContext ------------------------------------------------------------------

RRParser::ExprContext* RRParser::ExpressionContext::expr() {
  return getRuleContext<RRParser::ExprContext>(0);
}

RRParser::ExpressionContext::ExpressionContext(StmtContext *ctx) { copyFrom(ctx); }


std::any RRParser::ExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RRVisitor*>(visitor))
    return parserVisitor->visitExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IfElseConditionContext ------------------------------------------------------------------

RRParser::ExprContext* RRParser::IfElseConditionContext::expr() {
  return getRuleContext<RRParser::ExprContext>(0);
}

std::vector<RRParser::BlockContext *> RRParser::IfElseConditionContext::block() {
  return getRuleContexts<RRParser::BlockContext>();
}

RRParser::BlockContext* RRParser::IfElseConditionContext::block(size_t i) {
  return getRuleContext<RRParser::BlockContext>(i);
}

RRParser::IfElseConditionContext::IfElseConditionContext(StmtContext *ctx) { copyFrom(ctx); }


std::any RRParser::IfElseConditionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RRVisitor*>(visitor))
    return parserVisitor->visitIfElseCondition(this);
  else
    return visitor->visitChildren(this);
}
//----------------- VariableAssignmentContext ------------------------------------------------------------------

tree::TerminalNode* RRParser::VariableAssignmentContext::ID() {
  return getToken(RRParser::ID, 0);
}

RRParser::ExprContext* RRParser::VariableAssignmentContext::expr() {
  return getRuleContext<RRParser::ExprContext>(0);
}

RRParser::VariableAssignmentContext::VariableAssignmentContext(StmtContext *ctx) { copyFrom(ctx); }


std::any RRParser::VariableAssignmentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RRVisitor*>(visitor))
    return parserVisitor->visitVariableAssignment(this);
  else
    return visitor->visitChildren(this);
}
//----------------- FunctionDefinitionContext ------------------------------------------------------------------

tree::TerminalNode* RRParser::FunctionDefinitionContext::ID() {
  return getToken(RRParser::ID, 0);
}

RRParser::FuncContext* RRParser::FunctionDefinitionContext::func() {
  return getRuleContext<RRParser::FuncContext>(0);
}

RRParser::FunctionDefinitionContext::FunctionDefinitionContext(StmtContext *ctx) { copyFrom(ctx); }


std::any RRParser::FunctionDefinitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RRVisitor*>(visitor))
    return parserVisitor->visitFunctionDefinition(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IfConditionContext ------------------------------------------------------------------

RRParser::ExprContext* RRParser::IfConditionContext::expr() {
  return getRuleContext<RRParser::ExprContext>(0);
}

RRParser::BlockContext* RRParser::IfConditionContext::block() {
  return getRuleContext<RRParser::BlockContext>(0);
}

RRParser::IfConditionContext::IfConditionContext(StmtContext *ctx) { copyFrom(ctx); }


std::any RRParser::IfConditionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RRVisitor*>(visitor))
    return parserVisitor->visitIfCondition(this);
  else
    return visitor->visitChildren(this);
}
//----------------- WhileLoopContext ------------------------------------------------------------------

RRParser::ExprContext* RRParser::WhileLoopContext::expr() {
  return getRuleContext<RRParser::ExprContext>(0);
}

RRParser::BlockContext* RRParser::WhileLoopContext::block() {
  return getRuleContext<RRParser::BlockContext>(0);
}

RRParser::WhileLoopContext::WhileLoopContext(StmtContext *ctx) { copyFrom(ctx); }


std::any RRParser::WhileLoopContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RRVisitor*>(visitor))
    return parserVisitor->visitWhileLoop(this);
  else
    return visitor->visitChildren(this);
}
RRParser::StmtContext* RRParser::stmt() {
  StmtContext *_localctx = _tracker.createInstance<StmtContext>(_ctx, getState());
  enterRule(_localctx, 6, RRParser::RuleStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(60);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<RRParser::VariableAssignmentContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(39);
      match(RRParser::ID);
      setState(40);
      match(RRParser::T__3);
      setState(41);
      expr(0);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<RRParser::FunctionDefinitionContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(42);
      match(RRParser::ID);
      setState(43);
      match(RRParser::T__3);
      setState(44);
      func();
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<RRParser::IfConditionContext>(_localctx);
      enterOuterAlt(_localctx, 3);
      setState(45);
      match(RRParser::T__4);
      setState(46);
      antlrcpp::downCast<IfConditionContext *>(_localctx)->cond = expr(0);
      setState(47);
      antlrcpp::downCast<IfConditionContext *>(_localctx)->body = block();
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<RRParser::IfElseConditionContext>(_localctx);
      enterOuterAlt(_localctx, 4);
      setState(49);
      match(RRParser::T__4);
      setState(50);
      antlrcpp::downCast<IfElseConditionContext *>(_localctx)->cond = expr(0);
      setState(51);
      antlrcpp::downCast<IfElseConditionContext *>(_localctx)->truebody = block();
      setState(52);
      match(RRParser::T__5);
      setState(53);
      antlrcpp::downCast<IfElseConditionContext *>(_localctx)->falsebody = block();
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<RRParser::WhileLoopContext>(_localctx);
      enterOuterAlt(_localctx, 5);
      setState(55);
      match(RRParser::T__6);
      setState(56);
      antlrcpp::downCast<WhileLoopContext *>(_localctx)->cond = expr(0);
      setState(57);
      antlrcpp::downCast<WhileLoopContext *>(_localctx)->body = block();
      break;
    }

    case 6: {
      _localctx = _tracker.createInstance<RRParser::ExpressionContext>(_localctx);
      enterOuterAlt(_localctx, 6);
      setState(59);
      expr(0);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExprContext ------------------------------------------------------------------

RRParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t RRParser::ExprContext::getRuleIndex() const {
  return RRParser::RuleExpr;
}

void RRParser::ExprContext::copyFrom(ExprContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- OpUnaryContext ------------------------------------------------------------------

RRParser::ExprContext* RRParser::OpUnaryContext::expr() {
  return getRuleContext<RRParser::ExprContext>(0);
}

RRParser::OpUnaryContext::OpUnaryContext(ExprContext *ctx) { copyFrom(ctx); }


std::any RRParser::OpUnaryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RRVisitor*>(visitor))
    return parserVisitor->visitOpUnary(this);
  else
    return visitor->visitChildren(this);
}
//----------------- VariableReadContext ------------------------------------------------------------------

tree::TerminalNode* RRParser::VariableReadContext::ID() {
  return getToken(RRParser::ID, 0);
}

RRParser::VariableReadContext::VariableReadContext(ExprContext *ctx) { copyFrom(ctx); }


std::any RRParser::VariableReadContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RRVisitor*>(visitor))
    return parserVisitor->visitVariableRead(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LitContext ------------------------------------------------------------------

RRParser::LiteralContext* RRParser::LitContext::literal() {
  return getRuleContext<RRParser::LiteralContext>(0);
}

RRParser::LitContext::LitContext(ExprContext *ctx) { copyFrom(ctx); }


std::any RRParser::LitContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RRVisitor*>(visitor))
    return parserVisitor->visitLit(this);
  else
    return visitor->visitChildren(this);
}
//----------------- OpComparsionContext ------------------------------------------------------------------

std::vector<RRParser::ExprContext *> RRParser::OpComparsionContext::expr() {
  return getRuleContexts<RRParser::ExprContext>();
}

RRParser::ExprContext* RRParser::OpComparsionContext::expr(size_t i) {
  return getRuleContext<RRParser::ExprContext>(i);
}

RRParser::OpComparsionContext::OpComparsionContext(ExprContext *ctx) { copyFrom(ctx); }


std::any RRParser::OpComparsionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RRVisitor*>(visitor))
    return parserVisitor->visitOpComparsion(this);
  else
    return visitor->visitChildren(this);
}
//----------------- FunctionCallContext ------------------------------------------------------------------

tree::TerminalNode* RRParser::FunctionCallContext::ID() {
  return getToken(RRParser::ID, 0);
}

RRParser::ArglistContext* RRParser::FunctionCallContext::arglist() {
  return getRuleContext<RRParser::ArglistContext>(0);
}

RRParser::FunctionCallContext::FunctionCallContext(ExprContext *ctx) { copyFrom(ctx); }


std::any RRParser::FunctionCallContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RRVisitor*>(visitor))
    return parserVisitor->visitFunctionCall(this);
  else
    return visitor->visitChildren(this);
}
//----------------- OpParensContext ------------------------------------------------------------------

RRParser::ExprContext* RRParser::OpParensContext::expr() {
  return getRuleContext<RRParser::ExprContext>(0);
}

RRParser::OpParensContext::OpParensContext(ExprContext *ctx) { copyFrom(ctx); }


std::any RRParser::OpParensContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RRVisitor*>(visitor))
    return parserVisitor->visitOpParens(this);
  else
    return visitor->visitChildren(this);
}
//----------------- OpComputationContext ------------------------------------------------------------------

std::vector<RRParser::ExprContext *> RRParser::OpComputationContext::expr() {
  return getRuleContexts<RRParser::ExprContext>();
}

RRParser::ExprContext* RRParser::OpComputationContext::expr(size_t i) {
  return getRuleContext<RRParser::ExprContext>(i);
}

RRParser::OpComputationContext::OpComputationContext(ExprContext *ctx) { copyFrom(ctx); }


std::any RRParser::OpComputationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RRVisitor*>(visitor))
    return parserVisitor->visitOpComputation(this);
  else
    return visitor->visitChildren(this);
}

RRParser::ExprContext* RRParser::expr() {
   return expr(0);
}

RRParser::ExprContext* RRParser::expr(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  RRParser::ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, parentState);
  RRParser::ExprContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 8;
  enterRecursionRule(_localctx, 8, RRParser::RuleExpr, precedence);

    size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(77);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<LitContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(63);
      literal();
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<VariableReadContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(64);
      match(RRParser::ID);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<FunctionCallContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(65);
      antlrcpp::downCast<FunctionCallContext *>(_localctx)->fun = match(RRParser::ID);
      setState(66);
      match(RRParser::T__7);
      setState(68);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 3285248) != 0)) {
        setState(67);
        antlrcpp::downCast<FunctionCallContext *>(_localctx)->args = arglist();
      }
      setState(70);
      match(RRParser::T__8);
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<OpUnaryContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(71);
      antlrcpp::downCast<OpUnaryContext *>(_localctx)->op = _input->LT(1);
      _la = _input->LA(1);
      if (!(_la == RRParser::T__12

      || _la == RRParser::T__16)) {
        antlrcpp::downCast<OpUnaryContext *>(_localctx)->op = _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(72);
      antlrcpp::downCast<OpUnaryContext *>(_localctx)->e = expr(2);
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<OpParensContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(73);
      match(RRParser::T__7);
      setState(74);
      antlrcpp::downCast<OpParensContext *>(_localctx)->e = expr(0);
      setState(75);
      match(RRParser::T__8);
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(90);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(88);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<OpComputationContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(79);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(80);
          antlrcpp::downCast<OpComputationContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == RRParser::T__9

          || _la == RRParser::T__10)) {
            antlrcpp::downCast<OpComputationContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(81);
          antlrcpp::downCast<OpComputationContext *>(_localctx)->right = expr(6);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<OpComputationContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(82);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(83);
          antlrcpp::downCast<OpComputationContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == RRParser::T__11

          || _la == RRParser::T__12)) {
            antlrcpp::downCast<OpComputationContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(84);
          antlrcpp::downCast<OpComputationContext *>(_localctx)->right = expr(5);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<OpComparsionContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(85);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(86);
          antlrcpp::downCast<OpComparsionContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & 114688) != 0))) {
            antlrcpp::downCast<OpComparsionContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(87);
          antlrcpp::downCast<OpComparsionContext *>(_localctx)->right = expr(4);
          break;
        }

        default:
          break;
        } 
      }
      setState(92);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- ArglistContext ------------------------------------------------------------------

RRParser::ArglistContext::ArglistContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

RRParser::ExprContext* RRParser::ArglistContext::expr() {
  return getRuleContext<RRParser::ExprContext>(0);
}

std::vector<RRParser::ArglistContext *> RRParser::ArglistContext::arglist() {
  return getRuleContexts<RRParser::ArglistContext>();
}

RRParser::ArglistContext* RRParser::ArglistContext::arglist(size_t i) {
  return getRuleContext<RRParser::ArglistContext>(i);
}


size_t RRParser::ArglistContext::getRuleIndex() const {
  return RRParser::RuleArglist;
}


std::any RRParser::ArglistContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RRVisitor*>(visitor))
    return parserVisitor->visitArglist(this);
  else
    return visitor->visitChildren(this);
}

RRParser::ArglistContext* RRParser::arglist() {
  ArglistContext *_localctx = _tracker.createInstance<ArglistContext>(_ctx, getState());
  enterRule(_localctx, 10, RRParser::RuleArglist);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(93);
    expr(0);
    setState(98);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(94);
        match(RRParser::T__17);
        setState(95);
        arglist(); 
      }
      setState(100);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FuncContext ------------------------------------------------------------------

RRParser::FuncContext::FuncContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

RRParser::BlockContext* RRParser::FuncContext::block() {
  return getRuleContext<RRParser::BlockContext>(0);
}

RRParser::ParamlistContext* RRParser::FuncContext::paramlist() {
  return getRuleContext<RRParser::ParamlistContext>(0);
}


size_t RRParser::FuncContext::getRuleIndex() const {
  return RRParser::RuleFunc;
}


std::any RRParser::FuncContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RRVisitor*>(visitor))
    return parserVisitor->visitFunc(this);
  else
    return visitor->visitChildren(this);
}

RRParser::FuncContext* RRParser::func() {
  FuncContext *_localctx = _tracker.createInstance<FuncContext>(_ctx, getState());
  enterRule(_localctx, 12, RRParser::RuleFunc);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(101);
    match(RRParser::T__18);
    setState(102);
    match(RRParser::T__7);
    setState(104);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == RRParser::ID) {
      setState(103);
      antlrcpp::downCast<FuncContext *>(_localctx)->params = paramlist();
    }
    setState(106);
    match(RRParser::T__8);
    setState(107);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParamlistContext ------------------------------------------------------------------

RRParser::ParamlistContext::ParamlistContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* RRParser::ParamlistContext::ID() {
  return getToken(RRParser::ID, 0);
}

std::vector<RRParser::ParamlistContext *> RRParser::ParamlistContext::paramlist() {
  return getRuleContexts<RRParser::ParamlistContext>();
}

RRParser::ParamlistContext* RRParser::ParamlistContext::paramlist(size_t i) {
  return getRuleContext<RRParser::ParamlistContext>(i);
}


size_t RRParser::ParamlistContext::getRuleIndex() const {
  return RRParser::RuleParamlist;
}


std::any RRParser::ParamlistContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RRVisitor*>(visitor))
    return parserVisitor->visitParamlist(this);
  else
    return visitor->visitChildren(this);
}

RRParser::ParamlistContext* RRParser::paramlist() {
  ParamlistContext *_localctx = _tracker.createInstance<ParamlistContext>(_ctx, getState());
  enterRule(_localctx, 14, RRParser::RuleParamlist);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(109);
    match(RRParser::ID);
    setState(114);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(110);
        match(RRParser::T__17);
        setState(111);
        paramlist(); 
      }
      setState(116);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LiteralContext ------------------------------------------------------------------

RRParser::LiteralContext::LiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* RRParser::LiteralContext::INTLIT() {
  return getToken(RRParser::INTLIT, 0);
}


size_t RRParser::LiteralContext::getRuleIndex() const {
  return RRParser::RuleLiteral;
}


std::any RRParser::LiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RRVisitor*>(visitor))
    return parserVisitor->visitLiteral(this);
  else
    return visitor->visitChildren(this);
}

RRParser::LiteralContext* RRParser::literal() {
  LiteralContext *_localctx = _tracker.createInstance<LiteralContext>(_ctx, getState());
  enterRule(_localctx, 16, RRParser::RuleLiteral);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(117);
    match(RRParser::INTLIT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool RRParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 4: return exprSempred(antlrcpp::downCast<ExprContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool RRParser::exprSempred(ExprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 5);
    case 1: return precpred(_ctx, 4);
    case 2: return precpred(_ctx, 3);

  default:
    break;
  }
  return true;
}

void RRParser::initialize() {
  ::antlr4::internal::call_once(rrParserOnceFlag, rrParserInitialize);
}
