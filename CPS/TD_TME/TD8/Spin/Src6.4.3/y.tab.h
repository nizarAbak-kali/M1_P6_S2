#ifndef YY_parse_h_included
#define YY_parse_h_included
/*#define YY_USE_CLASS 
*/
#line 1 "/usr/share/bison++/bison.h"
/* before anything */
#ifdef c_plusplus
 #ifndef __cplusplus
  #define __cplusplus
 #endif
#endif


 #line 8 "/usr/share/bison++/bison.h"

#line 21 "/usr/share/bison++/bison.h"
 /* %{ and %header{ and %union, during decl */
#ifndef YY_parse_COMPATIBILITY
 #ifndef YY_USE_CLASS
  #define  YY_parse_COMPATIBILITY 1
 #else
  #define  YY_parse_COMPATIBILITY 0
 #endif
#endif

#if YY_parse_COMPATIBILITY != 0
/* backward compatibility */
 #ifdef YYLTYPE
  #ifndef YY_parse_LTYPE
   #define YY_parse_LTYPE YYLTYPE
/* WARNING obsolete !!! user defined YYLTYPE not reported into generated header */
/* use %define LTYPE */
  #endif
 #endif
/*#ifdef YYSTYPE*/
  #ifndef YY_parse_STYPE
   #define YY_parse_STYPE YYSTYPE
  /* WARNING obsolete !!! user defined YYSTYPE not reported into generated header */
   /* use %define STYPE */
  #endif
/*#endif*/
 #ifdef YYDEBUG
  #ifndef YY_parse_DEBUG
   #define  YY_parse_DEBUG YYDEBUG
   /* WARNING obsolete !!! user defined YYDEBUG not reported into generated header */
   /* use %define DEBUG */
  #endif
 #endif 
 /* use goto to be compatible */
 #ifndef YY_parse_USE_GOTO
  #define YY_parse_USE_GOTO 1
 #endif
#endif

/* use no goto to be clean in C++ */
#ifndef YY_parse_USE_GOTO
 #define YY_parse_USE_GOTO 0
#endif

#ifndef YY_parse_PURE

 #line 65 "/usr/share/bison++/bison.h"

#line 65 "/usr/share/bison++/bison.h"
/* YY_parse_PURE */
#endif


 #line 68 "/usr/share/bison++/bison.h"
#ifndef YY_USE_CLASS
# ifndef YYSTYPE
#  define YYSTYPE int
#  define YYSTYPE_IS_TRIVIAL 1
# endif
#endif

#line 68 "/usr/share/bison++/bison.h"
/* prefix */

#ifndef YY_parse_DEBUG

 #line 71 "/usr/share/bison++/bison.h"

#line 71 "/usr/share/bison++/bison.h"
/* YY_parse_DEBUG */
#endif

#ifndef YY_parse_LSP_NEEDED

 #line 75 "/usr/share/bison++/bison.h"

#line 75 "/usr/share/bison++/bison.h"
 /* YY_parse_LSP_NEEDED*/
#endif

/* DEFAULT LTYPE*/
#ifdef YY_parse_LSP_NEEDED
 #ifndef YY_parse_LTYPE
  #ifndef BISON_YYLTYPE_ISDECLARED
   #define BISON_YYLTYPE_ISDECLARED
typedef
  struct yyltype
    {
      int timestamp;
      int first_line;
      int first_column;
      int last_line;
      int last_column;
      char *text;
   }
  yyltype;
  #endif

  #define YY_parse_LTYPE yyltype
 #endif
#endif

/* DEFAULT STYPE*/
#ifndef YY_parse_STYPE
 #define YY_parse_STYPE int
#endif

/* DEFAULT MISCELANEOUS */
#ifndef YY_parse_PARSE
 #define YY_parse_PARSE yyparse
#endif

#ifndef YY_parse_LEX
 #define YY_parse_LEX yylex
#endif

#ifndef YY_parse_LVAL
 #define YY_parse_LVAL yylval
#endif

#ifndef YY_parse_LLOC
 #define YY_parse_LLOC yylloc
