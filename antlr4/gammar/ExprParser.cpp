
// Generated from Expr.g4 by ANTLR 4.11.1


#include "ExprListener.h"
#include "ExprVisitor.h"

#include "ExprParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct ExprParserStaticData final {
  ExprParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  ExprParserStaticData(const ExprParserStaticData&) = delete;
  ExprParserStaticData(ExprParserStaticData&&) = delete;
  ExprParserStaticData& operator=(const ExprParserStaticData&) = delete;
  ExprParserStaticData& operator=(ExprParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag exprParserOnceFlag;
ExprParserStaticData *exprParserStaticData = nullptr;

void exprParserInitialize() {
  assert(exprParserStaticData == nullptr);
  auto staticData = std::make_unique<ExprParserStaticData>(
    std::vector<std::string>{
      "content", "dics", "bdic", "bk", "bvs", "tkv", "tk", "tvs", "tv", 
      "files", "file", "dic", "kv", "k", "vs", "v", "ldic", "lkv", "pdic", 
      "pkv", "pvs", "pk", "pv", "nl"
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
  	4,1,14,243,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,1,0,5,0,50,8,0,10,0,12,0,53,9,0,1,1,5,1,56,8,1,
  	10,1,12,1,59,9,1,1,1,1,1,1,1,1,1,1,1,5,1,66,8,1,10,1,12,1,69,9,1,1,2,
  	1,2,1,2,1,2,1,2,5,2,76,8,2,10,2,12,2,79,9,2,1,3,1,3,1,3,1,3,1,3,1,3,5,
  	3,87,8,3,10,3,12,3,90,9,3,1,4,1,4,1,4,5,4,95,8,4,10,4,12,4,98,9,4,1,5,
  	5,5,101,8,5,10,5,12,5,104,9,5,1,5,1,5,1,5,1,5,5,5,110,8,5,10,5,12,5,113,
  	9,5,1,6,1,6,1,7,1,7,1,7,1,7,1,7,1,7,5,7,123,8,7,10,7,12,7,126,9,7,1,8,
  	1,8,1,9,4,9,131,8,9,11,9,12,9,132,1,10,1,10,5,10,137,8,10,10,10,12,10,
  	140,9,10,1,11,4,11,143,8,11,11,11,12,11,144,1,12,5,12,148,8,12,10,12,
  	12,12,151,9,12,1,12,1,12,1,12,1,12,5,12,157,8,12,10,12,12,12,160,9,12,
  	1,13,1,13,1,14,1,14,1,14,1,14,1,14,1,14,5,14,170,8,14,10,14,12,14,173,
  	9,14,1,15,1,15,1,16,4,16,178,8,16,11,16,12,16,179,1,17,5,17,183,8,17,
  	10,17,12,17,186,9,17,1,17,1,17,1,17,1,17,5,17,192,8,17,10,17,12,17,195,
  	9,17,1,18,4,18,198,8,18,11,18,12,18,199,1,19,5,19,203,8,19,10,19,12,19,
  	206,9,19,1,19,1,19,1,19,1,19,5,19,212,8,19,10,19,12,19,215,9,19,1,20,
  	1,20,1,20,1,20,1,20,1,20,5,20,223,8,20,10,20,12,20,226,9,20,1,21,1,21,
  	1,21,3,21,231,8,21,1,22,1,22,1,22,3,22,236,8,22,1,23,4,23,239,8,23,11,
  	23,12,23,240,1,23,1,51,4,6,14,28,40,24,0,2,4,6,8,10,12,14,16,18,20,22,
  	24,26,28,30,32,34,36,38,40,42,44,46,0,0,249,0,51,1,0,0,0,2,57,1,0,0,0,
  	4,70,1,0,0,0,6,80,1,0,0,0,8,96,1,0,0,0,10,102,1,0,0,0,12,114,1,0,0,0,
  	14,116,1,0,0,0,16,127,1,0,0,0,18,130,1,0,0,0,20,134,1,0,0,0,22,142,1,
  	0,0,0,24,149,1,0,0,0,26,161,1,0,0,0,28,163,1,0,0,0,30,174,1,0,0,0,32,
  	177,1,0,0,0,34,184,1,0,0,0,36,197,1,0,0,0,38,204,1,0,0,0,40,216,1,0,0,
  	0,42,230,1,0,0,0,44,235,1,0,0,0,46,238,1,0,0,0,48,50,3,46,23,0,49,48,
  	1,0,0,0,50,53,1,0,0,0,51,52,1,0,0,0,51,49,1,0,0,0,52,1,1,0,0,0,53,51,
  	1,0,0,0,54,56,3,46,23,0,55,54,1,0,0,0,56,59,1,0,0,0,57,55,1,0,0,0,57,
  	58,1,0,0,0,58,67,1,0,0,0,59,57,1,0,0,0,60,66,3,4,2,0,61,66,3,18,9,0,62,
  	66,3,22,11,0,63,66,3,32,16,0,64,66,3,36,18,0,65,60,1,0,0,0,65,61,1,0,
  	0,0,65,62,1,0,0,0,65,63,1,0,0,0,65,64,1,0,0,0,66,69,1,0,0,0,67,65,1,0,
  	0,0,67,68,1,0,0,0,68,3,1,0,0,0,69,67,1,0,0,0,70,71,3,6,3,0,71,72,5,1,
  	0,0,72,73,3,8,4,0,73,77,5,2,0,0,74,76,3,46,23,0,75,74,1,0,0,0,76,79,1,
  	0,0,0,77,75,1,0,0,0,77,78,1,0,0,0,78,5,1,0,0,0,79,77,1,0,0,0,80,81,6,
  	3,-1,0,81,82,5,10,0,0,82,88,1,0,0,0,83,84,10,2,0,0,84,85,5,3,0,0,85,87,
  	5,10,0,0,86,83,1,0,0,0,87,90,1,0,0,0,88,86,1,0,0,0,88,89,1,0,0,0,89,7,
  	1,0,0,0,90,88,1,0,0,0,91,95,3,32,16,0,92,95,3,36,18,0,93,95,3,10,5,0,
  	94,91,1,0,0,0,94,92,1,0,0,0,94,93,1,0,0,0,95,98,1,0,0,0,96,94,1,0,0,0,
  	96,97,1,0,0,0,97,9,1,0,0,0,98,96,1,0,0,0,99,101,3,46,23,0,100,99,1,0,
  	0,0,101,104,1,0,0,0,102,100,1,0,0,0,102,103,1,0,0,0,103,105,1,0,0,0,104,
  	102,1,0,0,0,105,106,3,12,6,0,106,107,5,4,0,0,107,111,3,14,7,0,108,110,
  	3,46,23,0,109,108,1,0,0,0,110,113,1,0,0,0,111,109,1,0,0,0,111,112,1,0,
  	0,0,112,11,1,0,0,0,113,111,1,0,0,0,114,115,5,10,0,0,115,13,1,0,0,0,116,
  	117,6,7,-1,0,117,118,3,16,8,0,118,124,1,0,0,0,119,120,10,2,0,0,120,121,
  	5,3,0,0,121,123,3,16,8,0,122,119,1,0,0,0,123,126,1,0,0,0,124,122,1,0,
  	0,0,124,125,1,0,0,0,125,15,1,0,0,0,126,124,1,0,0,0,127,128,5,10,0,0,128,
  	17,1,0,0,0,129,131,3,20,10,0,130,129,1,0,0,0,131,132,1,0,0,0,132,130,
  	1,0,0,0,132,133,1,0,0,0,133,19,1,0,0,0,134,138,3,30,15,0,135,137,3,46,
  	23,0,136,135,1,0,0,0,137,140,1,0,0,0,138,136,1,0,0,0,138,139,1,0,0,0,
  	139,21,1,0,0,0,140,138,1,0,0,0,141,143,3,24,12,0,142,141,1,0,0,0,143,
  	144,1,0,0,0,144,142,1,0,0,0,144,145,1,0,0,0,145,23,1,0,0,0,146,148,3,
  	46,23,0,147,146,1,0,0,0,148,151,1,0,0,0,149,147,1,0,0,0,149,150,1,0,0,
  	0,150,152,1,0,0,0,151,149,1,0,0,0,152,153,3,26,13,0,153,154,5,5,0,0,154,
  	158,3,28,14,0,155,157,3,46,23,0,156,155,1,0,0,0,157,160,1,0,0,0,158,156,
  	1,0,0,0,158,159,1,0,0,0,159,25,1,0,0,0,160,158,1,0,0,0,161,162,5,10,0,
  	0,162,27,1,0,0,0,163,164,6,14,-1,0,164,165,3,30,15,0,165,171,1,0,0,0,
  	166,167,10,2,0,0,167,168,5,3,0,0,168,170,3,30,15,0,169,166,1,0,0,0,170,
  	173,1,0,0,0,171,169,1,0,0,0,171,172,1,0,0,0,172,29,1,0,0,0,173,171,1,
  	0,0,0,174,175,5,10,0,0,175,31,1,0,0,0,176,178,3,34,17,0,177,176,1,0,0,
  	0,178,179,1,0,0,0,179,177,1,0,0,0,179,180,1,0,0,0,180,33,1,0,0,0,181,
  	183,3,46,23,0,182,181,1,0,0,0,183,186,1,0,0,0,184,182,1,0,0,0,184,185,
  	1,0,0,0,185,187,1,0,0,0,186,184,1,0,0,0,187,188,3,42,21,0,188,189,5,6,
  	0,0,189,193,3,40,20,0,190,192,3,46,23,0,191,190,1,0,0,0,192,195,1,0,0,
  	0,193,191,1,0,0,0,193,194,1,0,0,0,194,35,1,0,0,0,195,193,1,0,0,0,196,
  	198,3,38,19,0,197,196,1,0,0,0,198,199,1,0,0,0,199,197,1,0,0,0,199,200,
  	1,0,0,0,200,37,1,0,0,0,201,203,3,46,23,0,202,201,1,0,0,0,203,206,1,0,
  	0,0,204,202,1,0,0,0,204,205,1,0,0,0,205,207,1,0,0,0,206,204,1,0,0,0,207,
  	208,3,42,21,0,208,209,5,7,0,0,209,213,3,40,20,0,210,212,3,46,23,0,211,
  	210,1,0,0,0,212,215,1,0,0,0,213,211,1,0,0,0,213,214,1,0,0,0,214,39,1,
  	0,0,0,215,213,1,0,0,0,216,217,6,20,-1,0,217,218,3,44,22,0,218,224,1,0,
  	0,0,219,220,10,2,0,0,220,221,5,3,0,0,221,223,3,44,22,0,222,219,1,0,0,
  	0,223,226,1,0,0,0,224,222,1,0,0,0,224,225,1,0,0,0,225,41,1,0,0,0,226,
  	224,1,0,0,0,227,228,5,10,0,0,228,231,5,8,0,0,229,231,5,10,0,0,230,227,
  	1,0,0,0,230,229,1,0,0,0,231,43,1,0,0,0,232,233,5,10,0,0,233,236,5,9,0,
  	0,234,236,5,10,0,0,235,232,1,0,0,0,235,234,1,0,0,0,236,45,1,0,0,0,237,
  	239,5,11,0,0,238,237,1,0,0,0,239,240,1,0,0,0,240,238,1,0,0,0,240,241,
  	1,0,0,0,241,47,1,0,0,0,27,51,57,65,67,77,88,94,96,102,111,124,132,138,
  	144,149,158,171,179,184,193,199,204,213,224,230,235,240
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  exprParserStaticData = staticData.release();
}

}

ExprParser::ExprParser(TokenStream *input) : ExprParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

ExprParser::ExprParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  ExprParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *exprParserStaticData->atn, exprParserStaticData->decisionToDFA, exprParserStaticData->sharedContextCache, options);
}

