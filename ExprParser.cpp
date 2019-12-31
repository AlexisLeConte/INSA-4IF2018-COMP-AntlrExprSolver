
// Generated from Expr.g4 by ANTLR 4.7.2


#include "ExprVisitor.h"

#include "ExprParser.h"


using namespace antlrcpp;
using namespace antlr4;

ExprParser::ExprParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

ExprParser::~ExprParser() {
  delete _interpreter;
}

std::string ExprParser::getGrammarFileName() const {
  return "Expr.g4";
}

const std::vector<std::string>& ExprParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& ExprParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- ProgContext ------------------------------------------------------------------

ExprParser::ProgContext::ProgContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ExprParser::Int_exprContext* ExprParser::ProgContext::int_expr() {
  return getRuleContext<ExprParser::Int_exprContext>(0);
}


size_t ExprParser::ProgContext::getRuleIndex() const {
  return ExprParser::RuleProg;
}


antlrcpp::Any ExprParser::ProgContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitProg(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::ProgContext* ExprParser::prog() {
  ProgContext *_localctx = _tracker.createInstance<ProgContext>(_ctx, getState());
  enterRule(_localctx, 0, ExprParser::RuleProg);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(14);
    int_expr();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Int_exprContext ------------------------------------------------------------------

ExprParser::Int_exprContext::Int_exprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ExprParser::Int_termsContext* ExprParser::Int_exprContext::int_terms() {
  return getRuleContext<ExprParser::Int_termsContext>(0);
}


size_t ExprParser::Int_exprContext::getRuleIndex() const {
  return ExprParser::RuleInt_expr;
}


antlrcpp::Any ExprParser::Int_exprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitInt_expr(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::Int_exprContext* ExprParser::int_expr() {
  Int_exprContext *_localctx = _tracker.createInstance<Int_exprContext>(_ctx, getState());
  enterRule(_localctx, 2, ExprParser::RuleInt_expr);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(16);
    int_terms();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Int_termsContext ------------------------------------------------------------------

ExprParser::Int_termsContext::Int_termsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ExprParser::Int_factorsContext* ExprParser::Int_termsContext::int_factors() {
  return getRuleContext<ExprParser::Int_factorsContext>(0);
}

std::vector<ExprParser::Rhs_int_termsContext *> ExprParser::Int_termsContext::rhs_int_terms() {
  return getRuleContexts<ExprParser::Rhs_int_termsContext>();
}

ExprParser::Rhs_int_termsContext* ExprParser::Int_termsContext::rhs_int_terms(size_t i) {
  return getRuleContext<ExprParser::Rhs_int_termsContext>(i);
}


size_t ExprParser::Int_termsContext::getRuleIndex() const {
  return ExprParser::RuleInt_terms;
}


antlrcpp::Any ExprParser::Int_termsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitInt_terms(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::Int_termsContext* ExprParser::int_terms() {
  Int_termsContext *_localctx = _tracker.createInstance<Int_termsContext>(_ctx, getState());
  enterRule(_localctx, 4, ExprParser::RuleInt_terms);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(18);
    int_factors();
    setState(22);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ExprParser::OP_ADD

    || _la == ExprParser::OP_SUB) {
      setState(19);
      rhs_int_terms();
      setState(24);
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

//----------------- Rhs_int_termsContext ------------------------------------------------------------------

ExprParser::Rhs_int_termsContext::Rhs_int_termsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::Rhs_int_termsContext::OP_ADD() {
  return getToken(ExprParser::OP_ADD, 0);
}

ExprParser::Int_factorsContext* ExprParser::Rhs_int_termsContext::int_factors() {
  return getRuleContext<ExprParser::Int_factorsContext>(0);
}

tree::TerminalNode* ExprParser::Rhs_int_termsContext::OP_SUB() {
  return getToken(ExprParser::OP_SUB, 0);
}


size_t ExprParser::Rhs_int_termsContext::getRuleIndex() const {
  return ExprParser::RuleRhs_int_terms;
}


antlrcpp::Any ExprParser::Rhs_int_termsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitRhs_int_terms(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::Rhs_int_termsContext* ExprParser::rhs_int_terms() {
  Rhs_int_termsContext *_localctx = _tracker.createInstance<Rhs_int_termsContext>(_ctx, getState());
  enterRule(_localctx, 6, ExprParser::RuleRhs_int_terms);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(29);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ExprParser::OP_ADD: {
        enterOuterAlt(_localctx, 1);
        setState(25);
        match(ExprParser::OP_ADD);
        setState(26);
        int_factors();
        break;
      }

      case ExprParser::OP_SUB: {
        enterOuterAlt(_localctx, 2);
        setState(27);
        match(ExprParser::OP_SUB);
        setState(28);
        int_factors();
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

//----------------- Int_factorsContext ------------------------------------------------------------------

ExprParser::Int_factorsContext::Int_factorsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ExprParser::Int_atomContext* ExprParser::Int_factorsContext::int_atom() {
  return getRuleContext<ExprParser::Int_atomContext>(0);
}

std::vector<ExprParser::Rhs_int_factorsContext *> ExprParser::Int_factorsContext::rhs_int_factors() {
  return getRuleContexts<ExprParser::Rhs_int_factorsContext>();
}

ExprParser::Rhs_int_factorsContext* ExprParser::Int_factorsContext::rhs_int_factors(size_t i) {
  return getRuleContext<ExprParser::Rhs_int_factorsContext>(i);
}


size_t ExprParser::Int_factorsContext::getRuleIndex() const {
  return ExprParser::RuleInt_factors;
}


antlrcpp::Any ExprParser::Int_factorsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitInt_factors(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::Int_factorsContext* ExprParser::int_factors() {
  Int_factorsContext *_localctx = _tracker.createInstance<Int_factorsContext>(_ctx, getState());
  enterRule(_localctx, 8, ExprParser::RuleInt_factors);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(31);
    int_atom();
    setState(35);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << ExprParser::OP_MUL)
      | (1ULL << ExprParser::OP_DIV)
      | (1ULL << ExprParser::OP_MOD))) != 0)) {
      setState(32);
      rhs_int_factors();
      setState(37);
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

//----------------- Rhs_int_factorsContext ------------------------------------------------------------------

ExprParser::Rhs_int_factorsContext::Rhs_int_factorsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::Rhs_int_factorsContext::OP_MUL() {
  return getToken(ExprParser::OP_MUL, 0);
}

ExprParser::Int_atomContext* ExprParser::Rhs_int_factorsContext::int_atom() {
  return getRuleContext<ExprParser::Int_atomContext>(0);
}

tree::TerminalNode* ExprParser::Rhs_int_factorsContext::OP_DIV() {
  return getToken(ExprParser::OP_DIV, 0);
}

tree::TerminalNode* ExprParser::Rhs_int_factorsContext::OP_MOD() {
  return getToken(ExprParser::OP_MOD, 0);
}


size_t ExprParser::Rhs_int_factorsContext::getRuleIndex() const {
  return ExprParser::RuleRhs_int_factors;
}


antlrcpp::Any ExprParser::Rhs_int_factorsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitRhs_int_factors(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::Rhs_int_factorsContext* ExprParser::rhs_int_factors() {
  Rhs_int_factorsContext *_localctx = _tracker.createInstance<Rhs_int_factorsContext>(_ctx, getState());
  enterRule(_localctx, 10, ExprParser::RuleRhs_int_factors);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(44);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ExprParser::OP_MUL: {
        enterOuterAlt(_localctx, 1);
        setState(38);
        match(ExprParser::OP_MUL);
        setState(39);
        int_atom();
        break;
      }

      case ExprParser::OP_DIV: {
        enterOuterAlt(_localctx, 2);
        setState(40);
        match(ExprParser::OP_DIV);
        setState(41);
        int_atom();
        break;
      }

      case ExprParser::OP_MOD: {
        enterOuterAlt(_localctx, 3);
        setState(42);
        match(ExprParser::OP_MOD);
        setState(43);
        int_atom();
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

//----------------- Int_atomContext ------------------------------------------------------------------

ExprParser::Int_atomContext::Int_atomContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::Int_atomContext::INTEGER() {
  return getToken(ExprParser::INTEGER, 0);
}

ExprParser::Int_exprContext* ExprParser::Int_atomContext::int_expr() {
  return getRuleContext<ExprParser::Int_exprContext>(0);
}


size_t ExprParser::Int_atomContext::getRuleIndex() const {
  return ExprParser::RuleInt_atom;
}


antlrcpp::Any ExprParser::Int_atomContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitInt_atom(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::Int_atomContext* ExprParser::int_atom() {
  Int_atomContext *_localctx = _tracker.createInstance<Int_atomContext>(_ctx, getState());
  enterRule(_localctx, 12, ExprParser::RuleInt_atom);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(51);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ExprParser::INTEGER: {
        enterOuterAlt(_localctx, 1);
        setState(46);
        match(ExprParser::INTEGER);
        break;
      }

      case ExprParser::T__0: {
        enterOuterAlt(_localctx, 2);
        setState(47);
        match(ExprParser::T__0);
        setState(48);
        int_expr();
        setState(49);
        match(ExprParser::T__1);
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

// Static vars and initialization.
std::vector<dfa::DFA> ExprParser::_decisionToDFA;
atn::PredictionContextCache ExprParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN ExprParser::_atn;
std::vector<uint16_t> ExprParser::_serializedATN;

std::vector<std::string> ExprParser::_ruleNames = {
  "prog", "int_expr", "int_terms", "rhs_int_terms", "int_factors", "rhs_int_factors", 
  "int_atom"
};

std::vector<std::string> ExprParser::_literalNames = {
  "", "'('", "')'", "'+'", "'-'", "'*'", "'/'", "'%'"
};

std::vector<std::string> ExprParser::_symbolicNames = {
  "", "", "", "OP_ADD", "OP_SUB", "OP_MUL", "OP_DIV", "OP_MOD", "INTEGER"
};

dfa::Vocabulary ExprParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> ExprParser::_tokenNames;

ExprParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x3, 0xa, 0x38, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 0x4, 
    0x8, 0x9, 0x8, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x4, 0x3, 
    0x4, 0x7, 0x4, 0x17, 0xa, 0x4, 0xc, 0x4, 0xe, 0x4, 0x1a, 0xb, 0x4, 0x3, 
    0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x5, 0x5, 0x20, 0xa, 0x5, 0x3, 0x6, 
    0x3, 0x6, 0x7, 0x6, 0x24, 0xa, 0x6, 0xc, 0x6, 0xe, 0x6, 0x27, 0xb, 0x6, 
    0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x5, 0x7, 
    0x2f, 0xa, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x5, 
    0x8, 0x36, 0xa, 0x8, 0x3, 0x8, 0x2, 0x2, 0x9, 0x2, 0x4, 0x6, 0x8, 0xa, 
    0xc, 0xe, 0x2, 0x2, 0x2, 0x36, 0x2, 0x10, 0x3, 0x2, 0x2, 0x2, 0x4, 0x12, 
    0x3, 0x2, 0x2, 0x2, 0x6, 0x14, 0x3, 0x2, 0x2, 0x2, 0x8, 0x1f, 0x3, 0x2, 
    0x2, 0x2, 0xa, 0x21, 0x3, 0x2, 0x2, 0x2, 0xc, 0x2e, 0x3, 0x2, 0x2, 0x2, 
    0xe, 0x35, 0x3, 0x2, 0x2, 0x2, 0x10, 0x11, 0x5, 0x4, 0x3, 0x2, 0x11, 
    0x3, 0x3, 0x2, 0x2, 0x2, 0x12, 0x13, 0x5, 0x6, 0x4, 0x2, 0x13, 0x5, 
    0x3, 0x2, 0x2, 0x2, 0x14, 0x18, 0x5, 0xa, 0x6, 0x2, 0x15, 0x17, 0x5, 
    0x8, 0x5, 0x2, 0x16, 0x15, 0x3, 0x2, 0x2, 0x2, 0x17, 0x1a, 0x3, 0x2, 
    0x2, 0x2, 0x18, 0x16, 0x3, 0x2, 0x2, 0x2, 0x18, 0x19, 0x3, 0x2, 0x2, 
    0x2, 0x19, 0x7, 0x3, 0x2, 0x2, 0x2, 0x1a, 0x18, 0x3, 0x2, 0x2, 0x2, 
    0x1b, 0x1c, 0x7, 0x5, 0x2, 0x2, 0x1c, 0x20, 0x5, 0xa, 0x6, 0x2, 0x1d, 
    0x1e, 0x7, 0x6, 0x2, 0x2, 0x1e, 0x20, 0x5, 0xa, 0x6, 0x2, 0x1f, 0x1b, 
    0x3, 0x2, 0x2, 0x2, 0x1f, 0x1d, 0x3, 0x2, 0x2, 0x2, 0x20, 0x9, 0x3, 
    0x2, 0x2, 0x2, 0x21, 0x25, 0x5, 0xe, 0x8, 0x2, 0x22, 0x24, 0x5, 0xc, 
    0x7, 0x2, 0x23, 0x22, 0x3, 0x2, 0x2, 0x2, 0x24, 0x27, 0x3, 0x2, 0x2, 
    0x2, 0x25, 0x23, 0x3, 0x2, 0x2, 0x2, 0x25, 0x26, 0x3, 0x2, 0x2, 0x2, 
    0x26, 0xb, 0x3, 0x2, 0x2, 0x2, 0x27, 0x25, 0x3, 0x2, 0x2, 0x2, 0x28, 
    0x29, 0x7, 0x7, 0x2, 0x2, 0x29, 0x2f, 0x5, 0xe, 0x8, 0x2, 0x2a, 0x2b, 
    0x7, 0x8, 0x2, 0x2, 0x2b, 0x2f, 0x5, 0xe, 0x8, 0x2, 0x2c, 0x2d, 0x7, 
    0x9, 0x2, 0x2, 0x2d, 0x2f, 0x5, 0xe, 0x8, 0x2, 0x2e, 0x28, 0x3, 0x2, 
    0x2, 0x2, 0x2e, 0x2a, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x2c, 0x3, 0x2, 0x2, 
    0x2, 0x2f, 0xd, 0x3, 0x2, 0x2, 0x2, 0x30, 0x36, 0x7, 0xa, 0x2, 0x2, 
    0x31, 0x32, 0x7, 0x3, 0x2, 0x2, 0x32, 0x33, 0x5, 0x4, 0x3, 0x2, 0x33, 
    0x34, 0x7, 0x4, 0x2, 0x2, 0x34, 0x36, 0x3, 0x2, 0x2, 0x2, 0x35, 0x30, 
    0x3, 0x2, 0x2, 0x2, 0x35, 0x31, 0x3, 0x2, 0x2, 0x2, 0x36, 0xf, 0x3, 
    0x2, 0x2, 0x2, 0x7, 0x18, 0x1f, 0x25, 0x2e, 0x35, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

ExprParser::Initializer ExprParser::_init;