#endif

#ifndef YY_parse_CHAR
 #define YY_parse_CHAR yychar
#endif

#ifndef YY_parse_NERRS
 #define YY_parse_NERRS yynerrs
#endif

#ifndef YY_parse_DEBUG_FLAG
 #define YY_parse_DEBUG_FLAG yydebug
#endif

#ifndef YY_parse_ERROR
 #define YY_parse_ERROR yyerror
#endif

#ifndef YY_parse_PARSE_PARAM
 #ifndef __STDC__
  #ifndef __cplusplus
   #ifndef YY_USE_CLASS
    #define YY_parse_PARSE_PARAM
    #ifndef YY_parse_PARSE_PARAM_DEF
     #define YY_parse_PARSE_PARAM_DEF
    #endif
   #endif
  #endif
 #endif
 #ifndef YY_parse_PARSE_PARAM
  #define YY_parse_PARSE_PARAM void
 #endif
#endif

/* TOKEN C */
#ifndef YY_USE_CLASS

 #ifndef YY_parse_PURE
  #ifndef yylval
   extern YY_parse_STYPE YY_parse_LVAL;
  #else
   #if yylval != YY_parse_LVAL
    extern YY_parse_STYPE YY_parse_LVAL;
   #else
    #warning "Namespace conflict, disabling some functionality (bison++ only)"
   #endif
  #endif
 #endif


 #line 169 "/usr/share/bison++/bison.h"
#define	ASSERT	258
#define	PRINT	259
#define	PRINTM	260
#define	PREPROC	261
#define	C_CODE	262
#define	C_DECL	263
#define	C_EXPR	264
#define	C_STATE	265
#define	C_TRACK	266
#define	RUN	267
#define	LEN	268
#define	ENABLED	269
#define	SET_P	270
#define	GET_P	271
#define	EVAL	272
#define	PC_VAL	273
#define	TYPEDEF	274
#define	MTYPE	275
#define	INLINE	276
#define	RETURN	277
#define	LABEL	278
#define	OF	279
#define	GOTO	280
#define	BREAK	281
#define	ELSE	282
#define	SEMI	283
#define	ARROW	284
#define	IF	285
#define	FI	286
#define	DO	287
#define	OD	288
#define	FOR	289
#define	SELECT	290
#define	IN	291
#define	SEP	292
#define	DOTDOT	293
#define	ATOMIC	294
#define	NON_ATOMIC	295
#define	D_STEP	296
#define	UNLESS	297
#define	TIMEOUT	298
#define	NONPROGRESS	299
#define	ACTIVE	300
#define	PROCTYPE	301
#define	D_PROCTYPE	302
#define	HIDDEN	303
#define	SHOW	304
#define	ISLOCAL	305
#define	PRIORITY	306
#define	PROVIDED	307
#define	FULL	308
#define	EMPTY	309
#define	NFULL	310
#define	NEMPTY	311
#define	CONST	312
#define	TYPE	313
#define	XU	314
#define	NAME	315
#define	UNAME	316
#define	PNAME	317
#define	INAME	318
#define	STRING	319
#define	CLAIM	320
#define	TRACE	321
#define	INIT	322
#define	LTL	323
#define	ASGN	324
#define	SND	325
#define	O_SND	326
#define	RCV	327
#define	R_RCV	328
#define	IMPLIES	329
#define	EQUIV	330
#define	OR	331
#define	AND	332
#define	ALWAYS	333
#define	EVENTUALLY	334
#define	UNTIL	335
#define	WEAK_UNTIL	336
#define	RELEASE	337
#define	NEXT	338
#define	EQ	339
#define	NE	340
#define	GT	341
#define	LT	342
#define	GE	343
#define	LE	344
#define	LSHIFT	345
#define	RSHIFT	346
#define	INCR	347
#define	DECR	348
#define	UMIN	349
#define	NEG	350
#define	DOT	351


#line 169 "/usr/share/bison++/bison.h"
 /* #defines token */
