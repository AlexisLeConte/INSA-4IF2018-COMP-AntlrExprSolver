
// Generated from Expr.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "ExprVisitor.h"


/**
 * This class provides an empty implementation of ExprVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  ExprBaseVisitor : public ExprVisitor {
public:

  virtual antlrcpp::Any visitProg(ExprParser::ProgContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInt_expr(ExprParser::Int_exprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInt_terms(ExprParser::Int_termsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRhs_int_terms(ExprParser::Rhs_int_termsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInt_factors(ExprParser::Int_factorsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRhs_int_factors(ExprParser::Rhs_int_factorsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInt_atom(ExprParser::Int_atomContext *ctx) override {
    return visitChildren(ctx);
  }


};

