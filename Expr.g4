grammar Expr;

prog: int_expr;

int_expr: int_terms ;
int_terms: int_factors rhs_int_terms* ;
rhs_int_terms: OP_ADD int_factors
             | OP_SUB int_factors ;
int_factors: int_atom rhs_int_factors* ;
rhs_int_factors: OP_MUL int_atom
               | OP_DIV int_atom
               | OP_MOD int_atom ;
int_atom: INTEGER
        | '(' int_expr ')' ;

OP_ADD: '+' ;
OP_SUB: '-' ;
OP_MUL: '*' ;
OP_DIV: '/' ;
OP_MOD: '%' ;
INTEGER: [0-9]+ ;
