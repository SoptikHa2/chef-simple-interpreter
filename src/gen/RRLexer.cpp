
// Generated from RR.g4 by ANTLR 4.12.0


#include "RRLexer.h"


using namespace antlr4;



using namespace antlr4;

namespace {

struct RRLexerStaticData final {
  RRLexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  RRLexerStaticData(const RRLexerStaticData&) = delete;
  RRLexerStaticData(RRLexerStaticData&&) = delete;
  RRLexerStaticData& operator=(const RRLexerStaticData&) = delete;
  RRLexerStaticData& operator=(RRLexerStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> channelNames;
  const std::vector<std::string> modeNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag rrlexerLexerOnceFlag;
RRLexerStaticData *rrlexerLexerStaticData = nullptr;

void rrlexerLexerInitialize() {
  assert(rrlexerLexerStaticData == nullptr);
  auto staticData = std::make_unique<RRLexerStaticData>(
    std::vector<std::string>{
      "T__0", "T__1", "T__2", "T__3", "T__4", "T__5", "T__6", "T__7", "T__8", 
      "T__9", "T__10", "T__11", "T__12", "T__13", "T__14", "T__15", "T__16", 
      "T__17", "T__18", "INTLIT", "ID", "WS"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
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
  	4,0,22,114,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,
  	7,21,1,0,1,0,1,1,1,1,1,2,1,2,1,3,1,3,1,3,1,4,1,4,1,4,1,5,1,5,1,5,1,5,
  	1,5,1,6,1,6,1,6,1,6,1,6,1,6,1,7,1,7,1,8,1,8,1,9,1,9,1,10,1,10,1,11,1,
  	11,1,12,1,12,1,13,1,13,1,13,1,14,1,14,1,15,1,15,1,16,1,16,1,17,1,17,1,
  	18,1,18,1,18,1,18,1,19,3,19,97,8,19,1,19,4,19,100,8,19,11,19,12,19,101,
  	1,20,1,20,5,20,106,8,20,10,20,12,20,109,9,20,1,21,1,21,1,21,1,21,0,0,
  	22,1,1,3,2,5,3,7,4,9,5,11,6,13,7,15,8,17,9,19,10,21,11,23,12,25,13,27,
  	14,29,15,31,16,33,17,35,18,37,19,39,20,41,21,43,22,1,0,5,1,0,45,45,1,
  	0,48,57,3,0,65,90,95,95,97,122,4,0,48,57,65,90,95,95,97,122,3,0,9,10,
  	13,13,32,32,116,0,1,1,0,0,0,0,3,1,0,0,0,0,5,1,0,0,0,0,7,1,0,0,0,0,9,1,
  	0,0,0,0,11,1,0,0,0,0,13,1,0,0,0,0,15,1,0,0,0,0,17,1,0,0,0,0,19,1,0,0,
  	0,0,21,1,0,0,0,0,23,1,0,0,0,0,25,1,0,0,0,0,27,1,0,0,0,0,29,1,0,0,0,0,
  	31,1,0,0,0,0,33,1,0,0,0,0,35,1,0,0,0,0,37,1,0,0,0,0,39,1,0,0,0,0,41,1,
  	0,0,0,0,43,1,0,0,0,1,45,1,0,0,0,3,47,1,0,0,0,5,49,1,0,0,0,7,51,1,0,0,
  	0,9,54,1,0,0,0,11,57,1,0,0,0,13,62,1,0,0,0,15,68,1,0,0,0,17,70,1,0,0,
  	0,19,72,1,0,0,0,21,74,1,0,0,0,23,76,1,0,0,0,25,78,1,0,0,0,27,80,1,0,0,
  	0,29,83,1,0,0,0,31,85,1,0,0,0,33,87,1,0,0,0,35,89,1,0,0,0,37,91,1,0,0,
  	0,39,96,1,0,0,0,41,103,1,0,0,0,43,110,1,0,0,0,45,46,5,123,0,0,46,2,1,
  	0,0,0,47,48,5,125,0,0,48,4,1,0,0,0,49,50,5,59,0,0,50,6,1,0,0,0,51,52,
  	5,60,0,0,52,53,5,45,0,0,53,8,1,0,0,0,54,55,5,105,0,0,55,56,5,102,0,0,
  	56,10,1,0,0,0,57,58,5,101,0,0,58,59,5,108,0,0,59,60,5,115,0,0,60,61,5,
  	101,0,0,61,12,1,0,0,0,62,63,5,119,0,0,63,64,5,104,0,0,64,65,5,105,0,0,
  	65,66,5,108,0,0,66,67,5,101,0,0,67,14,1,0,0,0,68,69,5,40,0,0,69,16,1,
  	0,0,0,70,71,5,41,0,0,71,18,1,0,0,0,72,73,5,42,0,0,73,20,1,0,0,0,74,75,
  	5,47,0,0,75,22,1,0,0,0,76,77,5,43,0,0,77,24,1,0,0,0,78,79,5,45,0,0,79,
  	26,1,0,0,0,80,81,5,61,0,0,81,82,5,61,0,0,82,28,1,0,0,0,83,84,5,62,0,0,
  	84,30,1,0,0,0,85,86,5,60,0,0,86,32,1,0,0,0,87,88,5,33,0,0,88,34,1,0,0,
  	0,89,90,5,44,0,0,90,36,1,0,0,0,91,92,5,102,0,0,92,93,5,117,0,0,93,94,
  	5,110,0,0,94,38,1,0,0,0,95,97,7,0,0,0,96,95,1,0,0,0,96,97,1,0,0,0,97,
  	99,1,0,0,0,98,100,7,1,0,0,99,98,1,0,0,0,100,101,1,0,0,0,101,99,1,0,0,
  	0,101,102,1,0,0,0,102,40,1,0,0,0,103,107,7,2,0,0,104,106,7,3,0,0,105,
  	104,1,0,0,0,106,109,1,0,0,0,107,105,1,0,0,0,107,108,1,0,0,0,108,42,1,
  	0,0,0,109,107,1,0,0,0,110,111,7,4,0,0,111,112,1,0,0,0,112,113,6,21,0,
  	0,113,44,1,0,0,0,4,0,96,101,107,1,0,1,0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  rrlexerLexerStaticData = staticData.release();
}

}

RRLexer::RRLexer(CharStream *input) : Lexer(input) {
  RRLexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *rrlexerLexerStaticData->atn, rrlexerLexerStaticData->decisionToDFA, rrlexerLexerStaticData->sharedContextCache);
}

RRLexer::~RRLexer() {
  delete _interpreter;
}

std::string RRLexer::getGrammarFileName() const {
  return "RR.g4";
}

const std::vector<std::string>& RRLexer::getRuleNames() const {
  return rrlexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& RRLexer::getChannelNames() const {
  return rrlexerLexerStaticData->channelNames;
}

const std::vector<std::string>& RRLexer::getModeNames() const {
  return rrlexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& RRLexer::getVocabulary() const {
  return rrlexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView RRLexer::getSerializedATN() const {
  return rrlexerLexerStaticData->serializedATN;
}

const atn::ATN& RRLexer::getATN() const {
  return *rrlexerLexerStaticData->atn;
}




void RRLexer::initialize() {
  ::antlr4::internal::call_once(rrlexerLexerOnceFlag, rrlexerLexerInitialize);
}
