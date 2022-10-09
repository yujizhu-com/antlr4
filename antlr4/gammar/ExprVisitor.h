
// Generated from Expr.g4 by ANTLR 4.11.1

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
    virtual std::any visitContent(ExprParser::ContentContext *context) = 0;

    virtual std::any visitDics(ExprParser::DicsContext *context) = 0;

    virtual std::any visitBdic(ExprParser::BdicContext *context) = 0;

    virtual std::any visitBk(ExprParser::BkContext *context) = 0;

    virtual std::any visitBvs(ExprParser::BvsContext *context) = 0;

    virtual std::any visitTkv(ExprParser::TkvContext *context) = 0;

    virtual std::any visitTk(ExprParser::TkContext *context) = 0;

    virtual std::any visitTvs(ExprParser::TvsContext *context) = 0;

    virtual std::any visitTv(ExprParser::TvContext *context) = 0;

    virtual std::any visitFiles(ExprParser::FilesContext *context) = 0;

    virtual std::any visitFile(ExprParser::FileContext *context) = 0;

    virtual std::any visitDic(ExprParser::DicContext *context) = 0;

    virtual std::any visitKv(ExprParser::KvContext *context) = 0;

    virtual std::any visitK(ExprParser::KContext *context) = 0;

    virtual std::any visitVs(ExprParser::VsContext *context) = 0;

    virtual std::any visitV(ExprParser::VContext *context) = 0;

    virtual std::any visitLdic(ExprParser::LdicContext *context) = 0;

    virtual std::any visitLkv(ExprParser::LkvContext *context) = 0;

    virtual std::any visitPdic(ExprParser::PdicContext *context) = 0;

    virtual std::any visitPkv(ExprParser::PkvContext *context) = 0;

    virtual std::any visitPvs(ExprParser::PvsContext *context) = 0;

    virtual std::any visitPk(ExprParser::PkContext *context) = 0;

    virtual std::any visitPv(ExprParser::PvContext *context) = 0;

    virtual std::any visitNl(ExprParser::NlContext *context) = 0;


};

