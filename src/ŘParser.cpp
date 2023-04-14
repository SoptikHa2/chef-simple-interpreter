
// Generated from Ř.g4 by ANTLR 4.12.0


#include "ŘVisitor.h"

#include "ŘParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct ŘParserStaticData final {
  ŘParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  ŘParserStaticData(const ŘParserStaticData&) = delete;
  ŘParserStaticData(ŘParserStaticData&&) = delete;
  ŘParserStaticData& operator=(const ŘParserStaticData&) = delete;
  ŘParserStaticData& operator=(ŘParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag řParserOnceFlag;
ŘParserStaticData *řParserStaticData = nullptr;

void řParserInitialize() {
  assert(řParserStaticData == nullptr);
  auto staticData = std::make_unique<ŘParserStaticData>(
    std::vector<std::string>{
      "prog", "block", "stmtlist", "stmt", "expr", "arglist", "func", "literal"
    },
    std::vector<std::string>{
      "", "'{'", "'}'", "';'", "'<-'", "'if'", "'('", "')'", "'else'", "'while'", 
      "'*'", "'/'", "'+'", "'-'", "'=='", "'>'", "'<'", "'!'", "','", "'fun'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "INTLIT", "ID", "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,22,121,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,1,0,1,0,1,1,1,1,1,1,1,1,1,1,3,1,24,8,1,1,2,1,2,1,2,5,2,29,8,2,10,
  	2,12,2,32,9,2,1,2,3,2,35,8,2,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,
  	1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,3,
  	3,64,8,3,1,4,1,4,1,4,1,4,1,4,1,4,3,4,72,8,4,1,4,1,4,1,4,1,4,1,4,1,4,1,
  	4,3,4,81,8,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,
  	1,4,5,4,98,8,4,10,4,12,4,101,9,4,1,5,1,5,1,5,5,5,106,8,5,10,5,12,5,109,
  	9,5,1,6,1,6,1,6,3,6,114,8,6,1,6,1,6,1,6,1,7,1,7,1,7,0,1,8,8,0,2,4,6,8,
  	10,12,14,0,2,1,0,10,11,1,0,12,13,132,0,16,1,0,0,0,2,23,1,0,0,0,4,25,1,
  	0,0,0,6,63,1,0,0,0,8,80,1,0,0,0,10,102,1,0,0,0,12,110,1,0,0,0,14,118,
  	1,0,0,0,16,17,3,2,1,0,17,1,1,0,0,0,18,19,5,1,0,0,19,20,3,4,2,0,20,21,
  	5,2,0,0,21,24,1,0,0,0,22,24,3,6,3,0,23,18,1,0,0,0,23,22,1,0,0,0,24,3,
  	1,0,0,0,25,30,3,6,3,0,26,27,5,3,0,0,27,29,3,4,2,0,28,26,1,0,0,0,29,32,
  	1,0,0,0,30,28,1,0,0,0,30,31,1,0,0,0,31,34,1,0,0,0,32,30,1,0,0,0,33,35,
  	5,3,0,0,34,33,1,0,0,0,34,35,1,0,0,0,35,5,1,0,0,0,36,37,5,21,0,0,37,38,
  	5,4,0,0,38,64,3,8,4,0,39,40,5,21,0,0,40,41,5,4,0,0,41,64,3,12,6,0,42,
  	43,5,5,0,0,43,44,5,6,0,0,44,45,3,8,4,0,45,46,5,7,0,0,46,47,3,2,1,0,47,
  	64,1,0,0,0,48,49,5,5,0,0,49,50,5,6,0,0,50,51,3,8,4,0,51,52,5,7,0,0,52,
  	53,3,2,1,0,53,54,5,8,0,0,54,55,3,2,1,0,55,64,1,0,0,0,56,57,5,9,0,0,57,
  	58,5,6,0,0,58,59,3,8,4,0,59,60,5,7,0,0,60,61,3,2,1,0,61,64,1,0,0,0,62,
  	64,3,8,4,0,63,36,1,0,0,0,63,39,1,0,0,0,63,42,1,0,0,0,63,48,1,0,0,0,63,
  	56,1,0,0,0,63,62,1,0,0,0,64,7,1,0,0,0,65,66,6,4,-1,0,66,81,3,14,7,0,67,
  	81,5,21,0,0,68,69,5,21,0,0,69,71,5,6,0,0,70,72,3,10,5,0,71,70,1,0,0,0,
  	71,72,1,0,0,0,72,73,1,0,0,0,73,81,5,7,0,0,74,75,5,17,0,0,75,81,3,8,4,
  	2,76,77,5,6,0,0,77,78,3,8,4,0,78,79,5,7,0,0,79,81,1,0,0,0,80,65,1,0,0,
  	0,80,67,1,0,0,0,80,68,1,0,0,0,80,74,1,0,0,0,80,76,1,0,0,0,81,99,1,0,0,
  	0,82,83,10,7,0,0,83,84,7,0,0,0,84,98,3,8,4,8,85,86,10,6,0,0,86,87,7,1,
  	0,0,87,98,3,8,4,7,88,89,10,5,0,0,89,90,5,14,0,0,90,98,3,8,4,6,91,92,10,
  	4,0,0,92,93,5,15,0,0,93,98,3,8,4,5,94,95,10,3,0,0,95,96,5,16,0,0,96,98,
  	3,8,4,4,97,82,1,0,0,0,97,85,1,0,0,0,97,88,1,0,0,0,97,91,1,0,0,0,97,94,
  	1,0,0,0,98,101,1,0,0,0,99,97,1,0,0,0,99,100,1,0,0,0,100,9,1,0,0,0,101,
  	99,1,0,0,0,102,107,3,8,4,0,103,104,5,18,0,0,104,106,3,10,5,0,105,103,
  	1,0,0,0,106,109,1,0,0,0,107,105,1,0,0,0,107,108,1,0,0,0,108,11,1,0,0,
  	0,109,107,1,0,0,0,110,111,5,19,0,0,111,113,5,6,0,0,112,114,3,10,5,0,113,
  	112,1,0,0,0,113,114,1,0,0,0,114,115,1,0,0,0,115,116,5,7,0,0,116,117,3,
  	2,1,0,117,13,1,0,0,0,118,119,5,20,0,0,119,15,1,0,0,0,10,23,30,34,63,71,
  	80,97,99,107,113
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  řParserStaticData = staticData.release();
}

}

ŘParser::ŘParser(TokenStream *input) : ŘParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

ŘParser::ŘParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  ŘParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *řParserStaticData->atn, řParserStaticData->decisionToDFA, řParserStaticData->sharedContextCache, options);
}