ExprParser::~ExprParser() {
  delete _interpreter;
}

const atn::ATN& ExprParser::getATN() const {
  return *exprParserStaticData->atn;
}

std::string ExprParser::getGrammarFileName() const {
  return "Expr.g4";
}

const std::vector<std::string>& ExprParser::getRuleNames() const {
  return exprParserStaticData->ruleNames;
}

const dfa::Vocabulary& ExprParser::getVocabulary() const {
  return exprParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView ExprParser::getSerializedATN() const {
  return exprParserStaticData->serializedATN;
}


//----------------- ContentContext ------------------------------------------------------------------

ExprParser::ContentContext::ContentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ExprParser::NlContext *> ExprParser::ContentContext::nl() {
  return getRuleContexts<ExprParser::NlContext>();
}

ExprParser::NlContext* ExprParser::ContentContext::nl(size_t i) {
  return getRuleContext<ExprParser::NlContext>(i);
}


size_t ExprParser::ContentContext::getRuleIndex() const {
  return ExprParser::RuleContent;
}

void ExprParser::ContentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterContent(this);
}

void ExprParser::ContentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitContent(this);
}


std::any ExprParser::ContentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitContent(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::ContentContext* ExprParser::content() {
  ContentContext *_localctx = _tracker.createInstance<ContentContext>(_ctx, getState());
  enterRule(_localctx, 0, ExprParser::RuleContent);

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
    setState(51);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx);
    while (alt != 1 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1 + 1) {
        setState(48);
        nl(); 
      }
      setState(53);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DicsContext ------------------------------------------------------------------

ExprParser::DicsContext::DicsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ExprParser::NlContext *> ExprParser::DicsContext::nl() {
  return getRuleContexts<ExprParser::NlContext>();
}

ExprParser::NlContext* ExprParser::DicsContext::nl(size_t i) {
  return getRuleContext<ExprParser::NlContext>(i);
}

std::vector<ExprParser::BdicContext *> ExprParser::DicsContext::bdic() {
  return getRuleContexts<ExprParser::BdicContext>();
}

ExprParser::BdicContext* ExprParser::DicsContext::bdic(size_t i) {
  return getRuleContext<ExprParser::BdicContext>(i);
}

std::vector<ExprParser::FilesContext *> ExprParser::DicsContext::files() {
  return getRuleContexts<ExprParser::FilesContext>();
}

ExprParser::FilesContext* ExprParser::DicsContext::files(size_t i) {
  return getRuleContext<ExprParser::FilesContext>(i);
}

std::vector<ExprParser::DicContext *> ExprParser::DicsContext::dic() {
  return getRuleContexts<ExprParser::DicContext>();
}

ExprParser::DicContext* ExprParser::DicsContext::dic(size_t i) {
  return getRuleContext<ExprParser::DicContext>(i);
}

std::vector<ExprParser::LdicContext *> ExprParser::DicsContext::ldic() {
  return getRuleContexts<ExprParser::LdicContext>();
}

ExprParser::LdicContext* ExprParser::DicsContext::ldic(size_t i) {
  return getRuleContext<ExprParser::LdicContext>(i);
}

std::vector<ExprParser::PdicContext *> ExprParser::DicsContext::pdic() {
  return getRuleContexts<ExprParser::PdicContext>();
}

ExprParser::PdicContext* ExprParser::DicsContext::pdic(size_t i) {
  return getRuleContext<ExprParser::PdicContext>(i);
}


size_t ExprParser::DicsContext::getRuleIndex() const {
  return ExprParser::RuleDics;
}

void ExprParser::DicsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDics(this);
}

