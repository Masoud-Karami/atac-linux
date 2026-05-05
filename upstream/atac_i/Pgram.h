/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 525,                 /* "invalid token"  */
    BREAK = 259,                   /* BREAK  */
    CASE = 260,                    /* CASE  */
    CHAR_KW = 261,                 /* CHAR_KW  */
    CONST = 262,                   /* CONST  */
    CONTINUE = 263,                /* CONTINUE  */
    DEFAULT = 264,                 /* DEFAULT  */
    DO = 265,                      /* DO  */
    DOUBLE = 266,                  /* DOUBLE  */
    ELSE = 267,                    /* ELSE  */
    ENUM = 268,                    /* ENUM  */
    EXTERN = 269,                  /* EXTERN  */
    FLOAT = 270,                   /* FLOAT  */
    FOR = 271,                     /* FOR  */
    GOTO = 272,                    /* GOTO  */
    IF = 273,                      /* IF  */
    INT = 275,                     /* INT  */
    LONG = 276,                    /* LONG  */
    REGISTER = 277,                /* REGISTER  */
    RETURN = 278,                  /* RETURN  */
    SHORT = 279,                   /* SHORT  */
    SIGNED = 280,                  /* SIGNED  */
    SIZEOF = 281,                  /* SIZEOF  */
    STATIC = 282,                  /* STATIC  */
    STRUCT = 283,                  /* STRUCT  */
    SWITCH = 284,                  /* SWITCH  */
    TYPEDEF = 285,                 /* TYPEDEF  */
    UNION = 287,                   /* UNION  */
    UNSIGNED = 288,                /* UNSIGNED  */
    VOID = 289,                    /* VOID  */
    VOLATILE = 290,                /* VOLATILE  */
    WHILE = 291,                   /* WHILE  */
    TOK_PACKED = 292,              /* TOK_PACKED  */
    OFFSET = 293,                  /* OFFSET  */
    ASM = 294,                     /* ASM  */
    INLINE = 295,                  /* INLINE  */
    ATTRIBUTE = 296,               /* ATTRIBUTE  */
    AUTO = 297,                    /* AUTO  */
    TOK_LPAREN = 501,              /* TOK_LPAREN  */
    TOK_RPAREN = 502,              /* TOK_RPAREN  */
    TOK_LSQUARE = 503,             /* TOK_LSQUARE  */
    TOK_RSQUARE = 504,             /* TOK_RSQUARE  */
    TOK_LCURLY = 505,              /* TOK_LCURLY  */
    TOK_RCURLY = 506,              /* TOK_RCURLY  */
    TOK_COMMA = 507,               /* TOK_COMMA  */
    TOK_EQUALS = 508,              /* TOK_EQUALS  */
    TOK_QMARK = 509,               /* TOK_QMARK  */
    TOK_COLON = 510,               /* TOK_COLON  */
    TOK_VERTICAL = 511,            /* TOK_VERTICAL  */
    TOK_CARROT = 512,              /* TOK_CARROT  */
    TOK_AMPER = 513,               /* TOK_AMPER  */
    TOK_GREATER = 514,             /* TOK_GREATER  */
    TOK_LESSER = 515,              /* TOK_LESSER  */
    TOK_PLUS = 516,                /* TOK_PLUS  */
    TOK_DASH = 517,                /* TOK_DASH  */
    TOK_STAR = 518,                /* TOK_STAR  */
    TOK_PERCENT = 519,             /* TOK_PERCENT  */
    TOK_SLASH = 520,               /* TOK_SLASH  */
    TOK_EXCLAIM = 521,             /* TOK_EXCLAIM  */
    TOK_TILDE = 522,               /* TOK_TILDE  */
    TOK_PERIOD = 523,              /* TOK_PERIOD  */
    TOK_SEMICOLON = 524,           /* TOK_SEMICOLON  */
    ELLIPSIS = 300,                /* ELLIPSIS  */
    ANDAND = 303,                  /* ANDAND  */
    OROR = 304,                    /* OROR  */
    PLUSPLUS = 309,                /* PLUSPLUS  */
    MINUSMINUS = 310,              /* MINUSMINUS  */
    STREF = 311,                   /* STREF  */
    PLUS_EQ = 312,                 /* PLUS_EQ  */
    MINUS_EQ = 313,                /* MINUS_EQ  */
    MUL_EQ = 314,                  /* MUL_EQ  */
    DIV_EQ = 315,                  /* DIV_EQ  */
    MOD_EQ = 316,                  /* MOD_EQ  */
    LS_EQ = 317,                   /* LS_EQ  */
    RS_EQ = 318,                   /* RS_EQ  */
    AND_EQ = 319,                  /* AND_EQ  */
    OR_EQ = 320,                   /* OR_EQ  */
    ER_EQ = 321,                   /* ER_EQ  */
    EQUAL = 322,                   /* EQUAL  */
    BANG_EQUAL = 323,              /* BANG_EQUAL  */
    GT_EQ = 324,                   /* GT_EQ  */
    LT_EQ = 325,                   /* LT_EQ  */
    LSHIFT = 326,                  /* LSHIFT  */
    RSHIFT = 327,                  /* RSHIFT  */
    NAME = 400,                    /* NAME  */
    T_NAME = 401,                  /* T_NAME  */
    STRING = 402,                  /* STRING  */
    ICON = 403,                    /* ICON  */
    FCON = 404                     /* FCON  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 525
#define BREAK 259
#define CASE 260
#define CHAR_KW 261
#define CONST 262
#define CONTINUE 263
#define DEFAULT 264
#define DO 265
#define DOUBLE 266
#define ELSE 267
#define ENUM 268
#define EXTERN 269
#define FLOAT 270
#define FOR 271
#define GOTO 272
#define IF 273
#define INT 275
#define LONG 276
#define REGISTER 277
#define RETURN 278
#define SHORT 279
#define SIGNED 280
#define SIZEOF 281
#define STATIC 282
#define STRUCT 283
#define SWITCH 284
#define TYPEDEF 285
#define UNION 287
#define UNSIGNED 288
#define VOID 289
#define VOLATILE 290
#define WHILE 291
#define TOK_PACKED 292
#define OFFSET 293
#define ASM 294
#define INLINE 295
#define ATTRIBUTE 296
#define AUTO 297
#define TOK_LPAREN 501
#define TOK_RPAREN 502
#define TOK_LSQUARE 503
#define TOK_RSQUARE 504
#define TOK_LCURLY 505
#define TOK_RCURLY 506
#define TOK_COMMA 507
#define TOK_EQUALS 508
#define TOK_QMARK 509
#define TOK_COLON 510
#define TOK_VERTICAL 511
#define TOK_CARROT 512
#define TOK_AMPER 513
#define TOK_GREATER 514
#define TOK_LESSER 515
#define TOK_PLUS 516
#define TOK_DASH 517
#define TOK_STAR 518
#define TOK_PERCENT 519
#define TOK_SLASH 520
#define TOK_EXCLAIM 521
#define TOK_TILDE 522
#define TOK_PERIOD 523
#define TOK_SEMICOLON 524
#define ELLIPSIS 300
#define ANDAND 303
#define OROR 304
#define PLUSPLUS 309
#define MINUSMINUS 310
#define STREF 311
#define PLUS_EQ 312
#define MINUS_EQ 313
#define MUL_EQ 314
#define DIV_EQ 315
#define MOD_EQ 316
#define LS_EQ 317
#define RS_EQ 318
#define AND_EQ 319
#define OR_EQ 320
#define ER_EQ 321
#define EQUAL 322
#define BANG_EQUAL 323
#define GT_EQ 324
#define LT_EQ 325
#define LSHIFT 326
#define RSHIFT 327
#define NAME 400
#define T_NAME 401
#define STRING 402
#define ICON 403
#define FCON 404

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 131 "./Pgram.y"

	TOKENVALUE	token;
	TNODE		*tnode;

#line 252 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
