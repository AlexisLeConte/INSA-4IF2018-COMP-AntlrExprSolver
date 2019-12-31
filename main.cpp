#include "antlr4-runtime.h"
#include "ExprLexer.h"
#include "ExprParser.h"
#include "ExprSolver.h"

int main(int argc, char **argv)
{
    if(argc != 2)
    {
        std::cout << "Usage: ./prog <arithmetic-expression>" << std::endl;
    }

    antlr4::ANTLRInputStream input(argv[1]);
    ExprLexer lexer(&input);
    antlr4::CommonTokenStream tokens(&lexer);
    ExprParser parser(&tokens);
    antlr4::tree::ParseTree *tree = parser.prog();

    ExprSolver visitor;
    int result = visitor.visit(tree);

    std::cout << result << std::endl;
    return 0;
}
