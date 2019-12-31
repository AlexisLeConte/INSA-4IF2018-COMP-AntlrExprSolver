
// Generated from Expr.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "ExprParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by ExprParser.
 */
class  ExprVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by ExprParser.
   */
    virtual antlrcpp::Any visitProg(ExprParser::ProgContext *context) = 0;

    virtual antlrcpp::Any visitInt_expr(ExprParser::Int_exprContext *context) = 0;

    virtual antlrcpp::Any visitInt_terms(ExprParser::Int_termsContext *context) = 0;

    virtual antlrcpp::Any visitRhs_int_terms(ExprParser::Rhs_int_termsContext *context) = 0;

    virtual antlrcpp::Any visitInt_factors(ExprParser::Int_factorsContext *context) = 0;

    virtual antlrcpp::Any visitRhs_int_factors(ExprParser::Rhs_int_factorsContext *context) = 0;

    virtual antlrcpp::Any visitInt_atom(ExprParser::Int_atomContext *context) = 0;


};