ŘParser::~ŘParser() {
  delete _interpreter;
}

const atn::ATN& ŘParser::getATN() const {
  return *řParserStaticData->atn;
}

std::string ŘParser::getGrammarFileName() const {
  return "Ř.g4";
}

const std::vector<std::string>& ŘParser::getRuleNames() const {
  return řParserStaticData->ruleNames;
}

const dfa::Vocabulary& ŘParser::getVocabulary() const {
  return řParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView ŘParser::getSerializedATN() const {
  return řParserStaticData->serializedATN;
}


//----------------- ProgContext ------------------------------------------------------------------

ŘParser::ProgContext::ProgContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ŘParser::BlockContext* ŘParser::ProgContext::block() {
  return getRuleContext<ŘParser::BlockContext>(0);
}


size_t ŘParser::ProgContext::getRuleIndex() const {
  return ŘParser::RuleProg;
}


std::any ŘParser::ProgContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ŘVisitor*>(visitor))
    return parserVisitor->visitProg(this);
  else
    return visitor->visitChildren(this);
}

ŘParser::ProgContext* ŘParser::prog() {
  ProgContext *_localctx = _tracker.createInstance<ProgContext>(_ctx, getState());
  enterRule(_localctx, 0, ŘParser::RuleProg);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(16);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockContext ------------------------------------------------------------------

ŘParser::BlockContext::BlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ŘParser::StmtlistContext* ŘParser::BlockContext::stmtlist() {
  return getRuleContext<ŘParser::StmtlistContext>(0);
}

ŘParser::StmtContext* ŘParser::BlockContext::stmt() {
  return getRuleContext<ŘParser::StmtContext>(0);
}


size_t ŘParser::BlockContext::getRuleIndex() const {
  return ŘParser::RuleBlock;
}


std::any ŘParser::BlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ŘVisitor*>(visitor))
    return parserVisitor->visitBlock(this);
  else
    return visitor->visitChildren(this);
}

