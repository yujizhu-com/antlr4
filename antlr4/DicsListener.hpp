//
//  DicsListener.hpp
//  antlr4
//
//  Created by 余纪柱 on 2022/10/8.
//

#ifndef DicsListener_hpp
#define DicsListener_hpp

#include <stdio.h>
#include "ExprBaseListener.h"

class DicsListener : public ExprBaseListener
{
    virtual void enterContent(ExprParser::ContentContext * ctx) override {
        std::cout << std::string(__FUNCTION__)<< std::endl;
    }
    virtual void exitContent(ExprParser::ContentContext * ctx) override {
        std::cout << std::string(__FUNCTION__)<< std::endl;
    }

    virtual void enterDics(ExprParser::DicsContext * ctx) override {
        std::cout << std::string(__FUNCTION__)<< std::endl;
    }
    virtual void exitDics(ExprParser::DicsContext * ctx) override {
        std::cout << std::string(__FUNCTION__)<< std::endl;
    }

    virtual void enterBdic(ExprParser::BdicContext * ctx) override {
        std::cout << std::string(__FUNCTION__)<< std::endl;
    }
    virtual void exitBdic(ExprParser::BdicContext * ctx) override {
        std::cout << std::string(__FUNCTION__)<< std::endl;
    }

    virtual void enterBk(ExprParser::BkContext * ctx) override {
        std::cout << std::string(__FUNCTION__)<< std::endl;
    }
    virtual void exitBk(ExprParser::BkContext * ctx) override {
        std::cout << std::string(__FUNCTION__)<< std::endl;
    }

    virtual void enterBvs(ExprParser::BvsContext * ctx) override {
        std::cout << std::string(__FUNCTION__)<< std::endl;
    }
    virtual void exitBvs(ExprParser::BvsContext * ctx) override {
        std::cout << std::string(__FUNCTION__)<< std::endl;
    }

    virtual void enterTkv(ExprParser::TkvContext * ctx) override {
        std::cout << std::string(__FUNCTION__)<< std::endl;
    }
    virtual void exitTkv(ExprParser::TkvContext * ctx) override {
        std::cout << std::string(__FUNCTION__)<< std::endl;
    }

    virtual void enterTk(ExprParser::TkContext * ctx) override {
        std::cout << std::string(__FUNCTION__)<< std::endl;
    }
    virtual void exitTk(ExprParser::TkContext * ctx) override {
        std::cout << std::string(__FUNCTION__)<< std::endl;
    }

    virtual void enterTvs(ExprParser::TvsContext * ctx) override {
        std::cout << std::string(__FUNCTION__)<< std::endl;
    }
    virtual void exitTvs(ExprParser::TvsContext * ctx) override {
        std::cout << std::string(__FUNCTION__)<< std::endl;
    }

    virtual void enterTv(ExprParser::TvContext * ctx) override {
        std::cout << std::string(__FUNCTION__)<< std::endl;
    }
    virtual void exitTv(ExprParser::TvContext * ctx) override {
        std::cout << std::string(__FUNCTION__)<< std::endl;
    }

    virtual void enterFiles(ExprParser::FilesContext * ctx) override {
        std::cout << std::string(__FUNCTION__)<< std::endl;
    }
    virtual void exitFiles(ExprParser::FilesContext * ctx) override {
        std::cout << std::string(__FUNCTION__)<< std::endl;
    }

    virtual void enterFile(ExprParser::FileContext * ctx) override {
        std::cout << std::string(__FUNCTION__)<< std::endl;
    }
    virtual void exitFile(ExprParser::FileContext * ctx) override {
        std::cout << std::string(__FUNCTION__)<< std::endl;
    }

    virtual void enterDic(ExprParser::DicContext * ctx) override {
        std::cout << std::string(__FUNCTION__)<< std::endl;
    }
    virtual void exitDic(ExprParser::DicContext * ctx) override {
        std::cout << std::string(__FUNCTION__)<< std::endl;
    }

