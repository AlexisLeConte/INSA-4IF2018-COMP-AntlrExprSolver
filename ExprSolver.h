#pragma once

#include "antlr4-runtime.h"
#include "ExprBaseVisitor.h"
#include <string>

class ExprSolver : public ExprBaseVisitor {
public:

    virtual antlrcpp::Any visitProg(ExprParser::ProgContext *ctx) override
    {
        return (int) visitChildren(ctx);
    }

    virtual antlrcpp::Any visitInt_expr(ExprParser::Int_exprContext *ctx) override
    {
        return (int) visitChildren(ctx);
    }

    virtual antlrcpp::Any visitInt_terms(ExprParser::Int_termsContext *ctx) override
    {
        int value = (int) visit(ctx->int_factors());
        for(size_t i=0; i<ctx->rhs_int_terms().size(); ++i)
        {
            if(ctx->rhs_int_terms(i)->OP_ADD() != nullptr)
            {
                value += (int) visit(ctx->rhs_int_terms(i));
            }
            if(ctx->rhs_int_terms(i)->OP_SUB() != nullptr)
            {
                value -= (int) visit(ctx->rhs_int_terms(i));
            }
        }
        return value;
    }

    virtual antlrcpp::Any visitRhs_int_terms(ExprParser::Rhs_int_termsContext *ctx) override
    {
        return (int) visit(ctx->int_factors());
    }

    virtual antlrcpp::Any visitInt_factors(ExprParser::Int_factorsContext *ctx) override
    {
        int value = (int) visit(ctx->int_atom());
        for(size_t i=0; i<ctx->rhs_int_factors().size(); ++i)
        {
            if(ctx->rhs_int_factors(i)->OP_MUL() != nullptr)
            {
                value *= (int) visit(ctx->rhs_int_factors(i));
            }
            if(ctx->rhs_int_factors(i)->OP_DIV() != nullptr)
            {
                value /= (int) visit(ctx->rhs_int_factors(i));
            }
            if(ctx->rhs_int_factors(i)->OP_MOD() != nullptr)
            {
                value %= (int) visit(ctx->rhs_int_factors(i));
            }
        }
        return value;
    }

    virtual antlrcpp::Any visitRhs_int_factors(ExprParser::Rhs_int_factorsContext *ctx) override
    {
        return (int) visit(ctx->int_atom());
    }

    virtual antlrcpp::Any visitInt_atom(ExprParser::Int_atomContext *ctx) override
    {
        if(ctx->INTEGER() != nullptr)
        {
            return std::stoi(ctx->INTEGER()->getText());
        }
        return (int) visit(ctx->int_expr());
    }

};