void ExprParser::DicsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDics(this);
}


std::any ExprParser::DicsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitDics(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::DicsContext* ExprParser::dics() {
  DicsContext *_localctx = _tracker.createInstance<DicsContext>(_ctx, getState());
  enterRule(_localctx, 2, ExprParser::RuleDics);
  size_t _la = 0;

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
    setState(57);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(54);
        nl(); 
      }
      setState(59);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx);
    }
    setState(67);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ExprParser::PV

    || _la == ExprParser::NL) {
      setState(65);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
      case 1: {
        setState(60);
        bdic();
        break;
      }

      case 2: {
        setState(61);
        files();
        break;
      }

      case 3: {
        setState(62);
        dic();
        break;
      }

      case 4: {
        setState(63);
        ldic();
        break;
      }

      case 5: {
        setState(64);
        pdic();
        break;
      }

      default:
        break;
      }
      setState(69);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BdicContext ------------------------------------------------------------------

ExprParser::BdicContext::BdicContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ExprParser::BkContext* ExprParser::BdicContext::bk() {
  return getRuleContext<ExprParser::BkContext>(0);
}

ExprParser::BvsContext* ExprParser::BdicContext::bvs() {
  return getRuleContext<ExprParser::BvsContext>(0);
}

std::vector<ExprParser::NlContext *> ExprParser::BdicContext::nl() {
  return getRuleContexts<ExprParser::NlContext>();
}

