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
int main(int argc, const char * argv[])
{
    ExprParser* parser = new ExprParser(NULL);
    parser->setBuildParseTree(false);
    std::string expr = "100+2*34";
    antlr4::ANTLRInputStream* input = new antlr4::ANTLRInputStream(expr+"\n");
    ExprLexer* lexer = new ExprLexer(input);
    lexer->setLine(1);
    lexer->setCharPositionInLine(0);
    antlr4::CommonTokenStream* tokens = new antlr4::CommonTokenStream(lexer);
    parser->setInputStream(tokens);
//    while ( expr!=null )
//    {
//        ANTLRInputStream input = new ANTLRInputStream(expr+"\n");
//        ExprLexer lexer = new ExprLexer(input);
//        lexer.setLine(line);
//        lexer.setCharPositionInLine(0);
//        CommonTokenStream tokens = new CommonTokenStream(lexer);
//        parser.setInputStream(tokens);
//        parser.stat();
//        expr = br.readLine();
//        line++;
//    }
//    auto ep = ExprParser(antlr4::TokenStream *input);
    return 0;
}