ŘParser::BlockContext* ŘParser::block() {
  BlockContext *_localctx = _tracker.createInstance<BlockContext>(_ctx, getState());
  enterRule(_localctx, 2, ŘParser::RuleBlock);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(23);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ŘParser::T__0: {
        enterOuterAlt(_localctx, 1);
        setState(18);
        match(ŘParser::T__0);
        setState(19);
        stmtlist();
        setState(20);
        match(ŘParser::T__1);
        break;
      }

      case ŘParser::T__4:
      case ŘParser::T__5:
      case ŘParser::T__8:
      case ŘParser::T__16:
      case ŘParser::INTLIT:
      case ŘParser::ID: {
        enterOuterAlt(_localctx, 2);
        setState(22);
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

ŘParser::StmtlistContext::StmtlistContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ŘParser::StmtContext* ŘParser::StmtlistContext::stmt() {
  return getRuleContext<ŘParser::StmtContext>(0);
}

std::vector<ŘParser::StmtlistContext *> ŘParser::StmtlistContext::stmtlist() {
  return getRuleContexts<ŘParser::StmtlistContext>();
}

ŘParser::StmtlistContext* ŘParser::StmtlistContext::stmtlist(size_t i) {
  return getRuleContext<ŘParser::StmtlistContext>(i);
}


size_t ŘParser::StmtlistContext::getRuleIndex() const {
  return ŘParser::RuleStmtlist;
}


std::any ŘParser::StmtlistContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ŘVisitor*>(visitor))
    return parserVisitor->visitStmtlist(this);
  else
    return visitor->visitChildren(this);
}

ŘParser::StmtlistContext* ŘParser::stmtlist() {
  StmtlistContext *_localctx = _tracker.createInstance<StmtlistContext>(_ctx, getState());
  enterRule(_localctx, 4, ŘParser::RuleStmtlist);

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
    setState(25);
    stmt();
    setState(30);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(26);
        match(ŘParser::T__2);
        setState(27);
        stmtlist(); 
      }
      setState(32);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx);
    }
    setState(34);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
    case 1: {
      setState(33);
      match(ŘParser::T__2);
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

ŘParser::StmtContext::StmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ŘParser::StmtContext::ID() {
  return getToken(ŘParser::ID, 0);
}

ŘParser::ExprContext* ŘParser::StmtContext::expr() {
  return getRuleContext<ŘParser::ExprContext>(0);
}

ŘParser::FuncContext* ŘParser::StmtContext::func() {
  return getRuleContext<ŘParser::FuncContext>(0);
}

std::vector<ŘParser::BlockContext *> ŘParser::StmtContext::block() {
  return getRuleContexts<ŘParser::BlockContext>();
}

ŘParser::BlockContext* ŘParser::StmtContext::block(size_t i) {
  return getRuleContext<ŘParser::BlockContext>(i);
}


size_t ŘParser::StmtContext::getRuleIndex() const {
  return ŘParser::RuleStmt;
}


std::any ŘParser::StmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ŘVisitor*>(visitor))
    return parserVisitor->visitStmt(this);
  else
    return visitor->visitChildren(this);
}

