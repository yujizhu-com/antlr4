//
//  DicsVisitor.hpp
//  antlr4
//
//  Created by 余纪柱 on 2022/10/9.
//

#ifndef DicsVisitor_hpp
#define DicsVisitor_hpp

#include <stdio.h>
#include "ExprBaseVisitor.h"
class DicsVisitor : public ExprBaseVisitor
{
public:
    virtual std::any visitContent(ExprParser::ContentContext *ctx) override {
        std::cout << std::string(__FUNCTION__)<< std::endl;
        std::cout << std::to_string(ctx->children.size())<< std::endl;
        return visitChildren(ctx);
    }

    virtual std::any visitDics(ExprParser::DicsContext *ctx) override {
        std::cout << std::string(__FUNCTION__)<< std::endl;
        std::cout << std::to_string(ctx->children.size())<< std::endl;
        return visitChildren(ctx);
    }

    virtual std::any visitBdic(ExprParser::BdicContext *ctx) override {
        std::cout << std::string(__FUNCTION__)<< std::endl;
        std::cout << std::to_string(ctx->children.size())<< std::endl;
        return visitChildren(ctx);
    }

    virtual std::any visitBk(ExprParser::BkContext *ctx) override {
        std::cout << std::string(__FUNCTION__)<< std::endl;
        std::cout << std::to_string(ctx->children.size())<< std::endl;
        return visitChildren(ctx);
    }

    virtual std::any visitBvs(ExprParser::BvsContext *ctx) override {
        std::cout << std::string(__FUNCTION__)<< std::endl;
        std::cout << std::to_string(ctx->children.size())<< std::endl;
        return visitChildren(ctx);
    }

    virtual std::any visitTkv(ExprParser::TkvContext *ctx) override {
        std::cout << std::string(__FUNCTION__)<< std::endl;
        std::cout << std::to_string(ctx->children.size())<< std::endl;
        return visitChildren(ctx);
    }

    virtual std::any visitTk(ExprParser::TkContext *ctx) override {
        std::cout << std::string(__FUNCTION__)<< std::endl;
        std::cout << std::to_string(ctx->children.size())<< std::endl;
        return visitChildren(ctx);
    }

    virtual std::any visitTvs(ExprParser::TvsContext *ctx) override {
        std::cout << std::string(__FUNCTION__)<< std::endl;
        std::cout << std::to_string(ctx->children.size())<< std::endl;
        return visitChildren(ctx);
    }

    virtual std::any visitTv(ExprParser::TvContext *ctx) override {
        std::cout << std::string(__FUNCTION__)<< std::endl;
        std::cout << std::to_string(ctx->children.size())<< std::endl;
        return visitChildren(ctx);
    }

    virtual std::any visitFiles(ExprParser::FilesContext *ctx) override {
        std::cout << std::string(__FUNCTION__)<< std::endl;
        std::cout << std::to_string(ctx->children.size())<< std::endl;
        return visitChildren(ctx);
    }

    virtual std::any visitFile(ExprParser::FileContext *ctx) override {
        std::cout << std::string(__FUNCTION__)<< std::endl;
        std::cout << std::to_string(ctx->children.size())<< std::endl;
        return visitChildren(ctx);
    }

    virtual std::any visitDic(ExprParser::DicContext *ctx) override {
        std::cout << std::string(__FUNCTION__)<< std::endl;
        std::cout << std::to_string(ctx->children.size())<< std::endl;
        return visitChildren(ctx);
    }

    virtual std::any visitKv(ExprParser::KvContext *ctx) override {
        std::cout << std::string(__FUNCTION__)<< std::endl;
        std::cout << std::to_string(ctx->children.size())<< std::endl;
        return visitChildren(ctx);
    }

    virtual std::any visitK(ExprParser::KContext *ctx) override {
        std::cout << std::string(__FUNCTION__)<< std::endl;
        std::cout << std::to_string(ctx->children.size())<< std::endl;
        return visitChildren(ctx);
    }

    virtual std::any visitVs(ExprParser::VsContext *ctx) override {
        std::cout << std::string(__FUNCTION__)<< std::endl;
        std::cout << std::to_string(ctx->children.size())<< std::endl;
        return visitChildren(ctx);
    }

    virtual std::any visitV(ExprParser::VContext *ctx) override {
        std::cout << std::string(__FUNCTION__)<< std::endl;
        std::cout << std::to_string(ctx->children.size())<< std::endl;
        return visitChildren(ctx);
    }

    virtual std::any visitLdic(ExprParser::LdicContext *ctx) override {
        std::cout << std::string(__FUNCTION__)<< std::endl;
        std::cout << std::to_string(ctx->children.size())<< std::endl;
        return visitChildren(ctx);
    }

    virtual std::any visitLkv(ExprParser::LkvContext *ctx) override {
        std::cout << std::string(__FUNCTION__)<< std::endl;
        std::cout << std::to_string(ctx->children.size())<< std::endl;
        return visitChildren(ctx);
    }

    virtual std::any visitPdic(ExprParser::PdicContext *ctx) override {
        std::cout << std::string(__FUNCTION__)<< std::endl;
        std::cout << std::to_string(ctx->children.size())<< std::endl;
        return visitChildren(ctx);
    }

    virtual std::any visitPkv(ExprParser::PkvContext *ctx) override {
        std::cout << std::string(__FUNCTION__)<< std::endl;
        std::cout << std::to_string(ctx->children.size())<< std::endl;
        return visitChildren(ctx);
    }

    virtual std::any visitPvs(ExprParser::PvsContext *ctx) override {
        std::cout << std::string(__FUNCTION__)<< std::endl;
        std::cout << std::to_string(ctx->children.size())<< std::endl;
        return visitChildren(ctx);
    }

    virtual std::any visitPk(ExprParser::PkContext *ctx) override {
        std::cout << std::string(__FUNCTION__)<< std::endl;
        std::cout << std::to_string(ctx->children.size())<< std::endl;
        return visitChildren(ctx);
    }

    virtual std::any visitPv(ExprParser::PvContext *ctx) override {
        std::cout << std::string(__FUNCTION__)<< std::endl;
        std::cout << std::to_string(ctx->children.size())<< std::endl;
        return visitChildren(ctx);
    }

    virtual std::any visitNl(ExprParser::NlContext *ctx) override {
        std::cout << std::string(__FUNCTION__)<< std::endl;
        std::cout << std::to_string(ctx->children.size())<< std::endl;
        return visitChildren(ctx);
    }

};

#endif /* DicsVisitor_hpp */
