//
//  main.cpp
//  antlr4
//
//  Created by 余纪柱 on 2022/9/7.
//

#include <antlr4-runtime.h>
#include <iostream>

#include "ExprBaseListener.h"
#include "ExprBaseVisitor.h"
#include "ExprLexer.h"

using namespace std;

string strInFile(string file)
{
    return "";
}

int main(int argc, const char * argv[])
{
    {
        std::string progStr =  "(100+5)\n";
        antlr4::ANTLRInputStream* input = new antlr4::ANTLRInputStream(progStr);
        ExprLexer* lexer = new ExprLexer(input);
        antlr4::CommonTokenStream* tokens = new antlr4::CommonTokenStream(lexer);

        ExprParser* parser = new ExprParser(tokens);
        std::cout << parser->prog()->toStringTree(parser) << std::endl;
        
    }
    {
        std::string exprStr = "(100)";
        antlr4::ANTLRInputStream* input = new antlr4::ANTLRInputStream(exprStr);
        ExprLexer* lexer = new ExprLexer(input);
        antlr4::CommonTokenStream* tokens = new antlr4::CommonTokenStream(lexer);
        ExprParser* parser = new ExprParser(tokens);
        std::cout <<  parser->expr()->toStringTree(parser) << std::endl;
    }
    {
        std::string exprStr = "(100+5)";
        antlr4::ANTLRInputStream* input = new antlr4::ANTLRInputStream(exprStr);
        ExprLexer* lexer = new ExprLexer(input);
        antlr4::CommonTokenStream* tokens = new antlr4::CommonTokenStream(lexer);
        ExprParser* parser = new ExprParser(tokens);
        std::cout <<  parser->expr()->toStringTree(parser) << std::endl;

        auto walker = new antlr4::tree::ParseTreeWalker();
        walker->walk(new ExprBaseListener(), parser->expr());

//        auto listener = new ExprBaseListener();

//        auto visitor = new ExprBaseVisitor();
//        visitor->visitExpr(parser->prog());
//
    }
    
    
    return 0;
}