ExprParser::NlContext* ExprParser::BdicContext::nl(size_t i) {
  return getRuleContext<ExprParser::NlContext>(i);
}


size_t ExprParser::BdicContext::getRuleIndex() const {
  return ExprParser::RuleBdic;
}

void ExprParser::BdicContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBdic(this);
}

void ExprParser::BdicContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBdic(this);
}


std::any ExprParser::BdicContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitBdic(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::BdicContext* ExprParser::bdic() {
  BdicContext *_localctx = _tracker.createInstance<BdicContext>(_ctx, getState());
  enterRule(_localctx, 4, ExprParser::RuleBdic);

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
    setState(70);
    bk(0);
    setState(71);
    match(ExprParser::T__0);
    setState(72);
    bvs();
    setState(73);
    match(ExprParser::T__1);
    setState(77);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(74);
        nl(); 
      }
      setState(79);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BkContext ------------------------------------------------------------------

ExprParser::BkContext::BkContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::BkContext::PV() {
  return getToken(ExprParser::PV, 0);
}

ExprParser::BkContext* ExprParser::BkContext::bk() {
  return getRuleContext<ExprParser::BkContext>(0);
}


size_t ExprParser::BkContext::getRuleIndex() const {
  return ExprParser::RuleBk;
}

void ExprParser::BkContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBk(this);
}

void ExprParser::BkContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBk(this);
}


std::any ExprParser::BkContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitBk(this);
  else
    return visitor->visitChildren(this);
}


ExprParser::BkContext* ExprParser::bk() {
   return bk(0);
}

ExprParser::BkContext* ExprParser::bk(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  ExprParser::BkContext *_localctx = _tracker.createInstance<BkContext>(_ctx, parentState);
  ExprParser::BkContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 6;
  enterRecursionRule(_localctx, 6, ExprParser::RuleBk, precedence);

    

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
    setState(81);
    match(ExprParser::PV);
    _ctx->stop = _input->LT(-1);
    setState(88);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<BkContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleBk);
        setState(83);

        if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
        setState(84);
        match(ExprParser::T__2);
        setState(85);
        match(ExprParser::PV); 
      }
      setState(90);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- BvsContext ------------------------------------------------------------------

ExprParser::BvsContext::BvsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ExprParser::LdicContext *> ExprParser::BvsContext::ldic() {
  return getRuleContexts<ExprParser::LdicContext>();
}

ExprParser::LdicContext* ExprParser::BvsContext::ldic(size_t i) {
  return getRuleContext<ExprParser::LdicContext>(i);
}

std::vector<ExprParser::PdicContext *> ExprParser::BvsContext::pdic() {
  return getRuleContexts<ExprParser::PdicContext>();
}

ExprParser::PdicContext* ExprParser::BvsContext::pdic(size_t i) {
  return getRuleContext<ExprParser::PdicContext>(i);
}

std::vector<ExprParser::TkvContext *> ExprParser::BvsContext::tkv() {
  return getRuleContexts<ExprParser::TkvContext>();
}

ExprParser::TkvContext* ExprParser::BvsContext::tkv(size_t i) {
  return getRuleContext<ExprParser::TkvContext>(i);
}


size_t ExprParser::BvsContext::getRuleIndex() const {
  return ExprParser::RuleBvs;
}

void ExprParser::BvsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBvs(this);
}

void ExprParser::BvsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBvs(this);
}


std::any ExprParser::BvsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitBvs(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::BvsContext* ExprParser::bvs() {
  BvsContext *_localctx = _tracker.createInstance<BvsContext>(_ctx, getState());
  enterRule(_localctx, 8, ExprParser::RuleBvs);
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
    setState(96);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ExprParser::PV

    || _la == ExprParser::NL) {
      setState(94);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx)) {
      case 1: {
        setState(91);
        ldic();
        break;
      }

      case 2: {
        setState(92);
        pdic();
        break;
      }

      case 3: {
        setState(93);
        tkv();
        break;
      }

      default:
        break;
      }
      setState(98);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TkvContext ------------------------------------------------------------------