/* after #define tokens, before const tokens S5*/
#else
 #ifndef YY_parse_CLASS
  #define YY_parse_CLASS parse
 #endif

 #ifndef YY_parse_INHERIT
  #define YY_parse_INHERIT
 #endif

 #ifndef YY_parse_MEMBERS
  #define YY_parse_MEMBERS 
 #endif

 #ifndef YY_parse_LEX_BODY
  #define YY_parse_LEX_BODY  
 #endif

 #ifndef YY_parse_ERROR_BODY
  #define YY_parse_ERROR_BODY  
 #endif

 #ifndef YY_parse_CONSTRUCTOR_PARAM
  #define YY_parse_CONSTRUCTOR_PARAM
 #endif
 /* choose between enum and const */
 #ifndef YY_parse_USE_CONST_TOKEN
  #define YY_parse_USE_CONST_TOKEN 0
  /* yes enum is more compatible with flex,  */
  /* so by default we use it */ 
 #endif
 #if YY_parse_USE_CONST_TOKEN != 0
  #ifndef YY_parse_ENUM_TOKEN
   #define YY_parse_ENUM_TOKEN yy_parse_enum_token
  #endif
 #endif

class YY_parse_CLASS YY_parse_INHERIT
{
public: 
 #if YY_parse_USE_CONST_TOKEN != 0
  /* static const int token ... */
  
 #line 212 "/usr/share/bison++/bison.h"
static const int ASSERT;
static const int PRINT;
static const int PRINTM;
static const int PREPROC;
static const int C_CODE;
static const int C_DECL;
static const int C_EXPR;
static const int C_STATE;
static const int C_TRACK;
static const int RUN;
static const int LEN;
static const int ENABLED;
static const int SET_P;
static const int GET_P;
static const int EVAL;
static const int PC_VAL;
static const int TYPEDEF;
static const int MTYPE;
static const int INLINE;
static const int RETURN;
static const int LABEL;
static const int OF;
static const int GOTO;
static const int BREAK;
static const int ELSE;
static const int SEMI;
static const int ARROW;
static const int IF;
static const int FI;
static const int DO;
static const int OD;
static const int FOR;
static const int SELECT;
static const int IN;
static const int SEP;
static const int DOTDOT;
static const int ATOMIC;
static const int NON_ATOMIC;
static const int D_STEP;
static const int UNLESS;
static const int TIMEOUT;
static const int NONPROGRESS;
static const int ACTIVE;
static const int PROCTYPE;
static const int D_PROCTYPE;
static const int HIDDEN;
static const int SHOW;
static const int ISLOCAL;
static const int PRIORITY;
static const int PROVIDED;
static const int FULL;
static const int EMPTY;
static const int NFULL;
static const int NEMPTY;
static const int CONST;
static const int TYPE;
static const int XU;
static const int NAME;
static const int UNAME;
static const int PNAME;
static const int INAME;
static const int STRING;
static const int CLAIM;
static const int TRACE;
static const int INIT;
static const int LTL;
static const int ASGN;
static const int SND;
static const int O_SND;
static const int RCV;
static const int R_RCV;
static const int IMPLIES;
static const int EQUIV;
static const int OR;
static const int AND;
static const int ALWAYS;
static const int EVENTUALLY;
static const int UNTIL;
static const int WEAK_UNTIL;
static const int RELEASE;
static const int NEXT;
static const int EQ;
static const int NE;
static const int GT;
static const int LT;
static const int GE;
static const int LE;
static const int LSHIFT;
static const int RSHIFT;
static const int INCR;
static const int DECR;
static const int UMIN;
static const int NEG;
static const int DOT;


#line 212 "/usr/share/bison++/bison.h"
 /* decl const */
 #else
  enum YY_parse_ENUM_TOKEN { YY_parse_NULL_TOKEN=0
  
