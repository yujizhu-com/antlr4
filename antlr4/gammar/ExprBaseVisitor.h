
// Generated from Expr.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"
#include "ExprVisitor.h"


/**
 * This class provides an empty implementation of ExprVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  ExprBaseVisitor : public ExprVisitor {
public:

  virtual std::any visitContent(ExprParser::ContentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDics(ExprParser::DicsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBdic(ExprParser::BdicContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBk(ExprParser::BkContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBvs(ExprParser::BvsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTkv(ExprParser::TkvContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTk(ExprParser::TkContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTvs(ExprParser::TvsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTv(ExprParser::TvContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFiles(ExprParser::FilesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFile(ExprParser::FileContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDic(ExprParser::DicContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitKv(ExprParser::KvContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitK(ExprParser::KContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVs(ExprParser::VsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitV(ExprParser::VContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLdic(ExprParser::LdicContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLkv(ExprParser::LkvContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPdic(ExprParser::PdicContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPkv(ExprParser::PkvContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPvs(ExprParser::PvsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPk(ExprParser::PkContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPv(ExprParser::PvContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNl(ExprParser::NlContext *ctx) override {
    return visitChildren(ctx);
  }


};