ExprParser::TkvContext::TkvContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ExprParser::TkContext* ExprParser::TkvContext::tk() {
  return getRuleContext<ExprParser::TkContext>(0);
}

ExprParser::TvsContext* ExprParser::TkvContext::tvs() {
  return getRuleContext<ExprParser::TvsContext>(0);
}

std::vector<ExprParser::NlContext *> ExprParser::TkvContext::nl() {
  return getRuleContexts<ExprParser::NlContext>();
}

ExprParser::NlContext* ExprParser::TkvContext::nl(size_t i) {
  return getRuleContext<ExprParser::NlContext>(i);
}


size_t ExprParser::TkvContext::getRuleIndex() const {
  return ExprParser::RuleTkv;
}

void ExprParser::TkvContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTkv(this);
}

void ExprParser::TkvContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTkv(this);
}


std::any ExprParser::TkvContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitTkv(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::TkvContext* ExprParser::tkv() {
  TkvContext *_localctx = _tracker.createInstance<TkvContext>(_ctx, getState());
  enterRule(_localctx, 10, ExprParser::RuleTkv);
  size_t _la = 0;

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
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ExprParser::NL) {
      setState(99);
      nl();
      setState(104);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(105);
    tk();
    setState(106);
    match(ExprParser::T__3);
    setState(107);
    tvs(0);
    setState(111);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(108);
        nl(); 
      }
      setState(113);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TkContext ------------------------------------------------------------------

ExprParser::TkContext::TkContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::TkContext::PV() {
  return getToken(ExprParser::PV, 0);
}


size_t ExprParser::TkContext::getRuleIndex() const {
  return ExprParser::RuleTk;
}

void ExprParser::TkContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTk(this);
}

void ExprParser::TkContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTk(this);
}


std::any ExprParser::TkContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitTk(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::TkContext* ExprParser::tk() {
  TkContext *_localctx = _tracker.createInstance<TkContext>(_ctx, getState());
  enterRule(_localctx, 12, ExprParser::RuleTk);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(114);
    match(ExprParser::PV);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TvsContext ------------------------------------------------------------------

ExprParser::TvsContext::TvsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ExprParser::TvContext* ExprParser::TvsContext::tv() {
  return getRuleContext<ExprParser::TvContext>(0);
}

ExprParser::TvsContext* ExprParser::TvsContext::tvs() {
  return getRuleContext<ExprParser::TvsContext>(0);
}


size_t ExprParser::TvsContext::getRuleIndex() const {
  return ExprParser::RuleTvs;
}

void ExprParser::TvsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTvs(this);
}

void ExprParser::TvsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTvs(this);
}


std::any ExprParser::TvsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitTvs(this);
  else
    return visitor->visitChildren(this);
}


ExprParser::TvsContext* ExprParser::tvs() {
   return tvs(0);
}

ExprParser::TvsContext* ExprParser::tvs(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  ExprParser::TvsContext *_localctx = _tracker.createInstance<TvsContext>(_ctx, parentState);
  ExprParser::TvsContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 14;
  enterRecursionRule(_localctx, 14, ExprParser::RuleTvs, precedence);

    

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
    setState(117);
    tv();
    _ctx->stop = _input->LT(-1);
    setState(124);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<TvsContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleTvs);
        setState(119);

        if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
        setState(120);
        match(ExprParser::T__2);
        setState(121);
        tv(); 
      }
      setState(126);
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

//----------------- TvContext ------------------------------------------------------------------

ExprParser::TvContext::TvContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::TvContext::PV() {
  return getToken(ExprParser::PV, 0);
}


size_t ExprParser::TvContext::getRuleIndex() const {
  return ExprParser::RuleTv;
}

void ExprParser::TvContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTv(this);
}

void ExprParser::TvContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTv(this);
}


std::any ExprParser::TvContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitTv(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::TvContext* ExprParser::tv() {
  TvContext *_localctx = _tracker.createInstance<TvContext>(_ctx, getState());
  enterRule(_localctx, 16, ExprParser::RuleTv);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(127);
    match(ExprParser::PV);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FilesContext ------------------------------------------------------------------

ExprParser::FilesContext::FilesContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ExprParser::FileContext *> ExprParser::FilesContext::file() {
  return getRuleContexts<ExprParser::FileContext>();
}

ExprParser::FileContext* ExprParser::FilesContext::file(size_t i) {
  return getRuleContext<ExprParser::FileContext>(i);
}


size_t ExprParser::FilesContext::getRuleIndex() const {
  return ExprParser::RuleFiles;
}

void ExprParser::FilesContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFiles(this);
}

void ExprParser::FilesContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFiles(this);
}