 #line 215 "/usr/share/bison++/bison.h"
	,ASSERT=258
	,PRINT=259
	,PRINTM=260
	,PREPROC=261
	,C_CODE=262
	,C_DECL=263
	,C_EXPR=264
	,C_STATE=265
	,C_TRACK=266
	,RUN=267
	,LEN=268
	,ENABLED=269
	,SET_P=270
	,GET_P=271
	,EVAL=272
	,PC_VAL=273
	,TYPEDEF=274
	,MTYPE=275
	,INLINE=276
	,RETURN=277
	,LABEL=278
	,OF=279
	,GOTO=280
	,BREAK=281
	,ELSE=282
	,SEMI=283
	,ARROW=284
	,IF=285
	,FI=286
	,DO=287
	,OD=288
	,FOR=289
	,SELECT=290
	,IN=291
	,SEP=292
	,DOTDOT=293
	,ATOMIC=294
	,NON_ATOMIC=295
	,D_STEP=296
	,UNLESS=297
	,TIMEOUT=298
	,NONPROGRESS=299
	,ACTIVE=300
	,PROCTYPE=301
	,D_PROCTYPE=302
	,HIDDEN=303
	,SHOW=304
	,ISLOCAL=305
	,PRIORITY=306
	,PROVIDED=307
	,FULL=308
	,EMPTY=309
	,NFULL=310
	,NEMPTY=311
	,CONST=312
	,TYPE=313
	,XU=314
	,NAME=315
	,UNAME=316
	,PNAME=317
	,INAME=318
	,STRING=319
	,CLAIM=320
	,TRACE=321
	,INIT=322
	,LTL=323
	,ASGN=324
	,SND=325
	,O_SND=326
	,RCV=327
	,R_RCV=328
	,IMPLIES=329
	,EQUIV=330
	,OR=331
	,AND=332
	,ALWAYS=333
	,EVENTUALLY=334
	,UNTIL=335
	,WEAK_UNTIL=336
	,RELEASE=337
	,NEXT=338
	,EQ=339
	,NE=340
	,GT=341
	,LT=342
	,GE=343
	,LE=344
	,LSHIFT=345
	,RSHIFT=346
	,INCR=347
	,DECR=348
	,UMIN=349
	,NEG=350
	,DOT=351


#line 215 "/usr/share/bison++/bison.h"
 /* enum token */
     }; /* end of enum declaration */
 #endif
public:
 int YY_parse_PARSE(YY_parse_PARSE_PARAM);
 virtual void YY_parse_ERROR(char *msg) YY_parse_ERROR_BODY;
 #ifdef YY_parse_PURE
  #ifdef YY_parse_LSP_NEEDED
   virtual int  YY_parse_LEX(YY_parse_STYPE *YY_parse_LVAL,YY_parse_LTYPE *YY_parse_LLOC) YY_parse_LEX_BODY;
  #else
   virtual int  YY_parse_LEX(YY_parse_STYPE *YY_parse_LVAL) YY_parse_LEX_BODY;
  #endif
 #else
  virtual int YY_parse_LEX() YY_parse_LEX_BODY;
  YY_parse_STYPE YY_parse_LVAL;
  #ifdef YY_parse_LSP_NEEDED
   YY_parse_LTYPE YY_parse_LLOC;
  #endif
  int YY_parse_NERRS;
  int YY_parse_CHAR;
 #endif
 #if YY_parse_DEBUG != 0
  public:
   int YY_parse_DEBUG_FLAG;	/*  nonzero means print parse trace	*/
 #endif
public:
 YY_parse_CLASS(YY_parse_CONSTRUCTOR_PARAM);
public:
 YY_parse_MEMBERS 
};
/* other declare folow */
#endif


#if YY_parse_COMPATIBILITY != 0
 /* backward compatibility */
 /* Removed due to bison problems
 /#ifndef YYSTYPE
 / #define YYSTYPE YY_parse_STYPE
 /#endif*/

 #ifndef YYLTYPE
  #define YYLTYPE YY_parse_LTYPE
 #endif
 #ifndef YYDEBUG
  #ifdef YY_parse_DEBUG 
   #define YYDEBUG YY_parse_DEBUG
  #endif
 #endif

#endif
/* END */

 #line 267 "/usr/share/bison++/bison.h"
#endif