ŘParser::StmtContext* ŘParser::stmt() {
  StmtContext *_localctx = _tracker.createInstance<StmtContext>(_ctx, getState());
  enterRule(_localctx, 6, ŘParser::RuleStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(63);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(36);
      match(ŘParser::ID);
      setState(37);
      match(ŘParser::T__3);
      setState(38);
      expr(0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(39);
      match(ŘParser::ID);
      setState(40);
      match(ŘParser::T__3);
      setState(41);
      func();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(42);
      match(ŘParser::T__4);
      setState(43);
      match(ŘParser::T__5);
      setState(44);
      antlrcpp::downCast<StmtContext *>(_localctx)->cond = expr(0);
      setState(45);
      match(ŘParser::T__6);
      setState(46);
      antlrcpp::downCast<StmtContext *>(_localctx)->body = block();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(48);
      match(ŘParser::T__4);
      setState(49);
      match(ŘParser::T__5);
      setState(50);
      antlrcpp::downCast<StmtContext *>(_localctx)->cond = expr(0);
      setState(51);
      match(ŘParser::T__6);
      setState(52);
      antlrcpp::downCast<StmtContext *>(_localctx)->truebody = block();
      setState(53);
      match(ŘParser::T__7);
      setState(54);
      antlrcpp::downCast<StmtContext *>(_localctx)->falsebody = block();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(56);
      match(ŘParser::T__8);
      setState(57);
      match(ŘParser::T__5);
      setState(58);
      expr(0);
      setState(59);
      match(ŘParser::T__6);
      setState(60);
      block();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(62);
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

ŘParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ŘParser::LiteralContext* ŘParser::ExprContext::literal() {
  return getRuleContext<ŘParser::LiteralContext>(0);
}

tree::TerminalNode* ŘParser::ExprContext::ID() {
  return getToken(ŘParser::ID, 0);
}

ŘParser::ArglistContext* ŘParser::ExprContext::arglist() {
  return getRuleContext<ŘParser::ArglistContext>(0);
}

std::vector<ŘParser::ExprContext *> ŘParser::ExprContext::expr() {
  return getRuleContexts<ŘParser::ExprContext>();
}

ŘParser::ExprContext* ŘParser::ExprContext::expr(size_t i) {
  return getRuleContext<ŘParser::ExprContext>(i);
}


size_t ŘParser::ExprContext::getRuleIndex() const {
  return ŘParser::RuleExpr;
}


std::any ŘParser::ExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ŘVisitor*>(visitor))
    return parserVisitor->visitExpr(this);
  else
    return visitor->visitChildren(this);
}


ŘParser::ExprContext* ŘParser::expr() {
   return expr(0);
}

ŘParser::ExprContext* ŘParser::expr(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  ŘParser::ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, parentState);
  ŘParser::ExprContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 8;
  enterRecursionRule(_localctx, 8, ŘParser::RuleExpr, precedence);

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
    setState(80);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
    case 1: {
      setState(66);
      literal();
      break;
    }

    case 2: {
      setState(67);
      match(ŘParser::ID);
      break;
    }

    case 3: {
      setState(68);
      antlrcpp::downCast<ExprContext *>(_localctx)->fun = match(ŘParser::ID);
      setState(69);
      match(ŘParser::T__5);
      setState(71);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 3276864) != 0)) {
        setState(70);
        antlrcpp::downCast<ExprContext *>(_localctx)->args = arglist();
      }
      setState(73);
      match(ŘParser::T__6);
      break;
    }

    case 4: {
      setState(74);
      match(ŘParser::T__16);
      setState(75);
      expr(2);
      break;
    }

    case 5: {
      setState(76);
      match(ŘParser::T__5);
      setState(77);
      expr(0);
      setState(78);
      match(ŘParser::T__6);
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(99);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(97);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          _localctx->left = previousContext;
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(82);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(83);
          antlrcpp::downCast<ExprContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == ŘParser::T__9

          || _la == ŘParser::T__10)) {
            antlrcpp::downCast<ExprContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(84);
          antlrcpp::downCast<ExprContext *>(_localctx)->right = expr(8);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          _localctx->left = previousContext;
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(85);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(86);
          antlrcpp::downCast<ExprContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == ŘParser::T__11

          || _la == ŘParser::T__12)) {
            antlrcpp::downCast<ExprContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(87);
          antlrcpp::downCast<ExprContext *>(_localctx)->right = expr(7);
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          _localctx->left = previousContext;
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(88);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(89);
          antlrcpp::downCast<ExprContext *>(_localctx)->op = match(ŘParser::T__13);
          setState(90);
          antlrcpp::downCast<ExprContext *>(_localctx)->right = expr(6);
          break;
        }

        case 4: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          _localctx->left = previousContext;
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(91);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(92);
          antlrcpp::downCast<ExprContext *>(_localctx)->op = match(ŘParser::T__14);
          setState(93);
          antlrcpp::downCast<ExprContext *>(_localctx)->right = expr(5);
          break;
        }

        case 5: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          _localctx->left = previousContext;
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(94);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(95);
          antlrcpp::downCast<ExprContext *>(_localctx)->op = match(ŘParser::T__15);
          setState(96);
          antlrcpp::downCast<ExprContext *>(_localctx)->right = expr(4);
          break;
        }

        default:
          break;
        } 
      }
      setState(101);
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