std::any ExprParser::FilesContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitFiles(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::FilesContext* ExprParser::files() {
  FilesContext *_localctx = _tracker.createInstance<FilesContext>(_ctx, getState());
  enterRule(_localctx, 18, ExprParser::RuleFiles);

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
    setState(130); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(129);
              file();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(132); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FileContext ------------------------------------------------------------------

ExprParser::FileContext::FileContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ExprParser::VContext* ExprParser::FileContext::v() {
  return getRuleContext<ExprParser::VContext>(0);
}

std::vector<ExprParser::NlContext *> ExprParser::FileContext::nl() {
  return getRuleContexts<ExprParser::NlContext>();
}

ExprParser::NlContext* ExprParser::FileContext::nl(size_t i) {
  return getRuleContext<ExprParser::NlContext>(i);
}


size_t ExprParser::FileContext::getRuleIndex() const {
  return ExprParser::RuleFile;
}

void ExprParser::FileContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFile(this);
}

void ExprParser::FileContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFile(this);
}


std::any ExprParser::FileContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitFile(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::FileContext* ExprParser::file() {
  FileContext *_localctx = _tracker.createInstance<FileContext>(_ctx, getState());
  enterRule(_localctx, 20, ExprParser::RuleFile);

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
    setState(134);
    v();
    setState(138);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(135);
        nl(); 
      }
      setState(140);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DicContext ------------------------------------------------------------------

ExprParser::DicContext::DicContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ExprParser::KvContext *> ExprParser::DicContext::kv() {
  return getRuleContexts<ExprParser::KvContext>();
}

ExprParser::KvContext* ExprParser::DicContext::kv(size_t i) {
  return getRuleContext<ExprParser::KvContext>(i);
}


size_t ExprParser::DicContext::getRuleIndex() const {
  return ExprParser::RuleDic;
}

void ExprParser::DicContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDic(this);
}

void ExprParser::DicContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDic(this);
}


std::any ExprParser::DicContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitDic(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::DicContext* ExprParser::dic() {
  DicContext *_localctx = _tracker.createInstance<DicContext>(_ctx, getState());
  enterRule(_localctx, 22, ExprParser::RuleDic);

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
    setState(142); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(141);
              kv();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(144); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- KvContext ------------------------------------------------------------------

ExprParser::KvContext::KvContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ExprParser::KContext* ExprParser::KvContext::k() {
  return getRuleContext<ExprParser::KContext>(0);
}

ExprParser::VsContext* ExprParser::KvContext::vs() {
  return getRuleContext<ExprParser::VsContext>(0);
}

std::vector<ExprParser::NlContext *> ExprParser::KvContext::nl() {
  return getRuleContexts<ExprParser::NlContext>();
}

ExprParser::NlContext* ExprParser::KvContext::nl(size_t i) {
  return getRuleContext<ExprParser::NlContext>(i);
}


size_t ExprParser::KvContext::getRuleIndex() const {
  return ExprParser::RuleKv;
}

void ExprParser::KvContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterKv(this);
}

void ExprParser::KvContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitKv(this);
}


std::any ExprParser::KvContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitKv(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::KvContext* ExprParser::kv() {
  KvContext *_localctx = _tracker.createInstance<KvContext>(_ctx, getState());
  enterRule(_localctx, 24, ExprParser::RuleKv);
  size_t _la = 0;

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
    setState(149);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ExprParser::NL) {
      setState(146);
      nl();
      setState(151);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(152);
    k();
    setState(153);
    match(ExprParser::T__4);
    setState(154);
    vs(0);
    setState(158);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(155);
        nl(); 
      }
      setState(160);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- KContext ------------------------------------------------------------------

ExprParser::KContext::KContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::KContext::PV() {
  return getToken(ExprParser::PV, 0);
}


size_t ExprParser::KContext::getRuleIndex() const {
  return ExprParser::RuleK;
}

void ExprParser::KContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterK(this);
}

void ExprParser::KContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitK(this);
}


std::any ExprParser::KContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitK(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::KContext* ExprParser::k() {
  KContext *_localctx = _tracker.createInstance<KContext>(_ctx, getState());
  enterRule(_localctx, 26, ExprParser::RuleK);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(161);
    match(ExprParser::PV);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VsContext ------------------------------------------------------------------

ExprParser::VsContext::VsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ExprParser::VContext* ExprParser::VsContext::v() {
  return getRuleContext<ExprParser::VContext>(0);
}

ExprParser::VsContext* ExprParser::VsContext::vs() {
  return getRuleContext<ExprParser::VsContext>(0);
}


size_t ExprParser::VsContext::getRuleIndex() const {
  return ExprParser::RuleVs;
}

void ExprParser::VsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVs(this);
}

void ExprParser::VsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVs(this);
}


std::any ExprParser::VsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitVs(this);
  else
    return visitor->visitChildren(this);
}


ExprParser::VsContext* ExprParser::vs() {
   return vs(0);
}

ExprParser::VsContext* ExprParser::vs(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  ExprParser::VsContext *_localctx = _tracker.createInstance<VsContext>(_ctx, parentState);
  ExprParser::VsContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 28;
  enterRecursionRule(_localctx, 28, ExprParser::RuleVs, precedence);

    

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
    setState(164);
    v();
    _ctx->stop = _input->LT(-1);
    setState(171);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<VsContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleVs);
        setState(166);

        if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
        setState(167);
        match(ExprParser::T__2);
        setState(168);
        v(); 
      }
      setState(173);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- VContext ------------------------------------------------------------------

