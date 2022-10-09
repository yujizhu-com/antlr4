
// Generated from Expr.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"
#include "ExprParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by ExprParser.
 */
class  ExprListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterContent(ExprParser::ContentContext *ctx) = 0;
  virtual void exitContent(ExprParser::ContentContext *ctx) = 0;

  virtual void enterDics(ExprParser::DicsContext *ctx) = 0;
  virtual void exitDics(ExprParser::DicsContext *ctx) = 0;

  virtual void enterBdic(ExprParser::BdicContext *ctx) = 0;
  virtual void exitBdic(ExprParser::BdicContext *ctx) = 0;

  virtual void enterBk(ExprParser::BkContext *ctx) = 0;
  virtual void exitBk(ExprParser::BkContext *ctx) = 0;

  virtual void enterBvs(ExprParser::BvsContext *ctx) = 0;
  virtual void exitBvs(ExprParser::BvsContext *ctx) = 0;

  virtual void enterTkv(ExprParser::TkvContext *ctx) = 0;
  virtual void exitTkv(ExprParser::TkvContext *ctx) = 0;

  virtual void enterTk(ExprParser::TkContext *ctx) = 0;
  virtual void exitTk(ExprParser::TkContext *ctx) = 0;

  virtual void enterTvs(ExprParser::TvsContext *ctx) = 0;
  virtual void exitTvs(ExprParser::TvsContext *ctx) = 0;

  virtual void enterTv(ExprParser::TvContext *ctx) = 0;
  virtual void exitTv(ExprParser::TvContext *ctx) = 0;

  virtual void enterFiles(ExprParser::FilesContext *ctx) = 0;
  virtual void exitFiles(ExprParser::FilesContext *ctx) = 0;

  virtual void enterFile(ExprParser::FileContext *ctx) = 0;
  virtual void exitFile(ExprParser::FileContext *ctx) = 0;

  virtual void enterDic(ExprParser::DicContext *ctx) = 0;
  virtual void exitDic(ExprParser::DicContext *ctx) = 0;

  virtual void enterKv(ExprParser::KvContext *ctx) = 0;
  virtual void exitKv(ExprParser::KvContext *ctx) = 0;

  virtual void enterK(ExprParser::KContext *ctx) = 0;
  virtual void exitK(ExprParser::KContext *ctx) = 0;

  virtual void enterVs(ExprParser::VsContext *ctx) = 0;
  virtual void exitVs(ExprParser::VsContext *ctx) = 0;

  virtual void enterV(ExprParser::VContext *ctx) = 0;
  virtual void exitV(ExprParser::VContext *ctx) = 0;

  virtual void enterLdic(ExprParser::LdicContext *ctx) = 0;
  virtual void exitLdic(ExprParser::LdicContext *ctx) = 0;

  virtual void enterLkv(ExprParser::LkvContext *ctx) = 0;
  virtual void exitLkv(ExprParser::LkvContext *ctx) = 0;

  virtual void enterPdic(ExprParser::PdicContext *ctx) = 0;
  virtual void exitPdic(ExprParser::PdicContext *ctx) = 0;

  virtual void enterPkv(ExprParser::PkvContext *ctx) = 0;
  virtual void exitPkv(ExprParser::PkvContext *ctx) = 0;

  virtual void enterPvs(ExprParser::PvsContext *ctx) = 0;
  virtual void exitPvs(ExprParser::PvsContext *ctx) = 0;

  virtual void enterPk(ExprParser::PkContext *ctx) = 0;
  virtual void exitPk(ExprParser::PkContext *ctx) = 0;

  virtual void enterPv(ExprParser::PvContext *ctx) = 0;
  virtual void exitPv(ExprParser::PvContext *ctx) = 0;

  virtual void enterNl(ExprParser::NlContext *ctx) = 0;
  virtual void exitNl(ExprParser::NlContext *ctx) = 0;


};