ŘParser::ArglistContext::ArglistContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ŘParser::ExprContext* ŘParser::ArglistContext::expr() {
  return getRuleContext<ŘParser::ExprContext>(0);
}

std::vector<ŘParser::ArglistContext *> ŘParser::ArglistContext::arglist() {
  return getRuleContexts<ŘParser::ArglistContext>();
}

ŘParser::ArglistContext* ŘParser::ArglistContext::arglist(size_t i) {
  return getRuleContext<ŘParser::ArglistContext>(i);
}


size_t ŘParser::ArglistContext::getRuleIndex() const {
  return ŘParser::RuleArglist;
}


std::any ŘParser::ArglistContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ŘVisitor*>(visitor))
    return parserVisitor->visitArglist(this);
  else
    return visitor->visitChildren(this);
}

ŘParser::ArglistContext* ŘParser::arglist() {
  ArglistContext *_localctx = _tracker.createInstance<ArglistContext>(_ctx, getState());
  enterRule(_localctx, 10, ŘParser::RuleArglist);

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
    setState(102);
    expr(0);
    setState(107);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(103);
        match(ŘParser::T__17);
        setState(104);
        arglist(); 
      }
      setState(109);
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

ŘParser::FuncContext::FuncContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ŘParser::BlockContext* ŘParser::FuncContext::block() {
  return getRuleContext<ŘParser::BlockContext>(0);
}

ŘParser::ArglistContext* ŘParser::FuncContext::arglist() {
  return getRuleContext<ŘParser::ArglistContext>(0);
}


size_t ŘParser::FuncContext::getRuleIndex() const {
  return ŘParser::RuleFunc;
}


std::any ŘParser::FuncContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ŘVisitor*>(visitor))
    return parserVisitor->visitFunc(this);
  else
    return visitor->visitChildren(this);
}

ŘParser::FuncContext* ŘParser::func() {
  FuncContext *_localctx = _tracker.createInstance<FuncContext>(_ctx, getState());
  enterRule(_localctx, 12, ŘParser::RuleFunc);
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
    setState(110);
    match(ŘParser::T__18);
    setState(111);
    match(ŘParser::T__5);
    setState(113);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 3276864) != 0)) {
      setState(112);
      antlrcpp::downCast<FuncContext *>(_localctx)->args = arglist();
    }
    setState(115);
    match(ŘParser::T__6);
    setState(116);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LiteralContext ------------------------------------------------------------------

ŘParser::LiteralContext::LiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ŘParser::LiteralContext::INTLIT() {
  return getToken(ŘParser::INTLIT, 0);
}


size_t ŘParser::LiteralContext::getRuleIndex() const {
  return ŘParser::RuleLiteral;
}


std::any ŘParser::LiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ŘVisitor*>(visitor))
    return parserVisitor->visitLiteral(this);
  else
    return visitor->visitChildren(this);
}

ŘParser::LiteralContext* ŘParser::literal() {
  LiteralContext *_localctx = _tracker.createInstance<LiteralContext>(_ctx, getState());
  enterRule(_localctx, 14, ŘParser::RuleLiteral);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(118);
    match(ŘParser::INTLIT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool ŘParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 4: return exprSempred(antlrcpp::downCast<ExprContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool ŘParser::exprSempred(ExprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 7);
    case 1: return precpred(_ctx, 6);
    case 2: return precpred(_ctx, 5);
    case 3: return precpred(_ctx, 4);
    case 4: return precpred(_ctx, 3);

  default:
    break;
  }
  return true;
}

void ŘParser::initialize() {
  ::antlr4::internal::call_once(řParserOnceFlag, řParserInitialize);
}