ExprParser::VContext::VContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::VContext::PV() {
  return getToken(ExprParser::PV, 0);
}


size_t ExprParser::VContext::getRuleIndex() const {
  return ExprParser::RuleV;
}

void ExprParser::VContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterV(this);
}

void ExprParser::VContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitV(this);
}


std::any ExprParser::VContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitV(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::VContext* ExprParser::v() {
  VContext *_localctx = _tracker.createInstance<VContext>(_ctx, getState());
  enterRule(_localctx, 30, ExprParser::RuleV);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(174);
    match(ExprParser::PV);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LdicContext ------------------------------------------------------------------

ExprParser::LdicContext::LdicContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ExprParser::LkvContext *> ExprParser::LdicContext::lkv() {
  return getRuleContexts<ExprParser::LkvContext>();
}

ExprParser::LkvContext* ExprParser::LdicContext::lkv(size_t i) {
  return getRuleContext<ExprParser::LkvContext>(i);
}


size_t ExprParser::LdicContext::getRuleIndex() const {
  return ExprParser::RuleLdic;
}

void ExprParser::LdicContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLdic(this);
}

void ExprParser::LdicContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLdic(this);
}


std::any ExprParser::LdicContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitLdic(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::LdicContext* ExprParser::ldic() {
  LdicContext *_localctx = _tracker.createInstance<LdicContext>(_ctx, getState());
  enterRule(_localctx, 32, ExprParser::RuleLdic);

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
    setState(177); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(176);
              lkv();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(179); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LkvContext ------------------------------------------------------------------

ExprParser::LkvContext::LkvContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ExprParser::PkContext* ExprParser::LkvContext::pk() {
  return getRuleContext<ExprParser::PkContext>(0);
}

ExprParser::PvsContext* ExprParser::LkvContext::pvs() {
  return getRuleContext<ExprParser::PvsContext>(0);
}

std::vector<ExprParser::NlContext *> ExprParser::LkvContext::nl() {
  return getRuleContexts<ExprParser::NlContext>();
}

ExprParser::NlContext* ExprParser::LkvContext::nl(size_t i) {
  return getRuleContext<ExprParser::NlContext>(i);
}


size_t ExprParser::LkvContext::getRuleIndex() const {
  return ExprParser::RuleLkv;
}

void ExprParser::LkvContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLkv(this);
}

void ExprParser::LkvContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLkv(this);
}


std::any ExprParser::LkvContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitLkv(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::LkvContext* ExprParser::lkv() {
  LkvContext *_localctx = _tracker.createInstance<LkvContext>(_ctx, getState());
  enterRule(_localctx, 34, ExprParser::RuleLkv);
  size_t _la = 0;

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
    setState(184);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ExprParser::NL) {
      setState(181);
      nl();
      setState(186);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(187);
    pk();
    setState(188);
    match(ExprParser::T__5);
    setState(189);
    pvs(0);
    setState(193);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(190);
        nl(); 
      }
      setState(195);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PdicContext ------------------------------------------------------------------

ExprParser::PdicContext::PdicContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ExprParser::PkvContext *> ExprParser::PdicContext::pkv() {
  return getRuleContexts<ExprParser::PkvContext>();
}

ExprParser::PkvContext* ExprParser::PdicContext::pkv(size_t i) {
  return getRuleContext<ExprParser::PkvContext>(i);
}


size_t ExprParser::PdicContext::getRuleIndex() const {
  return ExprParser::RulePdic;
}

void ExprParser::PdicContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPdic(this);
}

void ExprParser::PdicContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPdic(this);
}


std::any ExprParser::PdicContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitPdic(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::PdicContext* ExprParser::pdic() {
  PdicContext *_localctx = _tracker.createInstance<PdicContext>(_ctx, getState());
  enterRule(_localctx, 36, ExprParser::RulePdic);

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
    setState(197); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(196);
              pkv();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(199); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PkvContext ------------------------------------------------------------------

ExprParser::PkvContext::PkvContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ExprParser::PkContext* ExprParser::PkvContext::pk() {
  return getRuleContext<ExprParser::PkContext>(0);
}

ExprParser::PvsContext* ExprParser::PkvContext::pvs() {
  return getRuleContext<ExprParser::PvsContext>(0);
}

std::vector<ExprParser::NlContext *> ExprParser::PkvContext::nl() {
  return getRuleContexts<ExprParser::NlContext>();
}

ExprParser::NlContext* ExprParser::PkvContext::nl(size_t i) {
  return getRuleContext<ExprParser::NlContext>(i);
}


size_t ExprParser::PkvContext::getRuleIndex() const {
  return ExprParser::RulePkv;
}

void ExprParser::PkvContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPkv(this);
}

void ExprParser::PkvContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPkv(this);
}


