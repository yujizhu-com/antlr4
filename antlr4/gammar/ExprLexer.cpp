
// Generated from Expr.g4 by ANTLR 4.11.1


#include "ExprLexer.h"


using namespace antlr4;



using namespace antlr4;

namespace {

struct ExprLexerStaticData final {
  ExprLexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  ExprLexerStaticData(const ExprLexerStaticData&) = delete;
  ExprLexerStaticData(ExprLexerStaticData&&) = delete;
  ExprLexerStaticData& operator=(const ExprLexerStaticData&) = delete;
  ExprLexerStaticData& operator=(ExprLexerStaticData&&) = delete;

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

::antlr4::internal::OnceFlag exprlexerLexerOnceFlag;
ExprLexerStaticData *exprlexerLexerStaticData = nullptr;

void exprlexerLexerInitialize() {
  assert(exprlexerLexerStaticData == nullptr);
  auto staticData = std::make_unique<ExprLexerStaticData>(
    std::vector<std::string>{
      "T__0", "T__1", "T__2", "T__3", "T__4", "T__5", "T__6", "PKD", "PVD", 
      "PV", "NL", "BlockComment", "LineComment", "STR0"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
    },
    std::vector<std::string>{
      "", "'/@'", "'/'", "'+'", "'%'", "'='", "'@'", "':'", "'.'", "", "", 
      "", "", "", "'EOF'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "PKD", "PVD", "PV", "NL", "BlockComment", 
      "LineComment", "STR0"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,0,14,94,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,1,0,
  	1,0,1,0,1,1,1,1,1,2,1,2,1,3,1,3,1,4,1,4,1,5,1,5,1,6,1,6,1,7,1,7,1,8,1,
  	8,1,9,4,9,50,8,9,11,9,12,9,51,1,9,1,9,4,9,56,8,9,11,9,12,9,57,3,9,60,
  	8,9,1,10,1,10,1,11,1,11,1,11,1,11,5,11,68,8,11,10,11,12,11,71,9,11,1,
  	11,1,11,1,11,1,11,1,11,1,12,1,12,1,12,1,12,5,12,82,8,12,10,12,12,12,85,
  	9,12,1,12,1,12,1,13,1,13,1,13,1,13,1,13,1,13,1,69,0,14,1,1,3,2,5,3,7,
  	4,9,5,11,6,13,7,15,8,17,9,19,10,21,11,23,12,25,13,27,14,1,0,5,3,0,42,
  	42,60,60,62,62,6,0,32,32,48,57,65,90,95,95,97,122,19968,40869,3,0,48,
  	57,65,90,97,122,2,0,9,10,13,13,2,0,10,10,13,13,98,0,1,1,0,0,0,0,3,1,0,
  	0,0,0,5,1,0,0,0,0,7,1,0,0,0,0,9,1,0,0,0,0,11,1,0,0,0,0,13,1,0,0,0,0,15,
  	1,0,0,0,0,17,1,0,0,0,0,19,1,0,0,0,0,21,1,0,0,0,0,23,1,0,0,0,0,25,1,0,
  	0,0,0,27,1,0,0,0,1,29,1,0,0,0,3,32,1,0,0,0,5,34,1,0,0,0,7,36,1,0,0,0,
  	9,38,1,0,0,0,11,40,1,0,0,0,13,42,1,0,0,0,15,44,1,0,0,0,17,46,1,0,0,0,
  	19,49,1,0,0,0,21,61,1,0,0,0,23,63,1,0,0,0,25,77,1,0,0,0,27,88,1,0,0,0,
  	29,30,5,47,0,0,30,31,5,64,0,0,31,2,1,0,0,0,32,33,5,47,0,0,33,4,1,0,0,
  	0,34,35,5,43,0,0,35,6,1,0,0,0,36,37,5,37,0,0,37,8,1,0,0,0,38,39,5,61,
  	0,0,39,10,1,0,0,0,40,41,5,64,0,0,41,12,1,0,0,0,42,43,5,58,0,0,43,14,1,
  	0,0,0,44,45,5,46,0,0,45,16,1,0,0,0,46,47,7,0,0,0,47,18,1,0,0,0,48,50,
  	7,1,0,0,49,48,1,0,0,0,50,51,1,0,0,0,51,49,1,0,0,0,51,52,1,0,0,0,52,59,
  	1,0,0,0,53,55,5,46,0,0,54,56,7,2,0,0,55,54,1,0,0,0,56,57,1,0,0,0,57,55,
  	1,0,0,0,57,58,1,0,0,0,58,60,1,0,0,0,59,53,1,0,0,0,59,60,1,0,0,0,60,20,
  	1,0,0,0,61,62,7,3,0,0,62,22,1,0,0,0,63,64,5,47,0,0,64,65,5,42,0,0,65,
  	69,1,0,0,0,66,68,9,0,0,0,67,66,1,0,0,0,68,71,1,0,0,0,69,70,1,0,0,0,69,
  	67,1,0,0,0,70,72,1,0,0,0,71,69,1,0,0,0,72,73,5,42,0,0,73,74,5,47,0,0,
  	74,75,1,0,0,0,75,76,6,11,0,0,76,24,1,0,0,0,77,78,5,47,0,0,78,79,5,47,
  	0,0,79,83,1,0,0,0,80,82,8,4,0,0,81,80,1,0,0,0,82,85,1,0,0,0,83,81,1,0,
  	0,0,83,84,1,0,0,0,84,86,1,0,0,0,85,83,1,0,0,0,86,87,6,12,0,0,87,26,1,
  	0,0,0,88,89,5,69,0,0,89,90,5,79,0,0,90,91,5,70,0,0,91,92,1,0,0,0,92,93,
  	6,13,0,0,93,28,1,0,0,0,6,0,51,57,59,69,83,1,6,0,0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  exprlexerLexerStaticData = staticData.release();
}

}

ExprLexer::ExprLexer(CharStream *input) : Lexer(input) {
  ExprLexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *exprlexerLexerStaticData->atn, exprlexerLexerStaticData->decisionToDFA, exprlexerLexerStaticData->sharedContextCache);
}

ExprLexer::~ExprLexer() {
  delete _interpreter;
}

std::string ExprLexer::getGrammarFileName() const {
  return "Expr.g4";
}

const std::vector<std::string>& ExprLexer::getRuleNames() const {
  return exprlexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& ExprLexer::getChannelNames() const {
  return exprlexerLexerStaticData->channelNames;
}

const std::vector<std::string>& ExprLexer::getModeNames() const {
  return exprlexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& ExprLexer::getVocabulary() const {
  return exprlexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView ExprLexer::getSerializedATN() const {
  return exprlexerLexerStaticData->serializedATN;
}

const atn::ATN& ExprLexer::getATN() const {
  return *exprlexerLexerStaticData->atn;
}




void ExprLexer::initialize() {
  ::antlr4::internal::call_once(exprlexerLexerOnceFlag, exprlexerLexerInitialize);
}
