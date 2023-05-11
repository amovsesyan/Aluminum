
// Generated from /home/alex/Programming/CMSC838E/Aluminum/grammar/Aluminum.g4 by ANTLR 4.12.0


#include "AluminumLexer.h"


using namespace antlr4;

using namespace Aluminum;


using namespace antlr4;

namespace {

struct AluminumLexerStaticData final {
  AluminumLexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  AluminumLexerStaticData(const AluminumLexerStaticData&) = delete;
  AluminumLexerStaticData(AluminumLexerStaticData&&) = delete;
  AluminumLexerStaticData& operator=(const AluminumLexerStaticData&) = delete;
  AluminumLexerStaticData& operator=(AluminumLexerStaticData&&) = delete;

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

::antlr4::internal::OnceFlag aluminumlexerLexerOnceFlag;
AluminumLexerStaticData *aluminumlexerLexerStaticData = nullptr;

void aluminumlexerLexerInitialize() {
  assert(aluminumlexerLexerStaticData == nullptr);
  auto staticData = std::make_unique<AluminumLexerStaticData>(
    std::vector<std::string>{
      "T__0", "LPAREN", "RPAREN", "EOL", "LCURL", "RCURL", "ARROW", "DOT", 
      "COMMA", "GREATEREQUAL", "GREATER", "LESSEQUAL", "LESS", "NOT", "EQUALS", 
      "TAKE", "SET", "MAIN", "IF", "ELSE", "WHILE", "DEFINE", "FUNCTION", 
      "VARIABLE", "INT", "FLOAT", "BOOL", "TRUE", "FALSE", "RETURN", "IDENTIFIER", 
      "MUL", "DIV", "ADD", "SUB", "INT_LITERAL", "FLOAT_LITERAL", "WS"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
    },
    std::vector<std::string>{
      "", "'cust'", "'('", "')'", "';'", "'{'", "'}'", "'->'", "'.'", "','", 
      "'>='", "'>'", "'<='", "'<'", "'~'", "'='", "'take'", "'set'", "'main'", 
      "'if'", "'else'", "'while'", "'def'", "'func'", "'var'", "'int'", 
      "'float'", "'bool'", "'true'", "'false'", "'return'", "", "'*'", "'/'", 
      "'+'", "'-'"
    },
    std::vector<std::string>{
      "", "", "LPAREN", "RPAREN", "EOL", "LCURL", "RCURL", "ARROW", "DOT", 
      "COMMA", "GREATEREQUAL", "GREATER", "LESSEQUAL", "LESS", "NOT", "EQUALS", 
      "TAKE", "SET", "MAIN", "IF", "ELSE", "WHILE", "DEFINE", "FUNCTION", 
      "VARIABLE", "INT", "FLOAT", "BOOL", "TRUE", "FALSE", "RETURN", "IDENTIFIER", 
      "MUL", "DIV", "ADD", "SUB", "INT_LITERAL", "FLOAT_LITERAL", "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,0,38,232,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,
  	7,21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,
  	7,28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,2,33,7,33,2,34,7,34,2,35,
  	7,35,2,36,7,36,2,37,7,37,1,0,1,0,1,0,1,0,1,0,1,1,1,1,1,2,1,2,1,3,1,3,
  	1,4,1,4,1,5,1,5,1,6,1,6,1,6,1,7,1,7,1,8,1,8,1,9,1,9,1,9,1,10,1,10,1,11,
  	1,11,1,11,1,12,1,12,1,13,1,13,1,14,1,14,1,15,1,15,1,15,1,15,1,15,1,16,
  	1,16,1,16,1,16,1,17,1,17,1,17,1,17,1,17,1,18,1,18,1,18,1,19,1,19,1,19,
  	1,19,1,19,1,20,1,20,1,20,1,20,1,20,1,20,1,21,1,21,1,21,1,21,1,22,1,22,
  	1,22,1,22,1,22,1,23,1,23,1,23,1,23,1,24,1,24,1,24,1,24,1,25,1,25,1,25,
  	1,25,1,25,1,25,1,26,1,26,1,26,1,26,1,26,1,27,1,27,1,27,1,27,1,27,1,28,
  	1,28,1,28,1,28,1,28,1,28,1,29,1,29,1,29,1,29,1,29,1,29,1,29,1,30,4,30,
  	189,8,30,11,30,12,30,190,1,30,5,30,194,8,30,10,30,12,30,197,9,30,1,31,
  	1,31,1,32,1,32,1,33,1,33,1,34,1,34,1,35,3,35,208,8,35,1,35,4,35,211,8,
  	35,11,35,12,35,212,1,36,3,36,216,8,36,1,36,4,36,219,8,36,11,36,12,36,
  	220,1,36,1,36,4,36,225,8,36,11,36,12,36,226,1,37,1,37,1,37,1,37,0,0,38,
  	1,1,3,2,5,3,7,4,9,5,11,6,13,7,15,8,17,9,19,10,21,11,23,12,25,13,27,14,
  	29,15,31,16,33,17,35,18,37,19,39,20,41,21,43,22,45,23,47,24,49,25,51,
  	26,53,27,55,28,57,29,59,30,61,31,63,32,65,33,67,34,69,35,71,36,73,37,
  	75,38,1,0,4,3,0,65,90,95,95,97,122,4,0,48,57,65,90,95,95,97,122,1,0,48,
  	57,3,0,9,10,13,13,32,32,238,0,1,1,0,0,0,0,3,1,0,0,0,0,5,1,0,0,0,0,7,1,
  	0,0,0,0,9,1,0,0,0,0,11,1,0,0,0,0,13,1,0,0,0,0,15,1,0,0,0,0,17,1,0,0,0,
  	0,19,1,0,0,0,0,21,1,0,0,0,0,23,1,0,0,0,0,25,1,0,0,0,0,27,1,0,0,0,0,29,
  	1,0,0,0,0,31,1,0,0,0,0,33,1,0,0,0,0,35,1,0,0,0,0,37,1,0,0,0,0,39,1,0,
  	0,0,0,41,1,0,0,0,0,43,1,0,0,0,0,45,1,0,0,0,0,47,1,0,0,0,0,49,1,0,0,0,
  	0,51,1,0,0,0,0,53,1,0,0,0,0,55,1,0,0,0,0,57,1,0,0,0,0,59,1,0,0,0,0,61,
  	1,0,0,0,0,63,1,0,0,0,0,65,1,0,0,0,0,67,1,0,0,0,0,69,1,0,0,0,0,71,1,0,
  	0,0,0,73,1,0,0,0,0,75,1,0,0,0,1,77,1,0,0,0,3,82,1,0,0,0,5,84,1,0,0,0,
  	7,86,1,0,0,0,9,88,1,0,0,0,11,90,1,0,0,0,13,92,1,0,0,0,15,95,1,0,0,0,17,
  	97,1,0,0,0,19,99,1,0,0,0,21,102,1,0,0,0,23,104,1,0,0,0,25,107,1,0,0,0,
  	27,109,1,0,0,0,29,111,1,0,0,0,31,113,1,0,0,0,33,118,1,0,0,0,35,122,1,
  	0,0,0,37,127,1,0,0,0,39,130,1,0,0,0,41,135,1,0,0,0,43,141,1,0,0,0,45,
  	145,1,0,0,0,47,150,1,0,0,0,49,154,1,0,0,0,51,158,1,0,0,0,53,164,1,0,0,
  	0,55,169,1,0,0,0,57,174,1,0,0,0,59,180,1,0,0,0,61,188,1,0,0,0,63,198,
  	1,0,0,0,65,200,1,0,0,0,67,202,1,0,0,0,69,204,1,0,0,0,71,207,1,0,0,0,73,
  	215,1,0,0,0,75,228,1,0,0,0,77,78,5,99,0,0,78,79,5,117,0,0,79,80,5,115,
  	0,0,80,81,5,116,0,0,81,2,1,0,0,0,82,83,5,40,0,0,83,4,1,0,0,0,84,85,5,
  	41,0,0,85,6,1,0,0,0,86,87,5,59,0,0,87,8,1,0,0,0,88,89,5,123,0,0,89,10,
  	1,0,0,0,90,91,5,125,0,0,91,12,1,0,0,0,92,93,5,45,0,0,93,94,5,62,0,0,94,
  	14,1,0,0,0,95,96,5,46,0,0,96,16,1,0,0,0,97,98,5,44,0,0,98,18,1,0,0,0,
  	99,100,5,62,0,0,100,101,5,61,0,0,101,20,1,0,0,0,102,103,5,62,0,0,103,
  	22,1,0,0,0,104,105,5,60,0,0,105,106,5,61,0,0,106,24,1,0,0,0,107,108,5,
  	60,0,0,108,26,1,0,0,0,109,110,5,126,0,0,110,28,1,0,0,0,111,112,5,61,0,
  	0,112,30,1,0,0,0,113,114,5,116,0,0,114,115,5,97,0,0,115,116,5,107,0,0,
  	116,117,5,101,0,0,117,32,1,0,0,0,118,119,5,115,0,0,119,120,5,101,0,0,
  	120,121,5,116,0,0,121,34,1,0,0,0,122,123,5,109,0,0,123,124,5,97,0,0,124,
  	125,5,105,0,0,125,126,5,110,0,0,126,36,1,0,0,0,127,128,5,105,0,0,128,
  	129,5,102,0,0,129,38,1,0,0,0,130,131,5,101,0,0,131,132,5,108,0,0,132,
  	133,5,115,0,0,133,134,5,101,0,0,134,40,1,0,0,0,135,136,5,119,0,0,136,
  	137,5,104,0,0,137,138,5,105,0,0,138,139,5,108,0,0,139,140,5,101,0,0,140,
  	42,1,0,0,0,141,142,5,100,0,0,142,143,5,101,0,0,143,144,5,102,0,0,144,
  	44,1,0,0,0,145,146,5,102,0,0,146,147,5,117,0,0,147,148,5,110,0,0,148,
  	149,5,99,0,0,149,46,1,0,0,0,150,151,5,118,0,0,151,152,5,97,0,0,152,153,
  	5,114,0,0,153,48,1,0,0,0,154,155,5,105,0,0,155,156,5,110,0,0,156,157,
  	5,116,0,0,157,50,1,0,0,0,158,159,5,102,0,0,159,160,5,108,0,0,160,161,
  	5,111,0,0,161,162,5,97,0,0,162,163,5,116,0,0,163,52,1,0,0,0,164,165,5,
  	98,0,0,165,166,5,111,0,0,166,167,5,111,0,0,167,168,5,108,0,0,168,54,1,
  	0,0,0,169,170,5,116,0,0,170,171,5,114,0,0,171,172,5,117,0,0,172,173,5,
  	101,0,0,173,56,1,0,0,0,174,175,5,102,0,0,175,176,5,97,0,0,176,177,5,108,
  	0,0,177,178,5,115,0,0,178,179,5,101,0,0,179,58,1,0,0,0,180,181,5,114,
  	0,0,181,182,5,101,0,0,182,183,5,116,0,0,183,184,5,117,0,0,184,185,5,114,
  	0,0,185,186,5,110,0,0,186,60,1,0,0,0,187,189,7,0,0,0,188,187,1,0,0,0,
  	189,190,1,0,0,0,190,188,1,0,0,0,190,191,1,0,0,0,191,195,1,0,0,0,192,194,
  	7,1,0,0,193,192,1,0,0,0,194,197,1,0,0,0,195,193,1,0,0,0,195,196,1,0,0,
  	0,196,62,1,0,0,0,197,195,1,0,0,0,198,199,5,42,0,0,199,64,1,0,0,0,200,
  	201,5,47,0,0,201,66,1,0,0,0,202,203,5,43,0,0,203,68,1,0,0,0,204,205,5,
  	45,0,0,205,70,1,0,0,0,206,208,5,45,0,0,207,206,1,0,0,0,207,208,1,0,0,
  	0,208,210,1,0,0,0,209,211,7,2,0,0,210,209,1,0,0,0,211,212,1,0,0,0,212,
  	210,1,0,0,0,212,213,1,0,0,0,213,72,1,0,0,0,214,216,5,45,0,0,215,214,1,
  	0,0,0,215,216,1,0,0,0,216,218,1,0,0,0,217,219,7,2,0,0,218,217,1,0,0,0,
  	219,220,1,0,0,0,220,218,1,0,0,0,220,221,1,0,0,0,221,222,1,0,0,0,222,224,
  	3,15,7,0,223,225,7,2,0,0,224,223,1,0,0,0,225,226,1,0,0,0,226,224,1,0,
  	0,0,226,227,1,0,0,0,227,74,1,0,0,0,228,229,7,3,0,0,229,230,1,0,0,0,230,
  	231,6,37,0,0,231,76,1,0,0,0,8,0,190,195,207,212,215,220,226,1,6,0,0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  aluminumlexerLexerStaticData = staticData.release();
}

}

AluminumLexer::AluminumLexer(CharStream *input) : Lexer(input) {
  AluminumLexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *aluminumlexerLexerStaticData->atn, aluminumlexerLexerStaticData->decisionToDFA, aluminumlexerLexerStaticData->sharedContextCache);
}

AluminumLexer::~AluminumLexer() {
  delete _interpreter;
}

std::string AluminumLexer::getGrammarFileName() const {
  return "Aluminum.g4";
}

const std::vector<std::string>& AluminumLexer::getRuleNames() const {
  return aluminumlexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& AluminumLexer::getChannelNames() const {
  return aluminumlexerLexerStaticData->channelNames;
}

const std::vector<std::string>& AluminumLexer::getModeNames() const {
  return aluminumlexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& AluminumLexer::getVocabulary() const {
  return aluminumlexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView AluminumLexer::getSerializedATN() const {
  return aluminumlexerLexerStaticData->serializedATN;
}

const atn::ATN& AluminumLexer::getATN() const {
  return *aluminumlexerLexerStaticData->atn;
}




void AluminumLexer::initialize() {
  ::antlr4::internal::call_once(aluminumlexerLexerOnceFlag, aluminumlexerLexerInitialize);
}