std::any ExprParser::PkvContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitPkv(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::PkvContext* ExprParser::pkv() {
  PkvContext *_localctx = _tracker.createInstance<PkvContext>(_ctx, getState());
  enterRule(_localctx, 38, ExprParser::RulePkv);
  size_t _la = 0;

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
    setState(204);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ExprParser::NL) {
      setState(201);
      nl();
      setState(206);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(207);
    pk();
    setState(208);
    match(ExprParser::T__6);
    setState(209);
    pvs(0);
    setState(213);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(210);
        nl(); 
      }
      setState(215);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PvsContext ------------------------------------------------------------------

ExprParser::PvsContext::PvsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ExprParser::PvContext* ExprParser::PvsContext::pv() {
  return getRuleContext<ExprParser::PvContext>(0);
}

ExprParser::PvsContext* ExprParser::PvsContext::pvs() {
  return getRuleContext<ExprParser::PvsContext>(0);
}


size_t ExprParser::PvsContext::getRuleIndex() const {
  return ExprParser::RulePvs;
}

void ExprParser::PvsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPvs(this);
}

void ExprParser::PvsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPvs(this);
}


std::any ExprParser::PvsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitPvs(this);
  else
    return visitor->visitChildren(this);
}


ExprParser::PvsContext* ExprParser::pvs() {
   return pvs(0);
}

ExprParser::PvsContext* ExprParser::pvs(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  ExprParser::PvsContext *_localctx = _tracker.createInstance<PvsContext>(_ctx, parentState);
  ExprParser::PvsContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 40;
  enterRecursionRule(_localctx, 40, ExprParser::RulePvs, precedence);

    

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
    setState(217);
    pv();
    _ctx->stop = _input->LT(-1);
    setState(224);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<PvsContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RulePvs);
        setState(219);

        if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
        setState(220);
        match(ExprParser::T__2);
        setState(221);
        pv(); 
      }
      setState(226);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- PkContext ------------------------------------------------------------------

ExprParser::PkContext::PkContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::PkContext::PV() {
  return getToken(ExprParser::PV, 0);
}

tree::TerminalNode* ExprParser::PkContext::PKD() {
  return getToken(ExprParser::PKD, 0);
}


size_t ExprParser::PkContext::getRuleIndex() const {
  return ExprParser::RulePk;
}

void ExprParser::PkContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPk(this);
}

void ExprParser::PkContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPk(this);
}


std::any ExprParser::PkContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitPk(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::PkContext* ExprParser::pk() {
  PkContext *_localctx = _tracker.createInstance<PkContext>(_ctx, getState());
  enterRule(_localctx, 42, ExprParser::RulePk);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(230);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 24, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(227);
      match(ExprParser::PV);
      setState(228);
      match(ExprParser::PKD);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(229);
      match(ExprParser::PV);
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

//----------------- PvContext ------------------------------------------------------------------

ExprParser::PvContext::PvContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::PvContext::PV() {
  return getToken(ExprParser::PV, 0);
}

tree::TerminalNode* ExprParser::PvContext::PVD() {
  return getToken(ExprParser::PVD, 0);
}


size_t ExprParser::PvContext::getRuleIndex() const {
  return ExprParser::RulePv;
}

void ExprParser::PvContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPv(this);
}

void ExprParser::PvContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPv(this);
}


std::any ExprParser::PvContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitPv(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::PvContext* ExprParser::pv() {
  PvContext *_localctx = _tracker.createInstance<PvContext>(_ctx, getState());
  enterRule(_localctx, 44, ExprParser::RulePv);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(235);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 25, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(232);
      match(ExprParser::PV);
      setState(233);
      match(ExprParser::PVD);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(234);
      match(ExprParser::PV);
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

//----------------- NlContext ------------------------------------------------------------------

ExprParser::NlContext::NlContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> ExprParser::NlContext::NL() {
  return getTokens(ExprParser::NL);
}

tree::TerminalNode* ExprParser::NlContext::NL(size_t i) {
  return getToken(ExprParser::NL, i);
}


size_t ExprParser::NlContext::getRuleIndex() const {
  return ExprParser::RuleNl;
}

void ExprParser::NlContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNl(this);
}

void ExprParser::NlContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNl(this);
}


std::any ExprParser::NlContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitNl(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::NlContext* ExprParser::nl() {
  NlContext *_localctx = _tracker.createInstance<NlContext>(_ctx, getState());
  enterRule(_localctx, 46, ExprParser::RuleNl);

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
    setState(238); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(237);
              match(ExprParser::NL);
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(240); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 26, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool ExprParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 3: return bkSempred(antlrcpp::downCast<BkContext *>(context), predicateIndex);
    case 7: return tvsSempred(antlrcpp::downCast<TvsContext *>(context), predicateIndex);
    case 14: return vsSempred(antlrcpp::downCast<VsContext *>(context), predicateIndex);
    case 20: return pvsSempred(antlrcpp::downCast<PvsContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool ExprParser::bkSempred(BkContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

bool ExprParser::tvsSempred(TvsContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 1: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

bool ExprParser::vsSempred(VsContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 2: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

bool ExprParser::pvsSempred(PvsContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 3: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

void ExprParser::initialize() {
  ::antlr4::internal::call_once(exprParserOnceFlag, exprParserInitialize);
}