    virtual void enterKv(ExprParser::KvContext * ctx) override {
        std::cout << std::string(__FUNCTION__)<< std::endl;
    }
    virtual void exitKv(ExprParser::KvContext * ctx) override {
        std::cout << std::string(__FUNCTION__)<< std::endl;
    }

    virtual void enterK(ExprParser::KContext * ctx) override {
        std::cout << std::string(__FUNCTION__)<< std::endl;
    }
    virtual void exitK(ExprParser::KContext * ctx) override {
        std::cout << std::string(__FUNCTION__)<< std::endl;
    }

    virtual void enterVs(ExprParser::VsContext * ctx) override {
        std::cout << std::string(__FUNCTION__)<< std::endl;
    }
    virtual void exitVs(ExprParser::VsContext * ctx) override {
        std::cout << std::string(__FUNCTION__)<< std::endl;
    }

    virtual void enterV(ExprParser::VContext * ctx) override {
        std::cout << std::string(__FUNCTION__)<< std::endl;
    }
    virtual void exitV(ExprParser::VContext * ctx) override {
        std::cout << std::string(__FUNCTION__)<< std::endl;
    }

    virtual void enterLdic(ExprParser::LdicContext * ctx) override {
        std::cout << std::string(__FUNCTION__)<< std::endl;
    }
    virtual void exitLdic(ExprParser::LdicContext * ctx) override {
        std::cout << std::string(__FUNCTION__)<< std::endl;
    }

    virtual void enterLkv(ExprParser::LkvContext * ctx) override {
        std::cout << std::string(__FUNCTION__)<< std::endl;
    }
    virtual void exitLkv(ExprParser::LkvContext * ctx) override {
        std::cout << std::string(__FUNCTION__)<< std::endl;
    }

    virtual void enterPdic(ExprParser::PdicContext * ctx) override {
        std::cout << std::string(__FUNCTION__)<< std::endl;
    }
    virtual void exitPdic(ExprParser::PdicContext * ctx) override {
        std::cout << std::string(__FUNCTION__)<< std::endl;
    }

    virtual void enterPkv(ExprParser::PkvContext * ctx) override {
        std::cout << std::string(__FUNCTION__)<< std::endl;
    }
    virtual void exitPkv(ExprParser::PkvContext * ctx) override {
        std::cout << std::string(__FUNCTION__)<< std::endl;
    }

    virtual void enterPvs(ExprParser::PvsContext * ctx) override {
        std::cout << std::string(__FUNCTION__)<< std::endl;
    }
    virtual void exitPvs(ExprParser::PvsContext * ctx) override {
        std::cout << std::string(__FUNCTION__)<< std::endl;
    }

    virtual void enterPk(ExprParser::PkContext * ctx) override {
        std::cout << std::string(__FUNCTION__)<< std::endl;
    }
    virtual void exitPk(ExprParser::PkContext * ctx) override {
        std::cout << std::string(__FUNCTION__)<< std::endl;
    }

    virtual void enterPv(ExprParser::PvContext * ctx) override {
        std::cout << std::string(__FUNCTION__)<< std::endl;
    }
    virtual void exitPv(ExprParser::PvContext * ctx) override {
        std::cout << std::string(__FUNCTION__)<< std::endl;
    }

    virtual void enterNl(ExprParser::NlContext * ctx) override {
        std::cout << std::string(__FUNCTION__)<< std::endl;
    }
    virtual void exitNl(ExprParser::NlContext * ctx) override {
        std::cout << std::string(__FUNCTION__)<< std::endl;
    }


    virtual void enterEveryRule(antlr4::ParserRuleContext * ctx) override {
        std::cout << std::string(__FUNCTION__)<< std::endl;
    }
    virtual void exitEveryRule(antlr4::ParserRuleContext * ctx) override {
        std::cout << std::string(__FUNCTION__)<< std::endl;
    }
    virtual void visitTerminal(antlr4::tree::TerminalNode * node) override {
        std::cout << std::string(__FUNCTION__)<< std::endl;
    }
    virtual void visitErrorNode(antlr4::tree::ErrorNode * node) override {
        std::cout << std::string(__FUNCTION__)<< std::endl;
    }
};

#endif /* DicsListener_hpp */
