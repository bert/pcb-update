/* $Id$ */

%{

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#ifdef HAVE_STRING_H
#include <string.h>
#endif

#include "resource.h"
#include "res_parse.h"

#define YY_INPUT(buf,result,max_size) { result = res_parse_getchars(buf, max_size); }

extern int res_lineno;

%}

%option prefix="res"
%option outfile="lex.yy.c"
%option yylineno
%option noyywrap

PARENSTR	([^ (){}=\"\'\t\r\n]|\([^\)]*\))+
INCSTR		@[a-z0-9A-Z_]+

%%

\"[^"]*\"	{ reslval.sval = strdup(yytext+1);
		  reslval.sval[strlen(reslval.sval) - 1] = 0;
		  return STRING; }

\'[^']*\'	{ reslval.sval = strdup(yytext+1);
		  reslval.sval[strlen(reslval.sval) - 1] = 0;
		  return STRING; }

[ \t\r\n]	{ if (yytext[0] == '\n') res_lineno++; }

{INCSTR}	{ reslval.sval = strdup(yytext+1);
		  	  return INCLUDE; }

{PARENSTR}	{ reslval.sval = strdup(yytext);
		  	  return STRING; }

.		{ return yytext[0]; }

%%

/* ' */