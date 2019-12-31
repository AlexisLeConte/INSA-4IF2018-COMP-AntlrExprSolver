
// Generated from Expr.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"




class  ExprParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, OP_ADD = 3, OP_SUB = 4, OP_MUL = 5, OP_DIV = 6, 
    OP_MOD = 7, INTEGER = 8
  };

  enum {
    RuleProg = 0, RuleInt_expr = 1, RuleInt_terms = 2, RuleRhs_int_terms = 3, 
    RuleInt_factors = 4, RuleRhs_int_factors = 5, RuleInt_atom = 6
  };

  ExprParser(antlr4::TokenStream *input);
  ~ExprParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class ProgContext;
  class Int_exprContext;
  class Int_termsContext;
  class Rhs_int_termsContext;
  class Int_factorsContext;
  class Rhs_int_factorsContext;
  class Int_atomContext; 

  class  ProgContext : public antlr4::ParserRuleContext {
  public:
    ProgContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Int_exprContext *int_expr();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ProgContext* prog();

  class  Int_exprContext : public antlr4::ParserRuleContext {
  public:
    Int_exprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Int_termsContext *int_terms();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Int_exprContext* int_expr();

  class  Int_termsContext : public antlr4::ParserRuleContext {
  public:
    Int_termsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Int_factorsContext *int_factors();
    std::vector<Rhs_int_termsContext *> rhs_int_terms();
    Rhs_int_termsContext* rhs_int_terms(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Int_termsContext* int_terms();

  class  Rhs_int_termsContext : public antlr4::ParserRuleContext {
  public:
    Rhs_int_termsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OP_ADD();
    Int_factorsContext *int_factors();
    antlr4::tree::TerminalNode *OP_SUB();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Rhs_int_termsContext* rhs_int_terms();

  class  Int_factorsContext : public antlr4::ParserRuleContext {
  public:
    Int_factorsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Int_atomContext *int_atom();
    std::vector<Rhs_int_factorsContext *> rhs_int_factors();
    Rhs_int_factorsContext* rhs_int_factors(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Int_factorsContext* int_factors();

  class  Rhs_int_factorsContext : public antlr4::ParserRuleContext {
  public:
    Rhs_int_factorsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OP_MUL();
    Int_atomContext *int_atom();
    antlr4::tree::TerminalNode *OP_DIV();
    antlr4::tree::TerminalNode *OP_MOD();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Rhs_int_factorsContext* rhs_int_factors();

  class  Int_atomContext : public antlr4::ParserRuleContext {
  public:
    Int_atomContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INTEGER();
    Int_exprContext *int_expr();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Int_atomContext* int_atom();


private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

