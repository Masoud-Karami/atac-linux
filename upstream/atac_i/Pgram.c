/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 15 "./Pgram.y"


#ifdef MVS
#pragma csect (CODE, "pgram$")
#include <mvapts.h>
MODULEID(%M%,%J%/%D%/%T%)
#include <string.h>
#endif /* MVS */

static char Pgram_y[] =
"$Header: /usr/build/atac/atac-20131208/atac_i/RCS/Pgram.y,v 3.15 2013/12/08 23:19:59 tom Exp $";
/*
* @Log: Pgram.y,v @
* Revision 3.13  1997/12/11 23:34:34  tom
* remove unused/misleading symbol ENDFILE.
*
* Revision 3.11  1997/11/03 19:06:56  tom
* move <stdio.h> down below the include for config.h so we have const
* consistently
*
* Revision 3.10  1997/05/10 22:17:14  tom
* absorb srcpos.h into error.h
*
* Revision 3.9  1996/11/13 01:26:26  tom
* undo redefinition of literal-tokens (e.g., ';' vs TOK_SEMICOLON).
* change def of AUTO to avoid conflict with bison's ENDFILE.
* add forward-ref prototypes.
*
* Revision 3.8  1996/01/11 17:47:36  tom
* add _something_ to handle ASM case
*
* Revision 3.7  1995/12/27 01:35:34  tom
* handle INLINE, ASM states.  Also declare ATTRIBUTE state.
*
* Revision 3.6  94/06/01  09:02:58  saul
* fix for ANSI f(...) 
* 
* Revision 3.5  94/04/04  10:11:33  jrh
* Add Release Copyright
* 
* Revision 3.4  94/03/21  08:17:21  saul
* MVS support __offsetof as builtin (not handled by cpp)
* 
* Revision 3.3  93/11/19  12:15:20  saul
* MVS support for _Packed
* 
* Revision 3.2  93/08/04  15:43:17  ewk
* Added MVS and solaris support.  Squelched some ANSI warnings.
* 
* Revision 3.1  93/07/12  08:56:07  saul
* MVS MODULEID
* 
* Revision 3.0  92/11/06  07:44:44  saul
* propagate to version 3.0
* 
* Revision 2.10  92/11/04  15:55:49  saul
* removed access to freed memory in STMT_FOR.  Fixed struct {;};
* 
* Revision 2.9  92/11/02  15:45:21  saul
* changed CHAR to CHAR_KW to make room for CHAR() in portable.h
* 
* Revision 2.8  92/10/30  09:47:24  saul
* include portable.h
* 
* Revision 2.7  92/09/16  07:35:06  saul
* New scan interface.  Get rid of unused keywords.
* 
* Revision 2.6  92/04/07  07:36:57  saul
* added unique prefix stuff
* 
* Revision 2.5  92/03/17  14:22:06  saul
* copyright
* 
* Revision 2.4  91/10/23  13:20:25  saul
* Handle "*const volatile".
* 
* Revision 2.3  91/10/23  12:34:13  saul
* Allow empty declaration list as in "int;"
* 
* Revision 2.2  91/06/13  13:12:15  saul
* Changes for ansi.
* 
* Revision 2.1  91/06/13  12:38:51  saul
* Propagate to version 2.0
* 
* Revision 1.3  91/06/12  21:01:23  saul
* remove percent } from log
* 
* Revision 1.2  91/06/12  20:57:02  saul
* Move rcs id inside %{ %\}
* 
* Revision 1.1  91/06/12  20:25:32  saul
* Aug 1990 baseline
* 
*-----------------------------------------------end of log
*/
#include "portable.h"
#include <stdio.h>
#include "error.h"
#include "scan.h"
#include "tnode.h"
#include "tree.h"

/* forward declarations */
extern int yyparse(void);
static void insertTypeNames(TNODE * node);

static TNODE *tree_root;

static SRCPOS nosrcpos[2] =
{
    {-1, 0, 0},
    {-1, 0, 0}};


#line 187 "y.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
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

#line 425 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_BREAK = 3,                      /* BREAK  */
  YYSYMBOL_CASE = 4,                       /* CASE  */
  YYSYMBOL_CHAR_KW = 5,                    /* CHAR_KW  */
  YYSYMBOL_CONST = 6,                      /* CONST  */
  YYSYMBOL_CONTINUE = 7,                   /* CONTINUE  */
  YYSYMBOL_DEFAULT = 8,                    /* DEFAULT  */
  YYSYMBOL_DO = 9,                         /* DO  */
  YYSYMBOL_DOUBLE = 10,                    /* DOUBLE  */
  YYSYMBOL_ELSE = 11,                      /* ELSE  */
  YYSYMBOL_ENUM = 12,                      /* ENUM  */
  YYSYMBOL_EXTERN = 13,                    /* EXTERN  */
  YYSYMBOL_FLOAT = 14,                     /* FLOAT  */
  YYSYMBOL_FOR = 15,                       /* FOR  */
  YYSYMBOL_GOTO = 16,                      /* GOTO  */
  YYSYMBOL_IF = 17,                        /* IF  */
  YYSYMBOL_INT = 18,                       /* INT  */
  YYSYMBOL_LONG = 19,                      /* LONG  */
  YYSYMBOL_REGISTER = 20,                  /* REGISTER  */
  YYSYMBOL_RETURN = 21,                    /* RETURN  */
  YYSYMBOL_SHORT = 22,                     /* SHORT  */
  YYSYMBOL_SIGNED = 23,                    /* SIGNED  */
  YYSYMBOL_SIZEOF = 24,                    /* SIZEOF  */
  YYSYMBOL_STATIC = 25,                    /* STATIC  */
  YYSYMBOL_STRUCT = 26,                    /* STRUCT  */
  YYSYMBOL_SWITCH = 27,                    /* SWITCH  */
  YYSYMBOL_TYPEDEF = 28,                   /* TYPEDEF  */
  YYSYMBOL_UNION = 29,                     /* UNION  */
  YYSYMBOL_UNSIGNED = 30,                  /* UNSIGNED  */
  YYSYMBOL_VOID = 31,                      /* VOID  */
  YYSYMBOL_VOLATILE = 32,                  /* VOLATILE  */
  YYSYMBOL_WHILE = 33,                     /* WHILE  */
  YYSYMBOL_TOK_PACKED = 34,                /* TOK_PACKED  */
  YYSYMBOL_OFFSET = 35,                    /* OFFSET  */
  YYSYMBOL_ASM = 36,                       /* ASM  */
  YYSYMBOL_INLINE = 37,                    /* INLINE  */
  YYSYMBOL_ATTRIBUTE = 38,                 /* ATTRIBUTE  */
  YYSYMBOL_AUTO = 39,                      /* AUTO  */
  YYSYMBOL_TOK_LPAREN = 40,                /* TOK_LPAREN  */
  YYSYMBOL_TOK_RPAREN = 41,                /* TOK_RPAREN  */
  YYSYMBOL_TOK_LSQUARE = 42,               /* TOK_LSQUARE  */
  YYSYMBOL_TOK_RSQUARE = 43,               /* TOK_RSQUARE  */
  YYSYMBOL_TOK_LCURLY = 44,                /* TOK_LCURLY  */
  YYSYMBOL_TOK_RCURLY = 45,                /* TOK_RCURLY  */
  YYSYMBOL_TOK_COMMA = 46,                 /* TOK_COMMA  */
  YYSYMBOL_TOK_EQUALS = 47,                /* TOK_EQUALS  */
  YYSYMBOL_TOK_QMARK = 48,                 /* TOK_QMARK  */
  YYSYMBOL_TOK_COLON = 49,                 /* TOK_COLON  */
  YYSYMBOL_TOK_VERTICAL = 50,              /* TOK_VERTICAL  */
  YYSYMBOL_TOK_CARROT = 51,                /* TOK_CARROT  */
  YYSYMBOL_TOK_AMPER = 52,                 /* TOK_AMPER  */
  YYSYMBOL_TOK_GREATER = 53,               /* TOK_GREATER  */
  YYSYMBOL_TOK_LESSER = 54,                /* TOK_LESSER  */
  YYSYMBOL_TOK_PLUS = 55,                  /* TOK_PLUS  */
  YYSYMBOL_TOK_DASH = 56,                  /* TOK_DASH  */
  YYSYMBOL_TOK_STAR = 57,                  /* TOK_STAR  */
  YYSYMBOL_TOK_PERCENT = 58,               /* TOK_PERCENT  */
  YYSYMBOL_TOK_SLASH = 59,                 /* TOK_SLASH  */
  YYSYMBOL_TOK_EXCLAIM = 60,               /* TOK_EXCLAIM  */
  YYSYMBOL_TOK_TILDE = 61,                 /* TOK_TILDE  */
  YYSYMBOL_TOK_PERIOD = 62,                /* TOK_PERIOD  */
  YYSYMBOL_TOK_SEMICOLON = 63,             /* TOK_SEMICOLON  */
  YYSYMBOL_ELLIPSIS = 64,                  /* ELLIPSIS  */
  YYSYMBOL_ANDAND = 65,                    /* ANDAND  */
  YYSYMBOL_OROR = 66,                      /* OROR  */
  YYSYMBOL_PLUSPLUS = 67,                  /* PLUSPLUS  */
  YYSYMBOL_MINUSMINUS = 68,                /* MINUSMINUS  */
  YYSYMBOL_STREF = 69,                     /* STREF  */
  YYSYMBOL_PLUS_EQ = 70,                   /* PLUS_EQ  */
  YYSYMBOL_MINUS_EQ = 71,                  /* MINUS_EQ  */
  YYSYMBOL_MUL_EQ = 72,                    /* MUL_EQ  */
  YYSYMBOL_DIV_EQ = 73,                    /* DIV_EQ  */
  YYSYMBOL_MOD_EQ = 74,                    /* MOD_EQ  */
  YYSYMBOL_LS_EQ = 75,                     /* LS_EQ  */
  YYSYMBOL_RS_EQ = 76,                     /* RS_EQ  */
  YYSYMBOL_AND_EQ = 77,                    /* AND_EQ  */
  YYSYMBOL_OR_EQ = 78,                     /* OR_EQ  */
  YYSYMBOL_ER_EQ = 79,                     /* ER_EQ  */
  YYSYMBOL_EQUAL = 80,                     /* EQUAL  */
  YYSYMBOL_BANG_EQUAL = 81,                /* BANG_EQUAL  */
  YYSYMBOL_GT_EQ = 82,                     /* GT_EQ  */
  YYSYMBOL_LT_EQ = 83,                     /* LT_EQ  */
  YYSYMBOL_LSHIFT = 84,                    /* LSHIFT  */
  YYSYMBOL_RSHIFT = 85,                    /* RSHIFT  */
  YYSYMBOL_NAME = 86,                      /* NAME  */
  YYSYMBOL_T_NAME = 87,                    /* T_NAME  */
  YYSYMBOL_STRING = 88,                    /* STRING  */
  YYSYMBOL_ICON = 89,                      /* ICON  */
  YYSYMBOL_FCON = 90,                      /* FCON  */
  YYSYMBOL_YYACCEPT = 91,                  /* $accept  */
  YYSYMBOL_module = 92,                    /* module  */
  YYSYMBOL_module_item = 93,               /* module_item  */
  YYSYMBOL_function = 94,                  /* function  */
  YYSYMBOL_func_spec = 95,                 /* func_spec  */
  YYSYMBOL_complex_term = 96,              /* complex_term  */
  YYSYMBOL_ansi_params = 97,               /* ansi_params  */
  YYSYMBOL_ansi_param = 98,                /* ansi_param  */
  YYSYMBOL_classtypes = 99,                /* classtypes  */
  YYSYMBOL_classtype = 100,                /* classtype  */
  YYSYMBOL_param_dcls = 101,               /* param_dcls  */
  YYSYMBOL_param_dcl = 102,                /* param_dcl  */
  YYSYMBOL_parameter_defs = 103,           /* parameter_defs  */
  YYSYMBOL_stmt_list = 104,                /* stmt_list  */
  YYSYMBOL_enum_dcl = 105,                 /* enum_dcl  */
  YYSYMBOL_enum_ref = 106,                 /* enum_ref  */
  YYSYMBOL_moe_list = 107,                 /* moe_list  */
  YYSYMBOL_moe = 108,                      /* moe  */
  YYSYMBOL_struct_dcl = 109,               /* struct_dcl  */
  YYSYMBOL_struct_ref = 110,               /* struct_ref  */
  YYSYMBOL_mem_list = 111,                 /* mem_list  */
  YYSYMBOL_member = 112,                   /* member  */
  YYSYMBOL_mem_dcls = 113,                 /* mem_dcls  */
  YYSYMBOL_mem_dcl = 114,                  /* mem_dcl  */
  YYSYMBOL_names = 115,                    /* names  */
  YYSYMBOL_init_dcl = 116,                 /* init_dcl  */
  YYSYMBOL_indata_dcls = 117,              /* indata_dcls  */
  YYSYMBOL_indata_dcl = 118,               /* indata_dcl  */
  YYSYMBOL_data_specs = 119,               /* data_specs  */
  YYSYMBOL_data_spec = 120,                /* data_spec  */
  YYSYMBOL_data_item = 121,                /* data_item  */
  YYSYMBOL_nfunc_spec = 122,               /* nfunc_spec  */
  YYSYMBOL_d_i_term = 123,                 /* d_i_term  */
  YYSYMBOL_init_list = 124,                /* init_list  */
  YYSYMBOL_init_item = 125,                /* init_item  */
  YYSYMBOL_initializer = 126,              /* initializer  */
  YYSYMBOL_compstmt = 127,                 /* compstmt  */
  YYSYMBOL_stmt = 128,                     /* stmt  */
  YYSYMBOL_exp_list = 129,                 /* exp_list  */
  YYSYMBOL_expr = 130,                     /* expr  */
  YYSYMBOL_term = 131,                     /* term  */
  YYSYMBOL_strings = 132,                  /* strings  */
  YYSYMBOL_cast_type = 133,                /* cast_type  */
  YYSYMBOL_null_dcl = 134,                 /* null_dcl  */
  YYSYMBOL_mname = 135,                    /* mname  */
  YYSYMBOL_tname_or_name = 136,            /* tname_or_name  */
  YYSYMBOL_t_name = 137,                   /* t_name  */
  YYSYMBOL_name = 138,                     /* name  */
  YYSYMBOL_star = 139,                     /* star  */
  YYSYMBOL_qualifiers = 140,               /* qualifiers  */
  YYSYMBOL_qualifier = 141,                /* qualifier  */
  YYSYMBOL_asop = 142,                     /* asop  */
  YYSYMBOL_relop = 143,                    /* relop  */
  YYSYMBOL_equop = 144                     /* equop  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   3605

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  91
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  54
/* YYNRULES -- Number of rules.  */
#define YYNRULES  238
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  443

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   525


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,     2,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,     2,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,     2,     2,
      64,     2,     2,    65,    66,     2,     2,     2,     2,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      86,    87,    88,    89,    90,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,     2
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   316,   316,   322,   328,   333,   341,   352,   362,   367,
     373,   385,   391,   397,   403,   409,   415,   422,   428,   435,
     442,   448,   454,   461,   469,   473,   479,   489,   501,   507,
     515,   520,   525,   530,   535,   540,   545,   550,   555,   560,
     565,   570,   575,   580,   585,   590,   595,   600,   605,   610,
     615,   620,   627,   631,   635,   643,   655,   659,   665,   669,
     675,   680,   685,   690,   697,   704,   708,   714,   718,   724,
     730,   736,   742,   748,   754,   760,   766,   774,   780,   786,
     792,   799,   803,   813,   823,   845,   849,   855,   859,   863,
     870,   874,   880,   890,   898,   912,   919,   923,   929,   939,
     947,   954,   958,   964,   969,   975,  1000,  1006,  1018,  1022,
    1028,  1034,  1040,  1046,  1052,  1058,  1064,  1072,  1076,  1082,
    1087,  1093,  1101,  1107,  1113,  1122,  1128,  1134,  1140,  1148,
    1154,  1159,  1164,  1168,  1174,  1185,  1190,  1195,  1211,  1225,
    1239,  1252,  1266,  1279,  1292,  1297,  1302,  1307,  1312,  1317,
    1322,  1328,  1333,  1338,  1345,  1349,  1355,  1361,  1366,  1370,
    1377,  1384,  1391,  1398,  1405,  1412,  1419,  1426,  1433,  1440,
    1447,  1454,  1459,  1464,  1471,  1477,  1483,  1489,  1496,  1503,
    1510,  1517,  1524,  1531,  1539,  1544,  1549,  1555,  1560,  1571,
    1576,  1580,  1584,  1588,  1604,  1620,  1627,  1634,  1638,  1645,
    1651,  1660,  1676,  1680,  1685,  1690,  1695,  1700,  1710,  1720,
    1730,  1742,  1743,  1747,  1749,  1752,  1759,  1765,  1770,  1776,
    1780,  1786,  1791,  1796,  1802,  1808,  1814,  1820,  1826,  1832,
    1838,  1844,  1850,  1856,  1862,  1868,  1873,  1878,  1883
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "BREAK", "CASE",
  "CHAR_KW", "CONST", "CONTINUE", "DEFAULT", "DO", "DOUBLE", "ELSE",
  "ENUM", "EXTERN", "FLOAT", "FOR", "GOTO", "IF", "INT", "LONG",
  "REGISTER", "RETURN", "SHORT", "SIGNED", "SIZEOF", "STATIC", "STRUCT",
  "SWITCH", "TYPEDEF", "UNION", "UNSIGNED", "VOID", "VOLATILE", "WHILE",
  "TOK_PACKED", "OFFSET", "ASM", "INLINE", "ATTRIBUTE", "AUTO",
  "TOK_LPAREN", "TOK_RPAREN", "TOK_LSQUARE", "TOK_RSQUARE", "TOK_LCURLY",
  "TOK_RCURLY", "TOK_COMMA", "TOK_EQUALS", "TOK_QMARK", "TOK_COLON",
  "TOK_VERTICAL", "TOK_CARROT", "TOK_AMPER", "TOK_GREATER", "TOK_LESSER",
  "TOK_PLUS", "TOK_DASH", "TOK_STAR", "TOK_PERCENT", "TOK_SLASH",
  "TOK_EXCLAIM", "TOK_TILDE", "TOK_PERIOD", "TOK_SEMICOLON", "ELLIPSIS",
  "ANDAND", "OROR", "PLUSPLUS", "MINUSMINUS", "STREF", "PLUS_EQ",
  "MINUS_EQ", "MUL_EQ", "DIV_EQ", "MOD_EQ", "LS_EQ", "RS_EQ", "AND_EQ",
  "OR_EQ", "ER_EQ", "EQUAL", "BANG_EQUAL", "GT_EQ", "LT_EQ", "LSHIFT",
  "RSHIFT", "NAME", "T_NAME", "STRING", "ICON", "FCON", "$accept",
  "module", "module_item", "function", "func_spec", "complex_term",
  "ansi_params", "ansi_param", "classtypes", "classtype", "param_dcls",
  "param_dcl", "parameter_defs", "stmt_list", "enum_dcl", "enum_ref",
  "moe_list", "moe", "struct_dcl", "struct_ref", "mem_list", "member",
  "mem_dcls", "mem_dcl", "names", "init_dcl", "indata_dcls", "indata_dcl",
  "data_specs", "data_spec", "data_item", "nfunc_spec", "d_i_term",
  "init_list", "init_item", "initializer", "compstmt", "stmt", "exp_list",
  "expr", "term", "strings", "cast_type", "null_dcl", "mname",
  "tname_or_name", "t_name", "name", "star", "qualifiers", "qualifier",
  "asop", "relop", "equop", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-333)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-215)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -333,  1017,  -333,  -333,  -333,  -333,    29,  -333,  -333,  -333,
    -333,  -333,  -333,  -333,  -333,    66,  -333,   124,  -333,  -333,
    -333,    70,  -333,  -333,   -14,    61,  -333,  -333,  -333,  -333,
    -333,  1823,   -13,  1139,  -333,  -333,  -333,  -333,  -333,  -333,
      35,  -333,   -29,    -8,    -2,  -333,    37,   -14,   -17,    31,
    -333,  -333,  1859,    39,  1859,    64,   137,   139,    49,   153,
    -333,  -333,    61,  -333,   686,  1253,  1373,  -333,  -333,  1415,
    2052,  -333,  1823,  -333,    56,   -14,  -333,   548,  -333,  2091,
    1452,  1295,  -333,    -8,   193,  -333,    71,   -17,  -333,  1175,
    1495,  -333,  1859,  1531,  1859,  1859,    80,  1859,   114,  -333,
    -333,  -333,    98,  2476,   107,   143,   926,   133,   161,   148,
    2115,  2515,   164,   168,   178,   151,  1053,  -333,  2476,  2476,
    2476,  2476,  2476,  2049,  2476,  2476,  -333,  -333,  -333,  1217,
     534,   774,  -333,  -333,  -333,  3133,   269,   176,   213,   219,
     224,  2476,  -333,    81,  -333,  -333,  -333,  -333,  -333,   238,
     108,  -333,  1332,  -333,  2964,  -333,  1373,  -333,  -333,  -333,
    2162,  3412,  -333,  3007,  -333,   240,   136,  -333,   241,   174,
     181,  -333,  -333,   -36,  2476,   204,  2476,   101,  -333,   242,
    -333,  -333,  1561,  -333,  1591,  1621,  1859,  1651,  1859,  -333,
    3173,  -333,   926,  -333,   256,  2176,   230,  2476,  -333,  3213,
    1053,   269,  2476,  2476,   161,  -333,  1687,  2561,   251,   269,
     269,   269,   269,   269,  -333,   269,   269,  -333,   104,  -333,
    -333,  -333,   850,  -333,  2476,  2476,  2476,  2476,  2476,  2476,
    -333,  -333,  2476,  2476,  2476,  2476,  2476,  -333,  2476,  2476,
    -333,  -333,  -333,  -333,  -333,  -333,  -333,  -333,  -333,  -333,
    -333,  -333,  -333,  -333,  2476,  2476,  2476,  2476,  2476,  2218,
    2476,   161,  -333,  -333,   161,  -333,   926,   269,   -14,  -333,
    -333,  -333,  1889,     9,  -333,   144,     9,  -333,  -333,  2162,
     212,  -333,  3412,  -333,  -333,  -333,  1929,  -333,  -333,  1969,
    -333,   -17,  -333,  -333,  3412,  -333,   -28,  3412,     8,  -333,
    2476,  -333,  -333,  -333,  1723,  -333,  1753,   926,  -333,   254,
    2232,  3253,  -333,  2606,  -333,   258,  2651,  2696,   255,   117,
     144,   117,  -333,  2476,  -333,  -333,  3412,  3412,  3293,  1043,
    3520,   918,   171,   171,  -333,  -333,  -333,  3502,  3486,   291,
     291,  3412,   229,  2107,  -333,   191,  3412,  3050,  -333,  -333,
    -333,  -333,   259,  -333,   203,  1783,  2274,   144,   225,  -333,
     145,   262,   263,  -333,  -333,  -333,  3412,  -333,  -333,  -333,
    2476,  2313,  3333,  2337,   926,   572,   926,   926,   -17,   269,
    2476,  -333,  2476,  -333,  -333,  -333,  -333,   264,   195,  -333,
    3093,  -333,   429,  -333,  -333,  -333,  -333,  2741,   926,  2786,
    2389,  2413,  3373,   296,  -333,  -333,    27,  -333,  3450,  3412,
    -333,  -333,  2009,  -333,  -333,   245,  -333,   926,   926,  2831,
     926,  2876,  2452,   926,  -333,   -17,   274,  -333,  -333,  -333,
     926,  -333,   926,   926,  2921,  -333,  -333,  -333,  -333,  -333,
    -333,   926,  -333
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,     1,    31,    39,    33,     0,    45,    32,    30,
      34,    42,    35,    37,    43,     0,    46,     0,    36,    38,
      40,     0,    44,    41,     0,   217,    95,   216,   215,     2,
       4,   105,    11,     0,    28,    49,    51,    48,    50,     5,
       0,   101,   104,   106,   108,    47,   109,     0,     0,    64,
     214,   213,     0,    77,     0,    78,     0,     0,     0,     0,
     221,   222,   218,   219,     0,     0,     0,    52,     9,     0,
       0,    93,   105,    29,     0,     0,    94,     0,   103,     0,
       0,     0,    10,   107,     0,    65,    67,     0,    84,     0,
       0,    81,     0,     0,     0,     0,    79,     0,    80,    15,
     113,   220,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   128,     0,     0,
       0,     0,     0,   131,     0,     0,   200,   195,   196,     0,
       0,     0,    97,   132,    59,     0,   174,   197,     0,    47,
     192,     0,   105,     0,    56,    54,    53,     8,    12,     0,
       0,    24,   202,    14,     0,   192,     0,     7,    92,   102,
       0,   122,   112,     0,   110,     0,     0,    17,     0,     0,
       0,    90,    60,     0,     0,     0,     0,     0,    85,    87,
      71,    82,     0,    72,     0,     0,     0,     0,     0,   148,
       0,   149,     0,   131,     0,     0,     0,     0,   151,     0,
       0,   184,     0,     0,     0,   129,   202,     0,     0,   179,
     183,   182,   181,   180,   100,   177,   178,    99,     0,   126,
      58,   127,     0,    96,     0,     0,     0,     0,     0,     0,
     235,   236,     0,     0,     0,     0,     0,   130,     0,     0,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     237,   238,   233,   234,     0,     0,     0,     0,     0,     0,
       0,     0,   175,   176,     0,   199,     0,   188,     0,    55,
      23,    20,     0,   202,    26,    27,   202,    13,     6,     0,
       0,   117,   119,   111,   116,   114,     0,    22,    18,     0,
      16,     0,    62,    66,    68,    61,     0,    89,     0,    83,
       0,    69,    70,    75,     0,    76,     0,     0,   147,     0,
       0,     0,   152,     0,   150,     0,     0,     0,     0,   202,
     201,   202,   198,     0,    98,   125,   158,   173,     0,   166,
     167,   168,   159,   160,   161,   163,   162,   169,   170,   164,
     165,   172,   156,   157,   194,     0,   154,     0,   191,   190,
     153,    57,     0,    25,     0,     0,     0,   207,     0,   123,
       0,     0,     0,    91,    63,    86,    88,    73,    74,   146,
       0,     0,     0,     0,     0,   186,     0,     0,     0,   185,
       0,   193,     0,   189,    21,   210,   203,     0,     0,   208,
       0,   120,     0,   124,   118,   115,    19,     0,     0,     0,
       0,     0,     0,   134,   145,   135,     0,   211,   171,   155,
     206,   204,     0,   209,   121,     0,   144,     0,     0,     0,
       0,     0,     0,     0,   187,     0,     0,   136,   143,   142,
       0,   140,     0,     0,     0,   133,   212,   205,   141,   139,
     138,     0,   137
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -333,  -333,  -333,  -333,     7,  -333,   -77,  -253,    40,    46,
     244,   -59,  -333,   179,  -333,  -333,   232,  -158,  -333,  -333,
     -10,   -51,  -333,    23,  -333,  -333,  -333,   -78,   -12,   247,
     -52,   -22,  -333,    45,  -332,  -333,     4,  -100,  -333,   275,
      21,  -333,   125,  -128,  -333,     5,    -5,    -1,    90,  -333,
     265,  -333,  -333,  -333
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     1,    29,    30,   142,    32,   150,   151,    89,    34,
      66,    67,   143,   130,    35,    36,    84,    85,    37,    38,
      90,    91,   177,   178,   170,    39,   131,   132,    40,    41,
      42,    43,    44,   280,   281,    78,   133,   134,   345,   135,
     136,   137,   208,   354,   406,   138,    45,   155,   141,    62,
      63,   256,   257,   258
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      46,    50,    59,   166,   169,    51,   194,   146,    31,   292,
      50,    49,    50,   144,    51,   293,    51,   364,    77,   353,
      53,    74,    55,    46,   275,    83,    24,    69,   394,    70,
     220,    58,    46,   353,    79,    68,   353,   179,    80,   181,
      72,    33,   181,    25,    93,   214,    46,    86,    24,   273,
      27,    50,    50,   223,    82,    51,    51,   176,    27,   139,
     394,    96,    98,   140,    46,    25,    25,    60,   424,    27,
     147,    65,    27,    48,    46,    87,   157,    81,   320,    73,
     171,    75,   182,    92,   184,   185,    86,   187,    46,   425,
      99,    47,   308,    61,    27,    27,    56,   146,    76,    57,
     274,    50,    75,    50,   129,   140,    65,    51,    94,   152,
      52,    73,    65,   196,    47,    27,    28,   218,   174,   158,
     152,   152,   220,    47,   186,    50,   139,   268,    46,   140,
     140,   181,   201,   181,   181,    73,   181,    47,   293,   209,
     210,   211,   212,   213,   269,   215,   216,   298,   357,   271,
      75,    46,    27,    28,   272,    47,   206,   319,   188,   353,
     278,   189,   267,   129,   299,    47,   350,   324,    54,   111,
     191,   129,    86,   195,    25,    73,   304,   285,   306,    47,
     114,    95,   286,    97,   355,   116,   356,    50,   197,   279,
     393,   140,   192,   357,   100,    79,    65,   118,    73,    50,
     119,   120,    25,    51,   202,   121,   122,   369,   203,   318,
      27,    28,   124,   125,   205,   288,   351,    50,   204,    47,
     289,   140,   290,    27,    28,    27,    28,   291,   234,   235,
     236,    27,   381,   126,   127,   128,   411,   382,   172,   173,
     206,   412,   276,   355,   385,   356,   179,    27,    28,   295,
     296,    59,    73,   181,    83,   181,    50,   359,   360,    50,
      51,    50,   266,    51,   265,   140,   348,    46,  -214,   349,
     391,   392,    46,  -213,   403,    46,   404,   405,   388,   270,
      58,   284,   287,    82,   232,   233,   234,   235,   236,   309,
     363,   300,   323,   312,   370,    86,   321,    46,   416,   375,
     384,   378,    50,   395,   396,   410,   140,   423,   427,   259,
     222,   260,   152,   254,   255,   437,   156,   428,   429,   175,
     431,   365,   159,   435,   358,   315,   152,   101,     0,   152,
     438,   261,   439,   440,     0,     0,   262,   263,   264,     0,
       0,   442,     0,     0,   379,   154,   232,   233,   234,   235,
     236,     0,   161,     0,   163,     0,     0,     0,    47,     0,
       0,     0,     0,   276,     0,     0,   276,     0,     0,    50,
       0,    50,    50,   140,     0,   140,   140,   407,   190,     0,
       0,     0,     0,     0,     0,   199,     0,     0,    47,     0,
       0,   207,     0,    50,     0,   152,   379,   140,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   321,
       0,   321,    50,    50,     0,    50,   140,   140,    50,   140,
       0,     0,   140,     0,   436,    50,     0,    50,    50,   140,
       0,   140,   140,     0,     0,   282,    50,     0,     0,     0,
     140,     0,     0,     0,     0,     0,     0,     0,     0,   294,
       0,   297,   152,   111,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   114,     0,     0,     0,     0,   116,
     311,     0,   313,   279,   414,   207,     0,   316,   317,     0,
       0,   118,     0,     0,   119,   120,    25,     0,     0,   121,
     122,     0,     0,     0,     0,     0,   124,   125,     0,   326,
     327,   328,   329,   330,   331,     0,     0,   332,   333,   334,
     335,   336,     0,   337,   338,    27,     0,   126,   127,   128,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   339,
     340,   341,   342,   343,   346,   347,     0,   102,   103,     0,
       0,   104,   105,   106,     0,     0,     0,     0,     0,   107,
     108,   109,     0,     0,   282,   110,     0,     0,   111,     0,
       0,   112,     0,     0,     0,     0,     0,   113,     0,   114,
     115,     0,   111,     0,   116,   366,     0,     0,    64,   219,
       0,     0,     0,   114,     0,   372,   118,     0,   116,   119,
     120,    25,   160,     0,   121,   122,   111,   193,     0,     0,
     118,   124,   125,   119,   120,    25,     0,   114,   121,   122,
       0,     0,   116,     0,     0,   124,   125,     0,     0,     0,
      27,    28,   126,   127,   128,     0,     0,     0,     0,     0,
       0,   390,   121,   122,    27,   282,   126,   127,   128,   124,
     125,     0,     0,     0,     0,   397,   399,     0,   402,     0,
       0,     0,     0,     0,     0,   408,     0,   409,    27,     0,
     126,   127,   128,     0,     0,     0,     0,   282,     0,     0,
       0,     0,     0,     0,     0,   419,   421,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   102,
     103,     3,     4,   104,   105,   106,     5,   434,     6,     7,
       8,   107,   108,   109,     9,    10,    11,   110,    12,    13,
     111,    14,    15,   112,    16,    17,    18,    19,    20,   113,
      21,   114,   115,    22,     0,    23,   116,     0,     0,     0,
      64,   117,     0,     0,     0,     0,     0,     0,   118,     0,
       0,   119,   120,    25,     0,     0,   121,   122,     0,   123,
       0,     0,     0,   124,   125,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    27,    28,   126,   127,   128,   102,   103,     3,
       4,   104,   105,   106,     5,     0,     6,     7,     8,   107,
     108,   109,     9,    10,    11,   110,    12,    13,   111,    14,
      15,   112,    16,    17,    18,    19,    20,   113,    21,   114,
     115,    22,     0,    23,   116,     0,     0,     0,    64,   221,
       0,     0,     0,     0,     0,     0,   118,     0,     0,   119,
     120,    25,     0,     0,   121,   122,     0,   123,     0,     0,
       0,   124,   125,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   102,   103,     0,     0,   104,   105,   106,
      27,    28,   126,   127,   128,   107,   108,   109,     0,     0,
       0,   110,     0,     0,   111,     0,     0,   112,     0,     0,
       0,     0,     0,   113,     0,   114,   115,     0,     0,     0,
     116,     0,     0,     0,    64,   325,     0,     0,     0,     0,
       0,     0,   118,     0,     0,   119,   120,    25,     0,     0,
     121,   122,     0,   193,     0,     0,     0,   124,   125,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   102,
     103,     0,     0,   104,   105,   106,    27,    28,   126,   127,
     128,   107,   108,   109,     0,     0,     0,   110,     0,     0,
     111,     0,     0,   112,     0,     0,     0,     0,     0,   113,
       0,   114,   115,     0,     0,     0,   116,     0,     0,     0,
      64,   230,   231,   232,   233,   234,   235,   236,   118,     0,
       0,   119,   120,    25,     0,     0,   121,   122,     0,   193,
       0,     0,     0,   124,   125,     0,     0,     0,   250,   251,
     252,   253,   254,   255,     0,     0,     0,     0,     0,     0,
       0,     0,    27,    28,   126,   127,   128,     2,     0,     0,
       0,     0,     3,     4,     0,     0,     0,     5,     0,     6,
       7,     8,     0,     0,     0,     9,    10,    11,     0,    12,
      13,     0,    14,    15,     0,    16,    17,    18,    19,    20,
       0,    21,     0,     0,    22,     0,    23,    24,     3,     4,
       0,     0,     0,     5,     0,     6,     7,     8,     0,     0,
       0,     9,    10,    11,    25,    12,    13,   111,    14,    15,
      26,    16,    17,    18,    19,    20,     0,    21,   114,     0,
      22,     0,    23,   116,   228,   229,   230,   231,   232,   233,
     234,   235,   236,    27,    28,   118,     0,     0,   119,   120,
      25,     0,     0,   121,   122,     0,     0,     0,     0,     0,
     124,   125,     0,   250,   251,   252,   253,   254,   255,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    27,
      28,   126,   127,   128,     3,     4,     0,     0,     0,     5,
       0,     6,     7,     8,     0,     0,     0,     9,    10,    11,
       0,    12,    13,     0,    14,    15,     0,    16,    17,    18,
      19,    20,     0,    21,     0,     0,    22,     0,    23,    24,
       3,     4,     0,     0,     0,     5,     0,     6,     7,     8,
       0,     0,     0,     9,    10,    11,    25,    12,    13,     0,
      14,    15,    71,    16,    17,    18,    19,    20,     0,    21,
       0,     0,    22,     0,    23,    24,     0,     0,     0,     0,
       0,     0,     3,     4,   176,    27,    28,     5,     0,     6,
       7,     8,    25,     0,     0,     9,    10,    11,     0,    12,
      13,     0,    14,    15,     0,    16,    17,    18,    19,    20,
       0,    21,     0,     0,    22,     0,    23,    24,     3,     4,
       0,    27,    28,     5,     0,     6,     7,     8,     0,     0,
       0,     9,    10,    11,    25,    12,    13,     0,    14,    15,
     217,    16,    17,    18,    19,    20,     0,    21,     0,     0,
      22,     0,    23,    24,     0,     0,     0,     0,     0,     0,
       3,     4,     0,    27,    28,     5,     0,     6,     7,     8,
      25,     0,     0,     9,    10,    11,     0,    12,    13,     0,
      14,    15,     0,    16,    17,    18,    19,    20,     0,    21,
       0,     0,    22,     0,    23,     0,   167,     3,     4,    27,
      28,     0,     5,     0,     6,     7,     8,     0,     0,     0,
       9,    10,    11,     0,    12,    13,     0,    14,    15,   168,
      16,    17,    18,    19,    20,     0,    21,     0,     0,    22,
       0,    23,   273,     0,     0,     0,     0,     0,     3,     4,
       0,    27,    28,     5,     0,     6,     7,     8,     0,    25,
       0,     9,    10,    11,     0,    12,    13,     0,    14,    15,
       0,    16,    17,    18,    19,    20,     0,    21,     0,     0,
      22,     0,    23,     0,     0,     0,     0,    64,    27,    28,
       3,     4,     0,     0,     0,     5,     0,     6,     7,     8,
       0,     0,     0,     9,    10,    11,   145,    12,    13,     0,
      14,    15,     0,    16,    17,    18,    19,    20,     0,    21,
       0,     0,    22,     0,    23,     0,   148,     3,     4,     0,
      28,     0,     5,     0,     6,     7,     8,     0,     0,     0,
       9,    10,    11,     0,    12,    13,     0,    14,    15,   149,
      16,    17,    18,    19,    20,     0,    21,     0,     0,    22,
       0,    23,     0,   164,     0,     0,     0,     0,     0,     0,
       3,     4,    28,     0,     0,     5,     0,     6,     7,     8,
       0,     0,     0,     9,    10,    11,   165,    12,    13,     0,
      14,    15,     0,    16,    17,    18,    19,    20,     0,    21,
       0,     0,    22,     0,    23,     0,     3,     4,     0,    28,
     180,     5,     0,     6,     7,     8,     0,     0,     0,     9,
      10,    11,     0,    12,    13,     0,    14,    15,    88,    16,
      17,    18,    19,    20,     0,    21,     3,     4,    22,     0,
      23,     5,     0,     6,     7,     8,   183,     0,     0,     9,
      10,    11,    28,    12,    13,     0,    14,    15,     0,    16,
      17,    18,    19,    20,    88,    21,     3,     4,    22,     0,
      23,     5,     0,     6,     7,     8,   301,     0,     0,     9,
      10,    11,     0,    12,    13,     0,    14,    15,    28,    16,
      17,    18,    19,    20,    88,    21,     3,     4,    22,     0,
      23,     5,     0,     6,     7,     8,   302,     0,     0,     9,
      10,    11,     0,    12,    13,     0,    14,    15,    28,    16,
      17,    18,    19,    20,    88,    21,     3,     4,    22,     0,
      23,     5,     0,     6,     7,     8,   303,     0,     0,     9,
      10,    11,     0,    12,    13,     0,    14,    15,    28,    16,
      17,    18,    19,    20,    88,    21,     0,     0,    22,     0,
      23,     0,     3,     4,     0,     0,   305,     5,     0,     6,
       7,     8,     0,     0,     0,     9,    10,    11,    28,    12,
      13,     0,    14,    15,    88,    16,    17,    18,    19,    20,
       0,    21,     0,     0,    22,     0,    23,   319,     3,     4,
       0,     0,     0,     5,     0,     6,     7,     8,    28,     0,
       0,     9,    10,    11,    25,    12,    13,     0,    14,    15,
       0,    16,    17,    18,    19,    20,     0,    21,     3,     4,
      22,     0,    23,     5,     0,     6,     7,     8,   367,     0,
       0,     9,    10,    11,    28,    12,    13,     0,    14,    15,
       0,    16,    17,    18,    19,    20,    88,    21,     3,     4,
      22,     0,    23,     5,     0,     6,     7,     8,   368,     0,
       0,     9,    10,    11,     0,    12,    13,     0,    14,    15,
      28,    16,    17,    18,    19,    20,    88,    21,     0,     0,
      22,     0,    23,     0,   386,     0,     0,     0,     3,     4,
       0,     0,     0,     5,     0,     6,     7,     8,     0,     0,
      28,     9,    10,    11,     0,    12,    13,   387,    14,    15,
       0,    16,    17,    18,    19,    20,     0,    21,     0,     0,
      22,     0,    23,     0,     3,     4,     0,    64,     0,     5,
      28,     6,     7,     8,     0,     0,     0,     9,    10,    11,
       0,    12,    13,     0,    14,    15,     0,    16,    17,    18,
      19,    20,     0,    21,     3,     4,    22,     0,    23,     5,
       0,     6,     7,     8,     0,     0,     0,     9,    10,    11,
      28,    12,    13,     0,    14,    15,     0,    16,    17,    18,
      19,    20,    88,    21,     0,     0,    22,     0,    23,     0,
       0,     0,     0,     0,     3,     4,     0,     0,     0,     5,
       0,     6,     7,     8,     0,     0,    28,     9,    10,    11,
       0,    12,    13,   352,    14,    15,     0,    16,    17,    18,
      19,    20,     0,    21,     0,     0,    22,     0,    23,     0,
       0,     0,     0,     0,     3,     4,    28,     0,     0,     5,
       0,     6,     7,     8,     0,     0,     0,     9,    10,    11,
       0,    12,    13,   361,    14,    15,     0,    16,    17,    18,
      19,    20,     0,    21,     0,     0,    22,     0,    23,     0,
       0,     0,     0,     0,     3,     4,    28,     0,     0,     5,
       0,     6,     7,     8,     0,     0,     0,     9,    10,    11,
       0,    12,    13,   362,    14,    15,     0,    16,    17,    18,
      19,    20,     0,    21,     0,     0,    22,     0,    23,     0,
       0,     0,     0,     0,     3,     4,    28,     0,     0,     5,
       0,     6,     7,     8,     0,     0,     0,     9,    10,    11,
       0,    12,    13,   426,    14,    15,   111,    16,    17,    18,
      19,    20,     0,    21,     0,     0,    22,   114,    23,     0,
       0,     0,   116,     0,     0,   153,    28,     0,     0,     0,
       0,     0,     0,     0,   118,     0,     0,   119,   120,    25,
       0,     0,   121,   122,     0,   111,     0,     0,     0,   124,
     125,     0,     0,     0,     0,     0,   114,     0,     0,     0,
       0,   116,     0,     0,   162,     0,    28,     0,    27,   111,
     126,   127,   128,   118,     0,     0,   119,   120,    25,     0,
     114,   121,   122,     0,     0,   116,     0,     0,   124,   125,
     230,   231,   232,   233,   234,   235,   236,   118,     0,     0,
     119,   120,    25,     0,     0,   121,   122,    27,   198,   126,
     127,   128,   124,   125,     0,     0,   111,     0,     0,   252,
     253,   254,   255,     0,     0,     0,     0,   114,     0,     0,
     111,    27,   116,   126,   127,   128,   279,     0,     0,     0,
       0,   114,     0,     0,   118,     0,   116,   119,   120,    25,
       0,     0,   121,   122,     0,     0,     0,     0,   118,   124,
     125,   119,   120,    25,     0,     0,   121,   122,     0,   310,
       0,     0,   111,   124,   125,     0,     0,     0,    27,     0,
     126,   127,   128,   114,     0,     0,   111,     0,   116,   344,
       0,     0,    27,     0,   126,   127,   128,   114,     0,     0,
     118,     0,   116,   119,   120,    25,     0,     0,   121,   122,
       0,     0,     0,     0,   118,   124,   125,   119,   120,    25,
       0,     0,   121,   122,     0,   371,     0,     0,   111,   124,
     125,     0,     0,     0,    27,     0,   126,   127,   128,   114,
       0,     0,     0,     0,   116,     0,     0,   389,    27,     0,
     126,   127,   128,     0,     0,     0,   118,     0,     0,   119,
     120,    25,     0,     0,   121,   122,     0,   111,     0,     0,
       0,   124,   125,     0,     0,     0,     0,     0,   114,     0,
       0,     0,     0,   116,   398,     0,     0,     0,     0,     0,
      27,   111,   126,   127,   128,   118,     0,     0,   119,   120,
      25,     0,   114,   121,   122,     0,     0,   116,     0,     0,
     124,   125,     0,     0,     0,     0,     0,     0,     0,   118,
       0,     0,   119,   120,    25,     0,     0,   121,   122,    27,
     401,   126,   127,   128,   124,   125,     0,     0,     0,     0,
       0,     0,     0,   111,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    27,   114,   126,   127,   128,     0,   116,
     418,     0,     0,     0,     0,     0,     0,   111,     0,     0,
       0,   118,     0,     0,   119,   120,    25,     0,   114,   121,
     122,     0,     0,   116,   420,     0,   124,   125,     0,     0,
       0,     0,     0,     0,     0,   118,     0,     0,   119,   120,
      25,     0,     0,   121,   122,    27,   111,   126,   127,   128,
     124,   125,     0,     0,     0,     0,     0,   114,     0,     0,
       0,     0,   116,   433,     0,     0,     0,     0,     0,    27,
     111,   126,   127,   128,   118,     0,     0,   119,   120,    25,
       0,   114,   121,   122,     0,     0,   116,     0,     0,   124,
     125,     0,     0,     0,     0,     0,     0,     0,   118,     0,
       0,   119,   120,    25,     0,     0,   121,   122,    27,   111,
     126,   127,   128,   124,   125,     0,     0,     0,     0,     0,
     114,     0,     0,     0,     0,   200,     0,     0,     0,     0,
       0,     0,    27,     0,   126,   127,   128,   118,     0,     0,
     119,   120,    25,     0,     0,   121,   122,     0,     0,     0,
       0,     0,   124,   125,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    27,   322,   126,   127,   128,     0,   224,   225,   226,
       0,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,     0,     0,     0,     0,     0,   238,   239,     0,     0,
       0,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   374,     0,     0,
       0,     0,   224,   225,   226,     0,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,     0,     0,     0,     0,
       0,   238,   239,     0,     0,     0,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   376,     0,     0,     0,     0,   224,   225,   226,
       0,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,     0,     0,     0,     0,     0,   238,   239,     0,     0,
       0,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   377,     0,     0,
       0,     0,   224,   225,   226,     0,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,     0,     0,     0,     0,
       0,   238,   239,     0,     0,     0,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   415,     0,     0,     0,     0,   224,   225,   226,
       0,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,     0,     0,     0,     0,     0,   238,   239,     0,     0,
       0,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   417,     0,     0,
       0,     0,   224,   225,   226,     0,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,     0,     0,     0,     0,
       0,   238,   239,     0,     0,     0,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   430,     0,     0,     0,     0,   224,   225,   226,
       0,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,     0,     0,     0,     0,     0,   238,   239,     0,     0,
       0,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   432,     0,     0,
       0,     0,   224,   225,   226,     0,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,     0,     0,     0,     0,
       0,   238,   239,     0,     0,     0,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   441,     0,     0,     0,     0,   224,   225,   226,
       0,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,     0,     0,     0,     0,     0,   238,   239,     0,     0,
       0,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   277,     0,     0,
     224,   225,   226,     0,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,     0,     0,     0,     0,     0,   238,
     239,     0,     0,     0,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     283,     0,     0,   224,   225,   226,     0,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,     0,     0,     0,
       0,     0,   238,   239,     0,     0,     0,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   383,     0,     0,   224,   225,   226,     0,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   236,
       0,     0,     0,     0,     0,   238,   239,     0,     0,     0,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   413,     0,     0,   224,
     225,   226,     0,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,     0,     0,     0,     0,     0,   238,   239,
       0,     0,     0,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   224,
     225,   226,     0,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,     0,     0,     0,   237,     0,   238,   239,
       0,     0,     0,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   224,
     225,   226,   307,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,     0,     0,     0,     0,     0,   238,   239,
       0,     0,     0,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   224,
     225,   226,     0,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,     0,     0,     0,   314,     0,   238,   239,
       0,     0,     0,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   224,
     225,   226,     0,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,     0,     0,     0,   373,     0,   238,   239,
       0,     0,     0,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   224,
     225,   226,   380,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,     0,     0,     0,     0,     0,   238,   239,
       0,     0,     0,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   224,
     225,   226,     0,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,     0,     0,     0,   400,     0,   238,   239,
       0,     0,     0,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   224,
     225,   226,     0,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,     0,     0,     0,   422,     0,   238,   239,
       0,     0,     0,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   225,
     226,     0,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,     0,     0,     0,     0,     0,   238,   239,     0,
       0,     0,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   226,     0,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   236,
       0,     0,     0,     0,     0,   238,   239,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     250,   251,   252,   253,   254,   255,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,     0,     0,     0,     0,
       0,   238,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,     0,     0,     0,     0,   250,   251,   252,   253,
     254,   255,   229,   230,   231,   232,   233,   234,   235,   236,
       0,     0,   250,   251,   252,   253,   254,   255,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     250,   251,   252,   253,   254,   255
};

static const yytype_int16 yycheck[] =
{
       1,     6,    24,    80,    81,     6,   106,    66,     1,    45,
      15,     6,    17,    65,    15,   173,    17,    45,    47,   272,
      15,    33,    17,    24,   152,    47,    40,    40,   360,    42,
     130,    24,    33,   286,    42,    31,   289,    89,    40,    90,
      33,     1,    93,    57,    54,   123,    47,    48,    40,    40,
      86,    56,    57,   131,    47,    56,    57,    49,    86,    64,
     392,    56,    57,    64,    65,    57,    57,     6,    41,    86,
      66,    31,    86,    44,    75,    44,    72,    40,   206,    33,
      81,    46,    92,    44,    94,    95,    87,    97,    89,    62,
      41,     1,   192,    32,    86,    86,    26,   156,    63,    29,
     152,   106,    46,   108,    64,   106,    66,   108,    44,    69,
      44,    65,    72,   108,    24,    86,    87,   129,    47,    63,
      80,    81,   222,    33,    44,   130,   131,    46,   129,   130,
     131,   182,   111,   184,   185,    89,   187,    47,   296,   118,
     119,   120,   121,   122,    63,   124,   125,    46,   276,    41,
      46,   152,    86,    87,    46,    65,   116,    40,    44,   412,
     156,    63,   141,   123,    63,    75,   266,    63,    44,    24,
      63,   131,   173,    40,    57,   129,   186,    41,   188,    89,
      35,    44,    46,    44,    40,    40,    42,   192,    40,    44,
      45,   192,    49,   321,    41,    42,   156,    52,   152,   204,
      55,    56,    57,   204,    40,    60,    61,   307,    40,   204,
      86,    87,    67,    68,    63,    41,   268,   222,    40,   129,
      46,   222,    41,    86,    87,    86,    87,    46,    57,    58,
      59,    86,    41,    88,    89,    90,    41,    46,    45,    46,
     200,    46,   152,    40,    41,    42,   298,    86,    87,    45,
      46,   273,   206,   304,   276,   306,   261,    45,    46,   264,
     261,   266,    49,   264,    88,   266,   261,   268,    49,   264,
      45,    46,   273,    49,   374,   276,   376,   377,   355,    41,
     273,    41,    41,   276,    55,    56,    57,    58,    59,    33,
     291,    49,    41,    63,    40,   296,   206,   298,   398,    41,
      41,    46,   307,    41,    41,    41,   307,    11,    63,    40,
     131,    42,   272,    84,    85,    41,    72,   417,   418,    87,
     420,   298,    75,   423,   279,   200,   286,    62,    -1,   289,
     430,    62,   432,   433,    -1,    -1,    67,    68,    69,    -1,
      -1,   441,    -1,    -1,   323,    70,    55,    56,    57,    58,
      59,    -1,    77,    -1,    79,    -1,    -1,    -1,   268,    -1,
      -1,    -1,    -1,   273,    -1,    -1,   276,    -1,    -1,   374,
      -1,   376,   377,   374,    -1,   376,   377,   378,   103,    -1,
      -1,    -1,    -1,    -1,    -1,   110,    -1,    -1,   298,    -1,
      -1,   116,    -1,   398,    -1,   355,   375,   398,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   319,
      -1,   321,   417,   418,    -1,   420,   417,   418,   423,   420,
      -1,    -1,   423,    -1,   425,   430,    -1,   432,   433,   430,
      -1,   432,   433,    -1,    -1,   160,   441,    -1,    -1,    -1,
     441,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   174,
      -1,   176,   412,    24,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    35,    -1,    -1,    -1,    -1,    40,
     195,    -1,   197,    44,    45,   200,    -1,   202,   203,    -1,
      -1,    52,    -1,    -1,    55,    56,    57,    -1,    -1,    60,
      61,    -1,    -1,    -1,    -1,    -1,    67,    68,    -1,   224,
     225,   226,   227,   228,   229,    -1,    -1,   232,   233,   234,
     235,   236,    -1,   238,   239,    86,    -1,    88,    89,    90,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   254,
     255,   256,   257,   258,   259,   260,    -1,     3,     4,    -1,
      -1,     7,     8,     9,    -1,    -1,    -1,    -1,    -1,    15,
      16,    17,    -1,    -1,   279,    21,    -1,    -1,    24,    -1,
      -1,    27,    -1,    -1,    -1,    -1,    -1,    33,    -1,    35,
      36,    -1,    24,    -1,    40,   300,    -1,    -1,    44,    45,
      -1,    -1,    -1,    35,    -1,   310,    52,    -1,    40,    55,
      56,    57,    44,    -1,    60,    61,    24,    63,    -1,    -1,
      52,    67,    68,    55,    56,    57,    -1,    35,    60,    61,
      -1,    -1,    40,    -1,    -1,    67,    68,    -1,    -1,    -1,
      86,    87,    88,    89,    90,    -1,    -1,    -1,    -1,    -1,
      -1,   356,    60,    61,    86,   360,    88,    89,    90,    67,
      68,    -1,    -1,    -1,    -1,   370,   371,    -1,   373,    -1,
      -1,    -1,    -1,    -1,    -1,   380,    -1,   382,    86,    -1,
      88,    89,    90,    -1,    -1,    -1,    -1,   392,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   400,   401,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,     7,     8,     9,    10,   422,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    -1,    39,    40,    -1,    -1,    -1,
      44,    45,    -1,    -1,    -1,    -1,    -1,    -1,    52,    -1,
      -1,    55,    56,    57,    -1,    -1,    60,    61,    -1,    63,
      -1,    -1,    -1,    67,    68,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    86,    87,    88,    89,    90,     3,     4,     5,
       6,     7,     8,     9,    10,    -1,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    -1,    39,    40,    -1,    -1,    -1,    44,    45,
      -1,    -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,    55,
      56,    57,    -1,    -1,    60,    61,    -1,    63,    -1,    -1,
      -1,    67,    68,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,    -1,    -1,     7,     8,     9,
      86,    87,    88,    89,    90,    15,    16,    17,    -1,    -1,
      -1,    21,    -1,    -1,    24,    -1,    -1,    27,    -1,    -1,
      -1,    -1,    -1,    33,    -1,    35,    36,    -1,    -1,    -1,
      40,    -1,    -1,    -1,    44,    45,    -1,    -1,    -1,    -1,
      -1,    -1,    52,    -1,    -1,    55,    56,    57,    -1,    -1,
      60,    61,    -1,    63,    -1,    -1,    -1,    67,    68,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,    -1,    -1,     7,     8,     9,    86,    87,    88,    89,
      90,    15,    16,    17,    -1,    -1,    -1,    21,    -1,    -1,
      24,    -1,    -1,    27,    -1,    -1,    -1,    -1,    -1,    33,
      -1,    35,    36,    -1,    -1,    -1,    40,    -1,    -1,    -1,
      44,    53,    54,    55,    56,    57,    58,    59,    52,    -1,
      -1,    55,    56,    57,    -1,    -1,    60,    61,    -1,    63,
      -1,    -1,    -1,    67,    68,    -1,    -1,    -1,    80,    81,
      82,    83,    84,    85,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    86,    87,    88,    89,    90,     0,    -1,    -1,
      -1,    -1,     5,     6,    -1,    -1,    -1,    10,    -1,    12,
      13,    14,    -1,    -1,    -1,    18,    19,    20,    -1,    22,
      23,    -1,    25,    26,    -1,    28,    29,    30,    31,    32,
      -1,    34,    -1,    -1,    37,    -1,    39,    40,     5,     6,
      -1,    -1,    -1,    10,    -1,    12,    13,    14,    -1,    -1,
      -1,    18,    19,    20,    57,    22,    23,    24,    25,    26,
      63,    28,    29,    30,    31,    32,    -1,    34,    35,    -1,
      37,    -1,    39,    40,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    86,    87,    52,    -1,    -1,    55,    56,
      57,    -1,    -1,    60,    61,    -1,    -1,    -1,    -1,    -1,
      67,    68,    -1,    80,    81,    82,    83,    84,    85,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,
      87,    88,    89,    90,     5,     6,    -1,    -1,    -1,    10,
      -1,    12,    13,    14,    -1,    -1,    -1,    18,    19,    20,
      -1,    22,    23,    -1,    25,    26,    -1,    28,    29,    30,
      31,    32,    -1,    34,    -1,    -1,    37,    -1,    39,    40,
       5,     6,    -1,    -1,    -1,    10,    -1,    12,    13,    14,
      -1,    -1,    -1,    18,    19,    20,    57,    22,    23,    -1,
      25,    26,    63,    28,    29,    30,    31,    32,    -1,    34,
      -1,    -1,    37,    -1,    39,    40,    -1,    -1,    -1,    -1,
      -1,    -1,     5,     6,    49,    86,    87,    10,    -1,    12,
      13,    14,    57,    -1,    -1,    18,    19,    20,    -1,    22,
      23,    -1,    25,    26,    -1,    28,    29,    30,    31,    32,
      -1,    34,    -1,    -1,    37,    -1,    39,    40,     5,     6,
      -1,    86,    87,    10,    -1,    12,    13,    14,    -1,    -1,
      -1,    18,    19,    20,    57,    22,    23,    -1,    25,    26,
      63,    28,    29,    30,    31,    32,    -1,    34,    -1,    -1,
      37,    -1,    39,    40,    -1,    -1,    -1,    -1,    -1,    -1,
       5,     6,    -1,    86,    87,    10,    -1,    12,    13,    14,
      57,    -1,    -1,    18,    19,    20,    -1,    22,    23,    -1,
      25,    26,    -1,    28,    29,    30,    31,    32,    -1,    34,
      -1,    -1,    37,    -1,    39,    -1,    41,     5,     6,    86,
      87,    -1,    10,    -1,    12,    13,    14,    -1,    -1,    -1,
      18,    19,    20,    -1,    22,    23,    -1,    25,    26,    64,
      28,    29,    30,    31,    32,    -1,    34,    -1,    -1,    37,
      -1,    39,    40,    -1,    -1,    -1,    -1,    -1,     5,     6,
      -1,    86,    87,    10,    -1,    12,    13,    14,    -1,    57,
      -1,    18,    19,    20,    -1,    22,    23,    -1,    25,    26,
      -1,    28,    29,    30,    31,    32,    -1,    34,    -1,    -1,
      37,    -1,    39,    -1,    -1,    -1,    -1,    44,    86,    87,
       5,     6,    -1,    -1,    -1,    10,    -1,    12,    13,    14,
      -1,    -1,    -1,    18,    19,    20,    63,    22,    23,    -1,
      25,    26,    -1,    28,    29,    30,    31,    32,    -1,    34,
      -1,    -1,    37,    -1,    39,    -1,    41,     5,     6,    -1,
      87,    -1,    10,    -1,    12,    13,    14,    -1,    -1,    -1,
      18,    19,    20,    -1,    22,    23,    -1,    25,    26,    64,
      28,    29,    30,    31,    32,    -1,    34,    -1,    -1,    37,
      -1,    39,    -1,    41,    -1,    -1,    -1,    -1,    -1,    -1,
       5,     6,    87,    -1,    -1,    10,    -1,    12,    13,    14,
      -1,    -1,    -1,    18,    19,    20,    64,    22,    23,    -1,
      25,    26,    -1,    28,    29,    30,    31,    32,    -1,    34,
      -1,    -1,    37,    -1,    39,    -1,     5,     6,    -1,    87,
      45,    10,    -1,    12,    13,    14,    -1,    -1,    -1,    18,
      19,    20,    -1,    22,    23,    -1,    25,    26,    63,    28,
      29,    30,    31,    32,    -1,    34,     5,     6,    37,    -1,
      39,    10,    -1,    12,    13,    14,    45,    -1,    -1,    18,
      19,    20,    87,    22,    23,    -1,    25,    26,    -1,    28,
      29,    30,    31,    32,    63,    34,     5,     6,    37,    -1,
      39,    10,    -1,    12,    13,    14,    45,    -1,    -1,    18,
      19,    20,    -1,    22,    23,    -1,    25,    26,    87,    28,
      29,    30,    31,    32,    63,    34,     5,     6,    37,    -1,
      39,    10,    -1,    12,    13,    14,    45,    -1,    -1,    18,
      19,    20,    -1,    22,    23,    -1,    25,    26,    87,    28,
      29,    30,    31,    32,    63,    34,     5,     6,    37,    -1,
      39,    10,    -1,    12,    13,    14,    45,    -1,    -1,    18,
      19,    20,    -1,    22,    23,    -1,    25,    26,    87,    28,
      29,    30,    31,    32,    63,    34,    -1,    -1,    37,    -1,
      39,    -1,     5,     6,    -1,    -1,    45,    10,    -1,    12,
      13,    14,    -1,    -1,    -1,    18,    19,    20,    87,    22,
      23,    -1,    25,    26,    63,    28,    29,    30,    31,    32,
      -1,    34,    -1,    -1,    37,    -1,    39,    40,     5,     6,
      -1,    -1,    -1,    10,    -1,    12,    13,    14,    87,    -1,
      -1,    18,    19,    20,    57,    22,    23,    -1,    25,    26,
      -1,    28,    29,    30,    31,    32,    -1,    34,     5,     6,
      37,    -1,    39,    10,    -1,    12,    13,    14,    45,    -1,
      -1,    18,    19,    20,    87,    22,    23,    -1,    25,    26,
      -1,    28,    29,    30,    31,    32,    63,    34,     5,     6,
      37,    -1,    39,    10,    -1,    12,    13,    14,    45,    -1,
      -1,    18,    19,    20,    -1,    22,    23,    -1,    25,    26,
      87,    28,    29,    30,    31,    32,    63,    34,    -1,    -1,
      37,    -1,    39,    -1,    41,    -1,    -1,    -1,     5,     6,
      -1,    -1,    -1,    10,    -1,    12,    13,    14,    -1,    -1,
      87,    18,    19,    20,    -1,    22,    23,    64,    25,    26,
      -1,    28,    29,    30,    31,    32,    -1,    34,    -1,    -1,
      37,    -1,    39,    -1,     5,     6,    -1,    44,    -1,    10,
      87,    12,    13,    14,    -1,    -1,    -1,    18,    19,    20,
      -1,    22,    23,    -1,    25,    26,    -1,    28,    29,    30,
      31,    32,    -1,    34,     5,     6,    37,    -1,    39,    10,
      -1,    12,    13,    14,    -1,    -1,    -1,    18,    19,    20,
      87,    22,    23,    -1,    25,    26,    -1,    28,    29,    30,
      31,    32,    63,    34,    -1,    -1,    37,    -1,    39,    -1,
      -1,    -1,    -1,    -1,     5,     6,    -1,    -1,    -1,    10,
      -1,    12,    13,    14,    -1,    -1,    87,    18,    19,    20,
      -1,    22,    23,    64,    25,    26,    -1,    28,    29,    30,
      31,    32,    -1,    34,    -1,    -1,    37,    -1,    39,    -1,
      -1,    -1,    -1,    -1,     5,     6,    87,    -1,    -1,    10,
      -1,    12,    13,    14,    -1,    -1,    -1,    18,    19,    20,
      -1,    22,    23,    64,    25,    26,    -1,    28,    29,    30,
      31,    32,    -1,    34,    -1,    -1,    37,    -1,    39,    -1,
      -1,    -1,    -1,    -1,     5,     6,    87,    -1,    -1,    10,
      -1,    12,    13,    14,    -1,    -1,    -1,    18,    19,    20,
      -1,    22,    23,    64,    25,    26,    -1,    28,    29,    30,
      31,    32,    -1,    34,    -1,    -1,    37,    -1,    39,    -1,
      -1,    -1,    -1,    -1,     5,     6,    87,    -1,    -1,    10,
      -1,    12,    13,    14,    -1,    -1,    -1,    18,    19,    20,
      -1,    22,    23,    64,    25,    26,    24,    28,    29,    30,
      31,    32,    -1,    34,    -1,    -1,    37,    35,    39,    -1,
      -1,    -1,    40,    -1,    -1,    43,    87,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    52,    -1,    -1,    55,    56,    57,
      -1,    -1,    60,    61,    -1,    24,    -1,    -1,    -1,    67,
      68,    -1,    -1,    -1,    -1,    -1,    35,    -1,    -1,    -1,
      -1,    40,    -1,    -1,    43,    -1,    87,    -1,    86,    24,
      88,    89,    90,    52,    -1,    -1,    55,    56,    57,    -1,
      35,    60,    61,    -1,    -1,    40,    -1,    -1,    67,    68,
      53,    54,    55,    56,    57,    58,    59,    52,    -1,    -1,
      55,    56,    57,    -1,    -1,    60,    61,    86,    63,    88,
      89,    90,    67,    68,    -1,    -1,    24,    -1,    -1,    82,
      83,    84,    85,    -1,    -1,    -1,    -1,    35,    -1,    -1,
      24,    86,    40,    88,    89,    90,    44,    -1,    -1,    -1,
      -1,    35,    -1,    -1,    52,    -1,    40,    55,    56,    57,
      -1,    -1,    60,    61,    -1,    -1,    -1,    -1,    52,    67,
      68,    55,    56,    57,    -1,    -1,    60,    61,    -1,    63,
      -1,    -1,    24,    67,    68,    -1,    -1,    -1,    86,    -1,
      88,    89,    90,    35,    -1,    -1,    24,    -1,    40,    41,
      -1,    -1,    86,    -1,    88,    89,    90,    35,    -1,    -1,
      52,    -1,    40,    55,    56,    57,    -1,    -1,    60,    61,
      -1,    -1,    -1,    -1,    52,    67,    68,    55,    56,    57,
      -1,    -1,    60,    61,    -1,    63,    -1,    -1,    24,    67,
      68,    -1,    -1,    -1,    86,    -1,    88,    89,    90,    35,
      -1,    -1,    -1,    -1,    40,    -1,    -1,    43,    86,    -1,
      88,    89,    90,    -1,    -1,    -1,    52,    -1,    -1,    55,
      56,    57,    -1,    -1,    60,    61,    -1,    24,    -1,    -1,
      -1,    67,    68,    -1,    -1,    -1,    -1,    -1,    35,    -1,
      -1,    -1,    -1,    40,    41,    -1,    -1,    -1,    -1,    -1,
      86,    24,    88,    89,    90,    52,    -1,    -1,    55,    56,
      57,    -1,    35,    60,    61,    -1,    -1,    40,    -1,    -1,
      67,    68,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,
      -1,    -1,    55,    56,    57,    -1,    -1,    60,    61,    86,
      63,    88,    89,    90,    67,    68,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    24,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    86,    35,    88,    89,    90,    -1,    40,
      41,    -1,    -1,    -1,    -1,    -1,    -1,    24,    -1,    -1,
      -1,    52,    -1,    -1,    55,    56,    57,    -1,    35,    60,
      61,    -1,    -1,    40,    41,    -1,    67,    68,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,    55,    56,
      57,    -1,    -1,    60,    61,    86,    24,    88,    89,    90,
      67,    68,    -1,    -1,    -1,    -1,    -1,    35,    -1,    -1,
      -1,    -1,    40,    41,    -1,    -1,    -1,    -1,    -1,    86,
      24,    88,    89,    90,    52,    -1,    -1,    55,    56,    57,
      -1,    35,    60,    61,    -1,    -1,    40,    -1,    -1,    67,
      68,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,    -1,
      -1,    55,    56,    57,    -1,    -1,    60,    61,    86,    24,
      88,    89,    90,    67,    68,    -1,    -1,    -1,    -1,    -1,
      35,    -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,    -1,
      -1,    -1,    86,    -1,    88,    89,    90,    52,    -1,    -1,
      55,    56,    57,    -1,    -1,    60,    61,    -1,    -1,    -1,
      -1,    -1,    67,    68,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    86,    41,    88,    89,    90,    -1,    46,    47,    48,
      -1,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    -1,    -1,    -1,    -1,    -1,    65,    66,    -1,    -1,
      -1,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    41,    -1,    -1,
      -1,    -1,    46,    47,    48,    -1,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    -1,    -1,    -1,    -1,
      -1,    65,    66,    -1,    -1,    -1,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    41,    -1,    -1,    -1,    -1,    46,    47,    48,
      -1,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    -1,    -1,    -1,    -1,    -1,    65,    66,    -1,    -1,
      -1,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    41,    -1,    -1,
      -1,    -1,    46,    47,    48,    -1,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    -1,    -1,    -1,    -1,
      -1,    65,    66,    -1,    -1,    -1,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    41,    -1,    -1,    -1,    -1,    46,    47,    48,
      -1,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    -1,    -1,    -1,    -1,    -1,    65,    66,    -1,    -1,
      -1,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    41,    -1,    -1,
      -1,    -1,    46,    47,    48,    -1,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    -1,    -1,    -1,    -1,
      -1,    65,    66,    -1,    -1,    -1,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    41,    -1,    -1,    -1,    -1,    46,    47,    48,
      -1,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    -1,    -1,    -1,    -1,    -1,    65,    66,    -1,    -1,
      -1,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    41,    -1,    -1,
      -1,    -1,    46,    47,    48,    -1,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    -1,    -1,    -1,    -1,
      -1,    65,    66,    -1,    -1,    -1,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    41,    -1,    -1,    -1,    -1,    46,    47,    48,
      -1,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    -1,    -1,    -1,    -1,    -1,    65,    66,    -1,    -1,
      -1,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    43,    -1,    -1,
      46,    47,    48,    -1,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    -1,    -1,    -1,    -1,    -1,    65,
      66,    -1,    -1,    -1,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      43,    -1,    -1,    46,    47,    48,    -1,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    -1,    -1,    -1,
      -1,    -1,    65,    66,    -1,    -1,    -1,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    43,    -1,    -1,    46,    47,    48,    -1,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      -1,    -1,    -1,    -1,    -1,    65,    66,    -1,    -1,    -1,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    43,    -1,    -1,    46,
      47,    48,    -1,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    -1,    -1,    -1,    -1,    -1,    65,    66,
      -1,    -1,    -1,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    46,
      47,    48,    -1,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    -1,    -1,    -1,    63,    -1,    65,    66,
      -1,    -1,    -1,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    -1,    -1,    -1,    -1,    -1,    65,    66,
      -1,    -1,    -1,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    46,
      47,    48,    -1,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    -1,    -1,    -1,    63,    -1,    65,    66,
      -1,    -1,    -1,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    46,
      47,    48,    -1,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    -1,    -1,    -1,    63,    -1,    65,    66,
      -1,    -1,    -1,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    -1,    -1,    -1,    -1,    -1,    65,    66,
      -1,    -1,    -1,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    46,
      47,    48,    -1,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    -1,    -1,    -1,    63,    -1,    65,    66,
      -1,    -1,    -1,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    46,
      47,    48,    -1,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    -1,    -1,    -1,    63,    -1,    65,    66,
      -1,    -1,    -1,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    47,
      48,    -1,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    -1,    -1,    -1,    -1,    -1,    65,    66,    -1,
      -1,    -1,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    48,    -1,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      -1,    -1,    -1,    -1,    -1,    65,    66,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      80,    81,    82,    83,    84,    85,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    -1,    -1,    -1,    -1,
      -1,    65,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    -1,    -1,    -1,    -1,    80,    81,    82,    83,
      84,    85,    52,    53,    54,    55,    56,    57,    58,    59,
      -1,    -1,    80,    81,    82,    83,    84,    85,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      80,    81,    82,    83,    84,    85
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    92,     0,     5,     6,    10,    12,    13,    14,    18,
      19,    20,    22,    23,    25,    26,    28,    29,    30,    31,
      32,    34,    37,    39,    40,    57,    63,    86,    87,    93,
      94,    95,    96,    99,   100,   105,   106,   109,   110,   116,
     119,   120,   121,   122,   123,   137,   138,   139,    44,   136,
     137,   138,    44,   136,    44,   136,    26,    29,    95,   122,
       6,    32,   140,   141,    44,    99,   101,   102,   127,    40,
      42,    63,    95,   100,   119,    46,    63,    47,   126,    42,
      40,    40,    95,   122,   107,   108,   138,    44,    63,    99,
     111,   112,    44,   111,    44,    44,   136,    44,   136,    41,
      41,   141,     3,     4,     7,     8,     9,    15,    16,    17,
      21,    24,    27,    33,    35,    36,    40,    45,    52,    55,
      56,    60,    61,    63,    67,    68,    88,    89,    90,    99,
     104,   117,   118,   127,   128,   130,   131,   132,   136,   137,
     138,   139,    95,   103,   121,    63,   102,   127,    41,    64,
      97,    98,    99,    43,   130,   138,   101,   127,    63,   120,
      44,   130,    43,   130,    41,    64,    97,    41,    64,    97,
     115,   138,    45,    46,    47,   107,    49,   113,   114,   121,
      45,   112,   111,    45,   111,   111,    44,   111,    44,    63,
     130,    63,    49,    63,   128,    40,   136,    40,    63,   130,
      40,   131,    40,    40,    40,    63,    99,   130,   133,   131,
     131,   131,   131,   131,   118,   131,   131,    63,   119,    45,
     128,    45,   104,   118,    46,    47,    48,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    63,    65,    66,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,   142,   143,   144,    40,
      42,    62,    67,    68,    69,    88,    49,   131,    46,    63,
      41,    41,    46,    40,   121,   134,   139,    43,   127,    44,
     124,   125,   130,    43,    41,    41,    46,    41,    41,    46,
      41,    46,    45,   108,   130,    45,    46,   130,    46,    63,
      49,    45,    45,    45,   111,    45,   111,    49,   128,    33,
      63,   130,    63,   130,    63,   133,   130,   130,   136,    40,
     134,   139,    41,    41,    63,    45,   130,   130,   130,   130,
     130,   130,   130,   130,   130,   130,   130,   130,   130,   130,
     130,   130,   130,   130,    41,   129,   130,   130,   136,   136,
     128,   121,    64,    98,   134,    40,    42,   134,   124,    45,
      46,    64,    64,   138,    45,   114,   130,    45,    45,   128,
      40,    63,   130,    63,    41,    41,    41,    41,    46,   131,
      49,    41,    46,    43,    41,    41,    41,    64,    97,    43,
     130,    45,    46,    45,   125,    41,    41,   130,    41,   130,
      63,    63,   130,   128,   128,   128,   135,   138,   130,   130,
      41,    41,    46,    43,    45,    41,   128,    41,    41,   130,
      41,   130,    63,    11,    41,    62,    64,    63,   128,   128,
      41,   128,    41,    41,   130,   128,   138,    41,   128,   128,
     128,    41,   128
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    91,    92,    92,    93,    93,    94,    94,    94,    94,
      95,    95,    96,    96,    96,    96,    96,    96,    96,    96,
      96,    96,    96,    96,    97,    97,    98,    98,    99,    99,
     100,   100,   100,   100,   100,   100,   100,   100,   100,   100,
     100,   100,   100,   100,   100,   100,   100,   100,   100,   100,
     100,   100,   101,   101,   101,   102,   103,   103,   104,   104,
     105,   105,   105,   105,   106,   107,   107,   108,   108,   109,
     109,   109,   109,   109,   109,   109,   109,   110,   110,   110,
     110,   111,   111,   112,   112,   113,   113,   114,   114,   114,
     115,   115,   116,   116,   116,   116,   117,   117,   118,   118,
     118,   119,   119,   120,   120,   121,   121,   122,   122,   122,
     123,   123,   123,   123,   123,   123,   123,   124,   124,   125,
     125,   125,   126,   126,   126,   127,   127,   127,   127,   128,
     128,   128,   128,   128,   128,   128,   128,   128,   128,   128,
     128,   128,   128,   128,   128,   128,   128,   128,   128,   128,
     128,   128,   128,   128,   129,   129,   130,   130,   130,   130,
     130,   130,   130,   130,   130,   130,   130,   130,   130,   130,
     130,   130,   130,   130,   130,   131,   131,   131,   131,   131,
     131,   131,   131,   131,   131,   131,   131,   131,   131,   131,
     131,   131,   131,   131,   131,   131,   131,   131,   131,   132,
     132,   133,   134,   134,   134,   134,   134,   134,   134,   134,
     134,   135,   135,   136,   136,   137,   138,   139,   139,   140,
     140,   141,   141,   142,   142,   142,   142,   142,   142,   142,
     142,   142,   142,   143,   143,   143,   143,   144,   144
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     0,     1,     1,     4,     3,     3,     2,
       2,     1,     3,     4,     3,     3,     4,     3,     4,     6,
       4,     6,     4,     4,     1,     3,     2,     2,     1,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     2,     3,     1,     3,     2,     1,
       4,     5,     5,     6,     2,     1,     3,     1,     3,     5,
       5,     4,     4,     6,     6,     5,     5,     2,     2,     3,
       3,     1,     2,     3,     1,     1,     3,     1,     3,     2,
       1,     3,     3,     2,     2,     1,     2,     1,     3,     2,
       2,     1,     3,     2,     1,     1,     1,     2,     1,     1,
       3,     4,     3,     3,     4,     6,     4,     1,     3,     1,
       3,     4,     2,     4,     5,     4,     3,     3,     2,     2,
       2,     1,     1,     7,     5,     5,     7,     9,     8,     8,
       7,     8,     7,     7,     6,     5,     4,     3,     2,     2,
       3,     2,     3,     3,     1,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     5,     3,     3,     1,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     4,     4,     6,     2,     4,
       3,     3,     1,     4,     3,     1,     1,     1,     3,     2,
       1,     2,     0,     3,     4,     6,     4,     2,     3,     4,
       3,     1,     3,     1,     1,     1,     1,     1,     2,     1,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* module: module module_item  */
#line 317 "./Pgram.y"
                        {
				(yyval.tnode) = (yyvsp[-1].tnode);
				if ((yyvsp[0].tnode)) tlist_add((yyval.tnode), (yyvsp[0].tnode));
			}
#line 2518 "y.tab.c"
    break;

  case 3: /* module: %empty  */
#line 322 "./Pgram.y"
                        {
				(yyval.tnode) = tmknode(GEN_MODULE, 0, 0, 0);
				tree_root = (yyval.tnode);
			}
#line 2527 "y.tab.c"
    break;

  case 4: /* module_item: function  */
#line 329 "./Pgram.y"
                        {
				(yyval.tnode) = tmknode(GEN_MODULE_ITEM, FUNCTION_ITEM,
					(yyvsp[0].tnode), 0);
			}
#line 2536 "y.tab.c"
    break;

  case 5: /* module_item: init_dcl  */
#line 334 "./Pgram.y"
                        {
				if ((yyvsp[0].tnode)) (yyval.tnode) = tmknode(GEN_MODULE_ITEM, DCL_ITEM,
					(yyvsp[0].tnode), 0);
				else (yyval.tnode) = NULL;
			}
#line 2546 "y.tab.c"
    break;

  case 6: /* function: classtypes func_spec param_dcls compstmt  */
#line 342 "./Pgram.y"
                        {
				if ((yyvsp[-3].tnode)->species == CLASSTYPES_TYPEDEF) {
					parse_error((yyvsp[-3].tnode)->srcpos,
						"typedef function definition");
					(yyvsp[-3].tnode)->species = CLASSTYPES_NORMAL;
				}
				(yyval.tnode) = tmknode(GEN_FUNCTION, FUNC_TFPC, (yyvsp[-3].tnode), (yyvsp[-2].tnode));
				tlist_add((yyval.tnode), (yyvsp[-1].tnode));
				tlist_add((yyval.tnode), (yyvsp[0].tnode));
			}
#line 2561 "y.tab.c"
    break;

  case 7: /* function: classtypes func_spec compstmt  */
#line 353 "./Pgram.y"
                        {
				if ((yyvsp[-2].tnode)->species == CLASSTYPES_TYPEDEF) {
					parse_error((yyvsp[-2].tnode)->srcpos,
						"typedef function definition");
					(yyvsp[-2].tnode)->species = CLASSTYPES_NORMAL;
				}
				(yyval.tnode) = tmknode(GEN_FUNCTION, FUNC_TFC, (yyvsp[-2].tnode), (yyvsp[-1].tnode));
				tlist_add((yyval.tnode), (yyvsp[0].tnode));
			}
#line 2575 "y.tab.c"
    break;

  case 8: /* function: func_spec param_dcls compstmt  */
#line 363 "./Pgram.y"
                        {
				(yyval.tnode) = tmknode(GEN_FUNCTION, FUNC_FPC, (yyvsp[-2].tnode), (yyvsp[-1].tnode));
				tlist_add((yyval.tnode), (yyvsp[0].tnode));
			}
#line 2584 "y.tab.c"
    break;

  case 9: /* function: func_spec compstmt  */
#line 368 "./Pgram.y"
                        {
				(yyval.tnode) = tmknode(GEN_FUNCTION, FUNC_FC, (yyvsp[-1].tnode), (yyvsp[0].tnode));
			}
#line 2592 "y.tab.c"
    break;

  case 10: /* func_spec: star func_spec  */
#line 374 "./Pgram.y"
                        {
				if ((yyvsp[0].tnode)->species == FUNC_STARS_SPEC) {
					tlist_ladd((yyvsp[0].tnode)->down->over, (yyvsp[-1].tnode));
					(yyval.tnode) = (yyvsp[0].tnode);
				} else {
					(yyval.tnode) = tmknode(GEN_FUNC_SPEC,
						FUNC_STARS_SPEC,
						tmknode(GEN_STARS, 0, (yyvsp[-1].tnode), 0),
						(yyvsp[0].tnode));
				}
			}
#line 2608 "y.tab.c"
    break;

  case 11: /* func_spec: complex_term  */
#line 386 "./Pgram.y"
                        {
				(yyval.tnode) = (yyvsp[0].tnode);
			}
#line 2616 "y.tab.c"
    break;

  case 12: /* complex_term: complex_term TOK_LPAREN TOK_RPAREN  */
#line 392 "./Pgram.y"
                        {
				(yyval.tnode) = tmknode(GEN_FUNC_SPEC, FUNC_SPEC_NFCALL,
					(yyvsp[-2].tnode), 0);
				tsrc_pos((yyval.tnode), NULL, (yyvsp[0].token).srcpos);
			}
#line 2626 "y.tab.c"
    break;

  case 13: /* complex_term: complex_term TOK_LSQUARE expr TOK_RSQUARE  */
#line 398 "./Pgram.y"
                        {
				(yyval.tnode) = tmknode(GEN_FUNC_SPEC,
					FUNC_SPEC_ARRAY_EXPR, (yyvsp[-3].tnode), (yyvsp[-1].tnode));
				tsrc_pos((yyval.tnode), NULL, (yyvsp[0].token).srcpos);
			}
#line 2636 "y.tab.c"
    break;

  case 14: /* complex_term: complex_term TOK_LSQUARE TOK_RSQUARE  */
#line 404 "./Pgram.y"
                        {
				(yyval.tnode) = tmknode(GEN_FUNC_SPEC, FUNC_SPEC_ARRAY,
					(yyvsp[-2].tnode), 0);
				tsrc_pos((yyval.tnode), NULL, (yyvsp[0].token).srcpos);
			}
#line 2646 "y.tab.c"
    break;

  case 15: /* complex_term: TOK_LPAREN func_spec TOK_RPAREN  */
#line 410 "./Pgram.y"
                        {
				(yyval.tnode) = tmknode(GEN_FUNC_SPEC, FUNC_SPEC_INHERIT,
					(yyvsp[-1].tnode), 0);
				tsrc_pos((yyval.tnode), (yyvsp[-2].token).srcpos, (yyvsp[0].token).srcpos);
			}
#line 2656 "y.tab.c"
    break;

  case 16: /* complex_term: name TOK_LPAREN names TOK_RPAREN  */
#line 416 "./Pgram.y"
                        {
				(yyvsp[-3].tnode)->genus = GEN_FNAME;	/* fix leaf type */
				(yyval.tnode) = tmknode(GEN_FUNC_SPEC, FUNC_FCALL_NAMES,
					(yyvsp[-3].tnode), (yyvsp[-1].tnode));
				tsrc_pos((yyval.tnode), NULL, (yyvsp[0].token).srcpos);
			}
#line 2667 "y.tab.c"
    break;

  case 17: /* complex_term: name TOK_LPAREN TOK_RPAREN  */
#line 423 "./Pgram.y"
                        {
				(yyvsp[-2].tnode)->genus = GEN_FNAME;	/* fix leaf type */
				(yyval.tnode) = tmknode(GEN_FUNC_SPEC, FUNC_FCALL, (yyvsp[-2].tnode), 0);
				tsrc_pos((yyval.tnode), NULL, (yyvsp[0].token).srcpos);
			}
#line 2677 "y.tab.c"
    break;

  case 18: /* complex_term: name TOK_LPAREN ansi_params TOK_RPAREN  */
#line 429 "./Pgram.y"
                        {
				(yyvsp[-3].tnode)->genus = GEN_FNAME;	/* fix leaf type */
				(yyval.tnode) = tmknode(GEN_FUNC_SPEC, FUNC_FCALL_ANSI,
					(yyvsp[-3].tnode), (yyvsp[-1].tnode));
				tsrc_pos((yyval.tnode), NULL, (yyvsp[0].token).srcpos);
			}
#line 2688 "y.tab.c"
    break;

  case 19: /* complex_term: name TOK_LPAREN ansi_params TOK_COMMA ELLIPSIS TOK_RPAREN  */
#line 436 "./Pgram.y"
                        {
				(yyvsp[-5].tnode)->genus = GEN_FNAME;	/* fix leaf type */
				(yyval.tnode) = tmknode(GEN_FUNC_SPEC, FUNC_FCALL_ANSI_E,
					(yyvsp[-5].tnode), (yyvsp[-3].tnode));
				tsrc_pos((yyval.tnode), NULL, (yyvsp[0].token).srcpos);
			}
#line 2699 "y.tab.c"
    break;

  case 20: /* complex_term: complex_term TOK_LPAREN ansi_params TOK_RPAREN  */
#line 443 "./Pgram.y"
                        {
				(yyval.tnode) = tmknode(GEN_FUNC_SPEC, FUNC_SPEC_ANSI,
					(yyvsp[-3].tnode), (yyvsp[-1].tnode));
				tsrc_pos((yyval.tnode), NULL, (yyvsp[0].token).srcpos);
			}
#line 2709 "y.tab.c"
    break;

  case 21: /* complex_term: complex_term TOK_LPAREN ansi_params TOK_COMMA ELLIPSIS TOK_RPAREN  */
#line 449 "./Pgram.y"
                        {
				(yyval.tnode) = tmknode(GEN_FUNC_SPEC, FUNC_SPEC_ANSI_E,
					(yyvsp[-5].tnode), (yyvsp[-3].tnode));
				tsrc_pos((yyval.tnode), NULL, (yyvsp[0].token).srcpos);
			}
#line 2719 "y.tab.c"
    break;

  case 22: /* complex_term: name TOK_LPAREN ELLIPSIS TOK_RPAREN  */
#line 455 "./Pgram.y"
                        {
				(yyvsp[-3].tnode)->genus = GEN_FNAME;	/* fix leaf type */
				(yyval.tnode) = tmknode(GEN_FUNC_SPEC, FUNC_FCALL_E_ANSI,
					(yyvsp[-3].tnode), 0);
				tsrc_pos((yyval.tnode), NULL, (yyvsp[0].token).srcpos);
			}
#line 2730 "y.tab.c"
    break;

  case 23: /* complex_term: complex_term TOK_LPAREN ELLIPSIS TOK_RPAREN  */
#line 462 "./Pgram.y"
                        {
				(yyval.tnode) = tmknode(GEN_FUNC_SPEC, FUNC_SPEC_E_ANSI,
					(yyvsp[-3].tnode), 0);
				tsrc_pos((yyval.tnode), NULL, (yyvsp[0].token).srcpos);
			}
#line 2740 "y.tab.c"
    break;

  case 24: /* ansi_params: ansi_param  */
#line 470 "./Pgram.y"
                        {
				(yyval.tnode) = tmknode(GEN_ANSI_PARAMS, 0, (yyvsp[0].tnode), 0);
			}
#line 2748 "y.tab.c"
    break;

  case 25: /* ansi_params: ansi_params TOK_COMMA ansi_param  */
#line 474 "./Pgram.y"
                        {
				(yyval.tnode) = tlist_add((yyvsp[-2].tnode), (yyvsp[0].tnode));
			}
#line 2756 "y.tab.c"
    break;

  case 26: /* ansi_param: classtypes data_item  */
#line 480 "./Pgram.y"
                        {
				if ((yyvsp[-1].tnode)->species == CLASSTYPES_TYPEDEF) {
					parse_error((yyvsp[-1].tnode)->srcpos,
						"typedef parameters");
					(yyvsp[-1].tnode)->species = CLASSTYPES_NORMAL;
				}
				(yyval.tnode) = tmknode(GEN_ANSI_PARAM, ANSI_DATA_ITEM,
					(yyvsp[-1].tnode), (yyvsp[0].tnode));
			}
#line 2770 "y.tab.c"
    break;

  case 27: /* ansi_param: classtypes null_dcl  */
#line 490 "./Pgram.y"
                        {
				if ((yyvsp[-1].tnode)->species == CLASSTYPES_TYPEDEF) {
					parse_error((yyvsp[-1].tnode)->srcpos,
						"typedef parameters");
					(yyvsp[-1].tnode)->species = CLASSTYPES_NORMAL;
				}
				(yyval.tnode) = tmknode(GEN_ANSI_PARAM, ANSI_NULL_DCL,
					(yyvsp[-1].tnode), (yyvsp[0].tnode));
			}
#line 2784 "y.tab.c"
    break;

  case 28: /* classtypes: classtype  */
#line 502 "./Pgram.y"
                        {
				(yyval.tnode) = tmknode(GEN_CLASSTYPES, 0, (yyvsp[0].tnode), 0);
				if ((yyvsp[0].tnode)->species == CLASSTYPE_TYPEDEF)
					(yyval.tnode)->species = CLASSTYPES_TYPEDEF;
			}
#line 2794 "y.tab.c"
    break;

  case 29: /* classtypes: classtypes classtype  */
#line 508 "./Pgram.y"
                        {
				(yyval.tnode) = tlist_add((yyvsp[-1].tnode), (yyvsp[0].tnode));
				if ((yyvsp[0].tnode)->species == CLASSTYPE_TYPEDEF)
					(yyval.tnode)->species = CLASSTYPES_TYPEDEF;
			}
#line 2804 "y.tab.c"
    break;

  case 30: /* classtype: INT  */
#line 516 "./Pgram.y"
                        {
				(yyval.tnode) = tmkleaf(GEN_CLASSTYPE, CLASSTYPE_INT,
					(yyvsp[0].token).srcpos, 0);
			}
#line 2813 "y.tab.c"
    break;

  case 31: /* classtype: CHAR_KW  */
#line 521 "./Pgram.y"
                        {
				(yyval.tnode) = tmkleaf(GEN_CLASSTYPE, CLASSTYPE_CHAR,
					(yyvsp[0].token).srcpos, 0);
			}
#line 2822 "y.tab.c"
    break;

  case 32: /* classtype: FLOAT  */
#line 526 "./Pgram.y"
                        {
				(yyval.tnode) = tmkleaf(GEN_CLASSTYPE, CLASSTYPE_FLOAT,
					(yyvsp[0].token).srcpos, 0);
			}
#line 2831 "y.tab.c"
    break;

  case 33: /* classtype: DOUBLE  */
#line 531 "./Pgram.y"
                        {
				(yyval.tnode) = tmkleaf(GEN_CLASSTYPE, CLASSTYPE_DOUBLE,
					(yyvsp[0].token).srcpos, 0);
			}
#line 2840 "y.tab.c"
    break;

  case 34: /* classtype: LONG  */
#line 536 "./Pgram.y"
                        {
				(yyval.tnode) = tmkleaf(GEN_CLASSTYPE, CLASSTYPE_LONG,
					(yyvsp[0].token).srcpos, 0);
			}
#line 2849 "y.tab.c"
    break;

  case 35: /* classtype: SHORT  */
#line 541 "./Pgram.y"
                        {
				(yyval.tnode) = tmkleaf(GEN_CLASSTYPE, CLASSTYPE_SHORT,
					(yyvsp[0].token).srcpos, 0);
			}
#line 2858 "y.tab.c"
    break;

  case 36: /* classtype: UNSIGNED  */
#line 546 "./Pgram.y"
                        {
				(yyval.tnode) = tmkleaf(GEN_CLASSTYPE, CLASSTYPE_UNSIGNED,
					(yyvsp[0].token).srcpos, 0);
			}
#line 2867 "y.tab.c"
    break;

  case 37: /* classtype: SIGNED  */
#line 551 "./Pgram.y"
                        {
				(yyval.tnode) = tmkleaf(GEN_CLASSTYPE, CLASSTYPE_SIGNED,
					(yyvsp[0].token).srcpos, 0);
			}
#line 2876 "y.tab.c"
    break;

  case 38: /* classtype: VOID  */
#line 556 "./Pgram.y"
                        {
				(yyval.tnode) = tmkleaf(GEN_CLASSTYPE, CLASSTYPE_VOID,
					(yyvsp[0].token).srcpos, 0);
			}
#line 2885 "y.tab.c"
    break;

  case 39: /* classtype: CONST  */
#line 561 "./Pgram.y"
                        {
				(yyval.tnode) = tmkleaf(GEN_CLASSTYPE, CLASSTYPE_CONST,
					(yyvsp[0].token).srcpos, 0);
			}
#line 2894 "y.tab.c"
    break;

  case 40: /* classtype: VOLATILE  */
#line 566 "./Pgram.y"
                        {
				(yyval.tnode) = tmkleaf(GEN_CLASSTYPE, CLASSTYPE_VOLATILE,
					(yyvsp[0].token).srcpos, 0);
			}
#line 2903 "y.tab.c"
    break;

  case 41: /* classtype: AUTO  */
#line 571 "./Pgram.y"
                        {
				(yyval.tnode) = tmkleaf(GEN_CLASSTYPE, CLASSTYPE_AUTO,
					(yyvsp[0].token).srcpos, 0);
			}
#line 2912 "y.tab.c"
    break;

  case 42: /* classtype: REGISTER  */
#line 576 "./Pgram.y"
                        {
				(yyval.tnode) = tmkleaf(GEN_CLASSTYPE, CLASSTYPE_REGISTER,
					(yyvsp[0].token).srcpos, 0);
			}
#line 2921 "y.tab.c"
    break;

  case 43: /* classtype: STATIC  */
#line 581 "./Pgram.y"
                        {
				(yyval.tnode) = tmkleaf(GEN_CLASSTYPE, CLASSTYPE_STATIC,
					(yyvsp[0].token).srcpos, 0);
			}
#line 2930 "y.tab.c"
    break;

  case 44: /* classtype: INLINE  */
#line 586 "./Pgram.y"
                        {
				(yyval.tnode) = tmkleaf(GEN_CLASSTYPE, CLASSTYPE_INLINE,
					(yyvsp[0].token).srcpos, 0);
			}
#line 2939 "y.tab.c"
    break;

  case 45: /* classtype: EXTERN  */
#line 591 "./Pgram.y"
                        {
				(yyval.tnode) = tmkleaf(GEN_CLASSTYPE, CLASSTYPE_EXTERN,
					(yyvsp[0].token).srcpos, 0);
			}
#line 2948 "y.tab.c"
    break;

  case 46: /* classtype: TYPEDEF  */
#line 596 "./Pgram.y"
                        {
				(yyval.tnode) = tmkleaf(GEN_CLASSTYPE, CLASSTYPE_TYPEDEF,
					(yyvsp[0].token).srcpos, 0);
			}
#line 2957 "y.tab.c"
    break;

  case 47: /* classtype: t_name  */
#line 601 "./Pgram.y"
                        {
				(yyval.tnode) = tmknode(GEN_CLASSTYPE, CLASSTYPE_TNAME,
					(yyvsp[0].tnode), 0);
			}
#line 2966 "y.tab.c"
    break;

  case 48: /* classtype: struct_dcl  */
#line 606 "./Pgram.y"
                        {
				(yyval.tnode) = tmknode(GEN_CLASSTYPE, CLASSTYPE_STRUCT_D,
					(yyvsp[0].tnode), 0);
			}
#line 2975 "y.tab.c"
    break;

  case 49: /* classtype: enum_dcl  */
#line 611 "./Pgram.y"
                        {
				(yyval.tnode) = tmknode(GEN_CLASSTYPE, CLASSTYPE_ENUM_D,
					(yyvsp[0].tnode), 0);
			}
#line 2984 "y.tab.c"
    break;

  case 50: /* classtype: struct_ref  */
#line 616 "./Pgram.y"
                        {
				(yyval.tnode) = tmknode(GEN_CLASSTYPE, CLASSTYPE_STRUCT_R,
					(yyvsp[0].tnode), 0);
			}
#line 2993 "y.tab.c"
    break;

  case 51: /* classtype: enum_ref  */
#line 621 "./Pgram.y"
                        {
				(yyval.tnode) = tmknode(GEN_CLASSTYPE, CLASSTYPE_ENUM_R,
					(yyvsp[0].tnode), 0);
			}
#line 3002 "y.tab.c"
    break;

  case 52: /* param_dcls: param_dcl  */
#line 628 "./Pgram.y"
                        {
				(yyval.tnode) = tmknode(GEN_PARAM_DCLS, 0, (yyvsp[0].tnode), 0);
			}
#line 3010 "y.tab.c"
    break;

  case 53: /* param_dcls: param_dcls param_dcl  */
#line 632 "./Pgram.y"
                        {
				(yyval.tnode) = tlist_add((yyvsp[-1].tnode), (yyvsp[0].tnode));
			}
#line 3018 "y.tab.c"
    break;

  case 54: /* param_dcls: param_dcls TOK_SEMICOLON  */
#line 636 "./Pgram.y"
                        {
				/* extra ';' not allowed before 1st param_dcl */
				(yyval.tnode) = (yyvsp[-1].tnode);
				tsrc_pos((yyval.tnode), NULL, (yyvsp[0].token).srcpos);
			}
#line 3028 "y.tab.c"
    break;

  case 55: /* param_dcl: classtypes parameter_defs TOK_SEMICOLON  */
#line 644 "./Pgram.y"
                        {
				if ((yyvsp[-2].tnode)->species == CLASSTYPES_TYPEDEF) {
					parse_error((yyvsp[-2].tnode)->srcpos,
						"typedef parameters");
					(yyvsp[-2].tnode)->species = CLASSTYPES_NORMAL;
				}
				(yyval.tnode) = tmknode(GEN_PARAM_DCL, 0, (yyvsp[-2].tnode), (yyvsp[-1].tnode));
				tsrc_pos((yyval.tnode), NULL, (yyvsp[0].token).srcpos);
			}
#line 3042 "y.tab.c"
    break;

  case 56: /* parameter_defs: data_item  */
#line 656 "./Pgram.y"
                        {
				(yyval.tnode) = tmknode(GEN_PARAM_DEFS, 0, (yyvsp[0].tnode), 0);
			}
#line 3050 "y.tab.c"
    break;

  case 57: /* parameter_defs: parameter_defs TOK_COMMA data_item  */
#line 660 "./Pgram.y"
                        {
				(yyval.tnode) = tlist_add((yyvsp[-2].tnode), (yyvsp[0].tnode));
			}
#line 3058 "y.tab.c"
    break;

  case 58: /* stmt_list: stmt_list stmt  */
#line 666 "./Pgram.y"
                        {
				(yyval.tnode) = tlist_add((yyvsp[-1].tnode), (yyvsp[0].tnode));
			}
#line 3066 "y.tab.c"
    break;

  case 59: /* stmt_list: stmt  */
#line 670 "./Pgram.y"
                        {
				(yyval.tnode) = tmknode(GEN_STMT_LIST, 0, (yyvsp[0].tnode), 0);
			}
#line 3074 "y.tab.c"
    break;

  case 60: /* enum_dcl: ENUM TOK_LCURLY moe_list TOK_RCURLY  */
#line 676 "./Pgram.y"
                        {
				(yyval.tnode) = tmknode(GEN_ENUM_DCL, sENUM_NOTAG, (yyvsp[-1].tnode), 0);
				tsrc_pos((yyval.tnode), (yyvsp[-3].token).srcpos, (yyvsp[0].token).srcpos);
			}
#line 3083 "y.tab.c"
    break;

  case 61: /* enum_dcl: ENUM tname_or_name TOK_LCURLY moe_list TOK_RCURLY  */
#line 681 "./Pgram.y"
                        {
				(yyval.tnode) = tmknode(GEN_ENUM_DCL, sENUM_TAG, (yyvsp[-3].tnode), (yyvsp[-1].tnode));
				tsrc_pos((yyval.tnode), (yyvsp[-4].token).srcpos, (yyvsp[0].token).srcpos);
			}
#line 3092 "y.tab.c"
    break;

  case 62: /* enum_dcl: ENUM TOK_LCURLY moe_list TOK_COMMA TOK_RCURLY  */
#line 686 "./Pgram.y"
                        {
				(yyval.tnode) = tmknode(GEN_ENUM_DCL, sENUM_NOTAG, (yyvsp[-2].tnode), 0);
				tsrc_pos((yyval.tnode), (yyvsp[-4].token).srcpos, (yyvsp[0].token).srcpos);
			}
#line 3101 "y.tab.c"
    break;

  case 63: /* enum_dcl: ENUM tname_or_name TOK_LCURLY moe_list TOK_COMMA TOK_RCURLY  */
#line 691 "./Pgram.y"
                        {
				(yyval.tnode) = tmknode(GEN_ENUM_DCL, sENUM_TAG, (yyvsp[-4].tnode), (yyvsp[-2].tnode));
				tsrc_pos((yyval.tnode), (yyvsp[-5].token).srcpos, (yyvsp[0].token).srcpos);
			}
#line 3110 "y.tab.c"
    break;

  case 64: /* enum_ref: ENUM tname_or_name  */
#line 698 "./Pgram.y"
                        {
				(yyval.tnode) = tmknode(GEN_ENUM_REF, 0, (yyvsp[0].tnode), 0);
				tsrc_pos((yyval.tnode), (yyvsp[-1].token).srcpos, NULL);
			}
#line 3119 "y.tab.c"
    break;

  case 65: /* moe_list: moe  */
#line 705 "./Pgram.y"
                        {
				(yyval.tnode) = tmknode(GEN_MOE_LIST, 0, (yyvsp[0].tnode), 0);
			}
#line 3127 "y.tab.c"
    break;

  case 66: /* moe_list: moe_list TOK_COMMA moe  */
#line 709 "./Pgram.y"
                        {
				(yyval.tnode) = tlist_add((yyvsp[-2].tnode), (yyvsp[0].tnode));
			}
#line 3135 "y.tab.c"
    break;

  case 67: /* moe: name  */
#line 715 "./Pgram.y"
                        {
				(yyval.tnode) = tmknode(GEN_MOE, MOE_NOVAL, (yyvsp[0].tnode), 0);
			}
#line 3143 "y.tab.c"
    break;

  case 68: /* moe: name TOK_EQUALS expr  */
#line 719 "./Pgram.y"
                        {
				(yyval.tnode) = tmknode(GEN_MOE, MOE_VAL, (yyvsp[-2].tnode), (yyvsp[0].tnode));
			}
#line 3151 "y.tab.c"
    break;

  case 69: /* struct_dcl: STRUCT tname_or_name TOK_LCURLY mem_list TOK_RCURLY  */
#line 725 "./Pgram.y"
                        {
				(yyval.tnode) = tmknode(GEN_STRUCT_DCL, DCL_STRUCT_TAG,
					(yyvsp[-3].tnode), (yyvsp[-1].tnode));
				tsrc_pos((yyval.tnode), (yyvsp[-4].token).srcpos, (yyvsp[0].token).srcpos);
			}
#line 3161 "y.tab.c"
    break;

  case 70: /* struct_dcl: UNION tname_or_name TOK_LCURLY mem_list TOK_RCURLY  */
#line 731 "./Pgram.y"
                        {
				(yyval.tnode) = tmknode(GEN_STRUCT_DCL, DCL_UNION_TAG,
					(yyvsp[-3].tnode), (yyvsp[-1].tnode));
				tsrc_pos((yyval.tnode), (yyvsp[-4].token).srcpos, (yyvsp[0].token).srcpos);
			}
#line 3171 "y.tab.c"
    break;

  case 71: /* struct_dcl: STRUCT TOK_LCURLY mem_list TOK_RCURLY  */
#line 737 "./Pgram.y"
                        {
				(yyval.tnode) = tmknode(GEN_STRUCT_DCL, DCL_STRUCT_NOTAG,
					(yyvsp[-1].tnode), 0);
				tsrc_pos((yyval.tnode), (yyvsp[-3].token).srcpos, (yyvsp[0].token).srcpos);
			}
#line 3181 "y.tab.c"
    break;

  case 72: /* struct_dcl: UNION TOK_LCURLY mem_list TOK_RCURLY  */
#line 743 "./Pgram.y"
                        {
				(yyval.tnode) = tmknode(GEN_STRUCT_DCL, DCL_UNION_NOTAG,
					(yyvsp[-1].tnode), 0);
				tsrc_pos((yyval.tnode), (yyvsp[-3].token).srcpos, (yyvsp[0].token).srcpos);
			}
#line 3191 "y.tab.c"
    break;

  case 73: /* struct_dcl: TOK_PACKED STRUCT tname_or_name TOK_LCURLY mem_list TOK_RCURLY  */
#line 749 "./Pgram.y"
                        {
				(yyval.tnode) = tmknode(GEN_STRUCT_DCL, DCL_PSTRUCT_TAG,
					(yyvsp[-3].tnode), (yyvsp[-1].tnode));
				tsrc_pos((yyval.tnode), (yyvsp[-5].token).srcpos, (yyvsp[0].token).srcpos);
			}
#line 3201 "y.tab.c"
    break;

  case 74: /* struct_dcl: TOK_PACKED UNION tname_or_name TOK_LCURLY mem_list TOK_RCURLY  */
#line 755 "./Pgram.y"
                        {
				(yyval.tnode) = tmknode(GEN_STRUCT_DCL, DCL_PUNION_TAG,
					(yyvsp[-3].tnode), (yyvsp[-1].tnode));
				tsrc_pos((yyval.tnode), (yyvsp[-5].token).srcpos, (yyvsp[0].token).srcpos);
			}
#line 3211 "y.tab.c"
    break;

  case 75: /* struct_dcl: TOK_PACKED STRUCT TOK_LCURLY mem_list TOK_RCURLY  */
#line 761 "./Pgram.y"
                        {
				(yyval.tnode) = tmknode(GEN_STRUCT_DCL, DCL_PSTRUCT_NOTAG,
					(yyvsp[-1].tnode), 0);
				tsrc_pos((yyval.tnode), (yyvsp[-4].token).srcpos, (yyvsp[0].token).srcpos);
			}
#line 3221 "y.tab.c"
    break;

  case 76: /* struct_dcl: TOK_PACKED UNION TOK_LCURLY mem_list TOK_RCURLY  */
#line 767 "./Pgram.y"
                        {
				(yyval.tnode) = tmknode(GEN_STRUCT_DCL, DCL_PUNION_NOTAG,
					(yyvsp[-1].tnode), 0);
				tsrc_pos((yyval.tnode), (yyvsp[-4].token).srcpos, (yyvsp[0].token).srcpos);
			}
#line 3231 "y.tab.c"
    break;

  case 77: /* struct_ref: STRUCT tname_or_name  */
#line 775 "./Pgram.y"
                        {
				(yyval.tnode) = tmknode(GEN_STRUCT_REF, REF_STRUCT,
					(yyvsp[0].tnode), 0);
				tsrc_pos((yyval.tnode), (yyvsp[-1].token).srcpos, NULL);
			}
#line 3241 "y.tab.c"
    break;

  case 78: /* struct_ref: UNION tname_or_name  */
#line 781 "./Pgram.y"
                        {
				(yyval.tnode) = tmknode(GEN_STRUCT_REF, REF_UNION, (yyvsp[0].tnode), 0);
				tsrc_pos((yyval.tnode), (yyvsp[-1].token).srcpos, NULL);
			}
#line 3250 "y.tab.c"
    break;

  case 79: /* struct_ref: TOK_PACKED STRUCT tname_or_name  */
#line 787 "./Pgram.y"
                        {
				(yyval.tnode) = tmknode(GEN_STRUCT_REF, REF_PSTRUCT,
					(yyvsp[0].tnode), 0);
				tsrc_pos((yyval.tnode), (yyvsp[-2].token).srcpos, NULL);
			}
#line 3260 "y.tab.c"
    break;

  case 80: /* struct_ref: TOK_PACKED UNION tname_or_name  */
#line 793 "./Pgram.y"
                        {
				(yyval.tnode) = tmknode(GEN_STRUCT_REF, REF_PUNION, (yyvsp[0].tnode), 0);
				tsrc_pos((yyval.tnode), (yyvsp[-2].token).srcpos, NULL);
			}
#line 3269 "y.tab.c"
    break;

  case 81: /* mem_list: member  */
#line 800 "./Pgram.y"
                        {
				(yyval.tnode) = tmknode(GEN_MEM_LIST, 0, (yyvsp[0].tnode), 0);
			}
#line 3277 "y.tab.c"
    break;

  case 82: /* mem_list: mem_list member  */
#line 804 "./Pgram.y"
                        {	
			        if ((yyvsp[0].tnode) != NULL) {
				    (yyval.tnode) = tlist_add((yyvsp[-1].tnode), (yyvsp[0].tnode));
				} else {
				    (yyval.tnode) = (yyvsp[-1].tnode);
				}
			}
#line 3289 "y.tab.c"
    break;

  case 83: /* member: classtypes mem_dcls TOK_SEMICOLON  */
#line 814 "./Pgram.y"
                        {
				if ((yyvsp[-2].tnode)->species == CLASSTYPES_TYPEDEF) {
					parse_error((yyvsp[-2].tnode)->srcpos,
						"typedef struct/union member");
					(yyvsp[-2].tnode)->species = CLASSTYPES_NORMAL;
				}
				(yyval.tnode) = tmknode(GEN_MEMBER, 0, (yyvsp[-2].tnode), (yyvsp[-1].tnode));
				tsrc_pos((yyval.tnode), NULL, (yyvsp[0].token).srcpos);
			}
#line 3303 "y.tab.c"
    break;

  case 84: /* member: TOK_SEMICOLON  */
#line 824 "./Pgram.y"
                        {
			        (yyval.tnode) = NULL; 
			}
#line 3311 "y.tab.c"
    break;

  case 85: /* mem_dcls: mem_dcl  */
#line 846 "./Pgram.y"
                        {
				(yyval.tnode) = tmknode(GEN_MEM_DCLS, 0, (yyvsp[0].tnode), 0);
			}
#line 3319 "y.tab.c"
    break;

  case 86: /* mem_dcls: mem_dcls TOK_COMMA mem_dcl  */
#line 850 "./Pgram.y"
                        {
				(yyval.tnode) = tlist_add((yyvsp[-2].tnode), (yyvsp[0].tnode));
			}
#line 3327 "y.tab.c"
    break;

  case 87: /* mem_dcl: data_item  */
#line 856 "./Pgram.y"
                        {
				(yyval.tnode) = tmknode(GEN_MEM_DCL, MEM_DCL, (yyvsp[0].tnode), 0);
			}
#line 3335 "y.tab.c"
    break;

  case 88: /* mem_dcl: data_item TOK_COLON expr  */
#line 860 "./Pgram.y"
                        {
				(yyval.tnode) = tmknode(GEN_MEM_DCL, MEM_DCL_BIT, (yyvsp[-2].tnode), (yyvsp[0].tnode));
			}
#line 3343 "y.tab.c"
    break;

  case 89: /* mem_dcl: TOK_COLON expr  */
#line 864 "./Pgram.y"
                        {
				(yyval.tnode) = tmknode(GEN_MEM_DCL, MEM_BIT, (yyvsp[0].tnode), 0);
				tsrc_pos((yyval.tnode), (yyvsp[-1].token).srcpos, NULL);
			}
#line 3352 "y.tab.c"
    break;

  case 90: /* names: name  */
#line 871 "./Pgram.y"
                        {
				(yyval.tnode) = tmknode(GEN_NAMES, 0, (yyvsp[0].tnode), 0);
			}
#line 3360 "y.tab.c"
    break;

  case 91: /* names: names TOK_COMMA name  */
#line 875 "./Pgram.y"
                        {
				(yyval.tnode) = tlist_add((yyvsp[-2].tnode), (yyvsp[0].tnode));
			}
#line 3368 "y.tab.c"
    break;

  case 92: /* init_dcl: classtypes data_specs TOK_SEMICOLON  */
#line 881 "./Pgram.y"
                        {
				if ((yyvsp[-2].tnode)->species == CLASSTYPES_TYPEDEF) {
					insertTypeNames((yyvsp[-1].tnode));
					(yyvsp[-2].tnode)->species = CLASSTYPES_NORMAL;
				}
				(yyval.tnode) = tmknode(GEN_INIT_DCL, INIT_DCL_SPEC,
					(yyvsp[-2].tnode), (yyvsp[-1].tnode));
				tsrc_pos((yyval.tnode), NULL, (yyvsp[0].token).srcpos);
			}
#line 3382 "y.tab.c"
    break;

  case 93: /* init_dcl: classtypes TOK_SEMICOLON  */
#line 891 "./Pgram.y"
                        {
				if ((yyvsp[-1].tnode)->species == CLASSTYPES_TYPEDEF)
					(yyvsp[-1].tnode)->species = CLASSTYPES_NORMAL;
				(yyval.tnode) = tmknode(GEN_INIT_DCL, INIT_DCL_NOSPEC,
					(yyvsp[-1].tnode), 0);
				tsrc_pos((yyval.tnode), NULL, (yyvsp[0].token).srcpos);
			}
#line 3394 "y.tab.c"
    break;

  case 94: /* init_dcl: data_specs TOK_SEMICOLON  */
#line 899 "./Pgram.y"
                        {
				/*
				* This rule is not in the internal grammar
				* so we have to fake it.
				*/
				(yyval.tnode) = tmknode(GEN_INIT_DCL, INIT_DCL_SPEC,
				  tmknode(GEN_CLASSTYPES, CLASSTYPES_NORMAL,
				    tmkleaf(GEN_CLASSTYPE, CLASSTYPE_INT,
					nosrcpos, 0),
				  0),
				(yyvsp[-1].tnode));
				tsrc_pos((yyval.tnode), NULL, (yyvsp[0].token).srcpos);
			}
#line 3412 "y.tab.c"
    break;

  case 95: /* init_dcl: TOK_SEMICOLON  */
#line 913 "./Pgram.y"
                        {
				/* Never generate corresponding species. */
				(yyval.tnode) = NULL;
			}
#line 3421 "y.tab.c"
    break;

  case 96: /* indata_dcls: indata_dcls indata_dcl  */
#line 920 "./Pgram.y"
                        {
				(yyval.tnode) = tlist_add((yyvsp[-1].tnode), (yyvsp[0].tnode));
			}
#line 3429 "y.tab.c"
    break;

  case 97: /* indata_dcls: indata_dcl  */
#line 924 "./Pgram.y"
                        {
				(yyval.tnode) = tmknode(GEN_INDATA_DCLS, 0, (yyvsp[0].tnode), 0);
			}
#line 3437 "y.tab.c"
    break;

  case 98: /* indata_dcl: classtypes data_specs TOK_SEMICOLON  */
#line 930 "./Pgram.y"
                        {
				if ((yyvsp[-2].tnode)->species == CLASSTYPES_TYPEDEF) {
					insertTypeNames((yyvsp[-1].tnode));
					(yyvsp[-2].tnode)->species = CLASSTYPES_NORMAL;
				}
				(yyval.tnode) = tmknode(GEN_INDATA_DCL, INIT_DCL_SPEC,
					(yyvsp[-2].tnode), (yyvsp[-1].tnode));
				tsrc_pos((yyval.tnode), NULL, (yyvsp[0].token).srcpos);
			}
#line 3451 "y.tab.c"
    break;

  case 99: /* indata_dcl: classtypes TOK_SEMICOLON  */
#line 940 "./Pgram.y"
                        {
				if ((yyvsp[-1].tnode)->species == CLASSTYPES_TYPEDEF)
					(yyvsp[-1].tnode)->species = CLASSTYPES_NORMAL;
				(yyval.tnode) = tmknode(GEN_INDATA_DCL, INIT_DCL_NOSPEC,
					(yyvsp[-1].tnode), 0);
				tsrc_pos((yyval.tnode), NULL, (yyvsp[0].token).srcpos);
			}
#line 3463 "y.tab.c"
    break;

  case 100: /* indata_dcl: TOK_SEMICOLON indata_dcl  */
#line 948 "./Pgram.y"
                        {
				(yyval.tnode) = (yyvsp[0].tnode);
				tsrc_pos((yyval.tnode), (yyvsp[-1].token).srcpos, NULL);
			}
#line 3472 "y.tab.c"
    break;

  case 101: /* data_specs: data_spec  */
#line 955 "./Pgram.y"
                        {
				(yyval.tnode) = tmknode(GEN_DATA_SPECS, 0, (yyvsp[0].tnode), 0);
			}
#line 3480 "y.tab.c"
    break;

  case 102: /* data_specs: data_specs TOK_COMMA data_spec  */
#line 959 "./Pgram.y"
                        {
				(yyval.tnode) = tlist_add((yyvsp[-2].tnode), (yyvsp[0].tnode));
			}
#line 3488 "y.tab.c"
    break;

  case 103: /* data_spec: data_item initializer  */
#line 965 "./Pgram.y"
                        {
				(yyval.tnode) = tmknode(GEN_DATA_SPEC, DATA_SPEC_INIT,
					(yyvsp[-1].tnode), (yyvsp[0].tnode));
			}
#line 3497 "y.tab.c"
    break;

  case 104: /* data_spec: data_item  */
#line 970 "./Pgram.y"
                        {
				(yyval.tnode) = tmknode(GEN_DATA_SPEC, DATA_SPEC, (yyvsp[0].tnode), 0);
			}
#line 3505 "y.tab.c"
    break;

  case 105: /* data_item: func_spec  */
#line 976 "./Pgram.y"
                        {
				/*
				* Change all FUNC_SPEC to DATA_ITEM in tree from
				* $1.  Assume at most one FUNC_SPEC child at
				* each node and FUNC_SPEC always a child of
				* FUNC_SPEC.
				*/
				TNODE *p;
				TNODE *first;

				first = (yyvsp[0].tnode);
				p = first;
				while (p) {
					if (p->genus == GEN_FUNC_SPEC) {
						p->genus = GEN_DATA_ITEM;
						first = p->down;
						p = first;
					} else {
						p = p->over;
						if (p == first) break;
					}
				}
				(yyval.tnode) = (yyvsp[0].tnode);
			}
#line 3534 "y.tab.c"
    break;

  case 106: /* data_item: nfunc_spec  */
#line 1001 "./Pgram.y"
                        {
				(yyval.tnode) = (yyvsp[0].tnode);
			}
#line 3542 "y.tab.c"
    break;

  case 107: /* nfunc_spec: star nfunc_spec  */
#line 1007 "./Pgram.y"
                        {
				if ((yyvsp[0].tnode)->species == FUNC_STARS_SPEC) {
					tlist_ladd((yyvsp[0].tnode)->down->over, (yyvsp[-1].tnode));
					(yyval.tnode) = (yyvsp[0].tnode);
				} else {
					(yyval.tnode) = tmknode(GEN_DATA_ITEM,
						FUNC_STARS_SPEC,
						tmknode(GEN_STARS, 0, (yyvsp[-1].tnode), 0),
						(yyvsp[0].tnode));
				}
			}
#line 3558 "y.tab.c"
    break;

  case 108: /* nfunc_spec: d_i_term  */
#line 1019 "./Pgram.y"
                        {
				(yyval.tnode) = (yyvsp[0].tnode);
			}
#line 3566 "y.tab.c"
    break;

  case 109: /* nfunc_spec: name  */
#line 1023 "./Pgram.y"
                        {
				(yyval.tnode) = tmknode(GEN_DATA_ITEM, DATA_NAME, (yyvsp[0].tnode), 0);
			}
#line 3574 "y.tab.c"
    break;

  case 110: /* d_i_term: d_i_term TOK_LPAREN TOK_RPAREN  */
#line 1029 "./Pgram.y"
                        {
				(yyval.tnode) = tmknode(GEN_DATA_ITEM,
					FUNC_SPEC_NFCALL, (yyvsp[-2].tnode), 0);
				tsrc_pos((yyval.tnode), NULL, (yyvsp[0].token).srcpos);
			}
#line 3584 "y.tab.c"
    break;

  case 111: /* d_i_term: nfunc_spec TOK_LSQUARE expr TOK_RSQUARE  */
#line 1035 "./Pgram.y"
                        {
				(yyval.tnode) = tmknode(GEN_DATA_ITEM,
					FUNC_SPEC_ARRAY_EXPR, (yyvsp[-3].tnode), (yyvsp[-1].tnode));
				tsrc_pos((yyval.tnode), NULL, (yyvsp[0].token).srcpos);
			}
#line 3594 "y.tab.c"
    break;

  case 112: /* d_i_term: nfunc_spec TOK_LSQUARE TOK_RSQUARE  */
#line 1041 "./Pgram.y"
                        {
				(yyval.tnode) = tmknode(GEN_DATA_ITEM,
					FUNC_SPEC_ARRAY, (yyvsp[-2].tnode), 0);
				tsrc_pos((yyval.tnode), NULL, (yyvsp[0].token).srcpos);
			}
#line 3604 "y.tab.c"
    break;

  case 113: /* d_i_term: TOK_LPAREN nfunc_spec TOK_RPAREN  */
#line 1047 "./Pgram.y"
                        {
				(yyval.tnode) = tmknode(GEN_DATA_ITEM,
					FUNC_SPEC_INHERIT, (yyvsp[-1].tnode), 0);
				tsrc_pos((yyval.tnode), (yyvsp[-2].token).srcpos, (yyvsp[0].token).srcpos);
			}
#line 3614 "y.tab.c"
    break;

  case 114: /* d_i_term: d_i_term TOK_LPAREN ansi_params TOK_RPAREN  */
#line 1053 "./Pgram.y"
                        {
				(yyval.tnode) = tmknode(GEN_DATA_ITEM,
					FUNC_SPEC_ANSI, (yyvsp[-3].tnode), (yyvsp[-1].tnode));
				tsrc_pos((yyval.tnode), NULL, (yyvsp[0].token).srcpos);
			}
#line 3624 "y.tab.c"
    break;

  case 115: /* d_i_term: d_i_term TOK_LPAREN ansi_params TOK_COMMA ELLIPSIS TOK_RPAREN  */
#line 1059 "./Pgram.y"
                        {
				(yyval.tnode) = tmknode(GEN_DATA_ITEM,
					FUNC_SPEC_ANSI_E, (yyvsp[-5].tnode), (yyvsp[-3].tnode));
				tsrc_pos((yyval.tnode), NULL, (yyvsp[0].token).srcpos);
			}
#line 3634 "y.tab.c"
    break;

  case 116: /* d_i_term: d_i_term TOK_LPAREN ELLIPSIS TOK_RPAREN  */
#line 1065 "./Pgram.y"
                        {
				(yyval.tnode) = tmknode(GEN_DATA_ITEM,
					FUNC_SPEC_E_ANSI, (yyvsp[-3].tnode), 0);
				tsrc_pos((yyval.tnode), NULL, (yyvsp[0].token).srcpos);
			}
#line 3644 "y.tab.c"
    break;

  case 117: /* init_list: init_item  */
#line 1073 "./Pgram.y"
                        {
				(yyval.tnode) = tmknode(GEN_INIT_LIST, 0, (yyvsp[0].tnode), 0);
			}
#line 3652 "y.tab.c"
    break;

  case 118: /* init_list: init_list TOK_COMMA init_item  */
#line 1077 "./Pgram.y"
                        {
				(yyval.tnode) = tlist_add((yyvsp[-2].tnode), (yyvsp[0].tnode));
			}
#line 3660 "y.tab.c"
    break;

  case 119: /* init_item: expr  */
#line 1083 "./Pgram.y"
                        {
				(yyval.tnode) = tmknode(GEN_INIT_ITEM, INIT_EXPR,
					(yyvsp[0].tnode), 0);
			}
#line 3669 "y.tab.c"
    break;

  case 120: /* init_item: TOK_LCURLY init_list TOK_RCURLY  */
#line 1088 "./Pgram.y"
                        {
				(yyval.tnode) = tmknode(GEN_INIT_ITEM, INIT_LIST,
					(yyvsp[-1].tnode), 0);
				tsrc_pos((yyval.tnode), (yyvsp[-2].token).srcpos, (yyvsp[0].token).srcpos);
			}
#line 3679 "y.tab.c"
    break;

  case 121: /* init_item: TOK_LCURLY init_list TOK_COMMA TOK_RCURLY  */
#line 1094 "./Pgram.y"
                        {
				(yyval.tnode) = tmknode(GEN_INIT_ITEM, INIT_LIST,
					(yyvsp[-2].tnode), 0);
				tsrc_pos((yyval.tnode), (yyvsp[-3].token).srcpos, (yyvsp[0].token).srcpos);
			}
#line 3689 "y.tab.c"
    break;

  case 122: /* initializer: TOK_EQUALS expr  */
#line 1102 "./Pgram.y"
                        {
				(yyval.tnode) = tmknode(GEN_INITIALIZER, INITIALIZER_EXPR,
					(yyvsp[0].tnode), 0);
				tsrc_pos((yyval.tnode), (yyvsp[-1].token).srcpos, NULL);
			}
#line 3699 "y.tab.c"
    break;

  case 123: /* initializer: TOK_EQUALS TOK_LCURLY init_list TOK_RCURLY  */
#line 1108 "./Pgram.y"
                        {
				(yyval.tnode) = tmknode(GEN_INITIALIZER, INITIALIZER_LIST,
					(yyvsp[-1].tnode), 0);
				tsrc_pos((yyval.tnode), (yyvsp[-3].token).srcpos, (yyvsp[0].token).srcpos);
			}
#line 3709 "y.tab.c"
    break;

  case 124: /* initializer: TOK_EQUALS TOK_LCURLY init_list TOK_COMMA TOK_RCURLY  */
#line 1114 "./Pgram.y"
                        {
				/* Ignore extra comma! */
				(yyval.tnode) = tmknode(GEN_INITIALIZER, INITIALIZER_LIST,
					(yyvsp[-2].tnode), 0);
				tsrc_pos((yyval.tnode), (yyvsp[-4].token).srcpos, (yyvsp[0].token).srcpos);
			}
#line 3720 "y.tab.c"
    break;

  case 125: /* compstmt: TOK_LCURLY indata_dcls stmt_list TOK_RCURLY  */
#line 1123 "./Pgram.y"
                        {
				(yyval.tnode) = tmknode(GEN_COMPSTMT, COMPSTMT_DCL_STMTS,
					(yyvsp[-2].tnode), (yyvsp[-1].tnode));
				tsrc_pos((yyval.tnode), (yyvsp[-3].token).srcpos, (yyvsp[0].token).srcpos);
			}
#line 3730 "y.tab.c"
    break;

  case 126: /* compstmt: TOK_LCURLY stmt_list TOK_RCURLY  */
#line 1129 "./Pgram.y"
                        {
				(yyval.tnode) = tmknode(GEN_COMPSTMT, COMPSTMT_STMTS,
					(yyvsp[-1].tnode), 0);
				tsrc_pos((yyval.tnode), (yyvsp[-2].token).srcpos, (yyvsp[0].token).srcpos);
			}
#line 3740 "y.tab.c"
    break;

  case 127: /* compstmt: TOK_LCURLY indata_dcls TOK_RCURLY  */
#line 1135 "./Pgram.y"
                        {
				(yyval.tnode) = tmknode(GEN_COMPSTMT, COMPSTMT_DCL,
					(yyvsp[-1].tnode), 0);
				tsrc_pos((yyval.tnode), (yyvsp[-2].token).srcpos, (yyvsp[0].token).srcpos);
			}
#line 3750 "y.tab.c"
    break;

  case 128: /* compstmt: TOK_LCURLY TOK_RCURLY  */
#line 1141 "./Pgram.y"
                        {
				(yyval.tnode) = tmknode(GEN_COMPSTMT, COMPSTMT_EMPTY,
					0, 0);
				tsrc_pos((yyval.tnode), (yyvsp[-1].token).srcpos, (yyvsp[0].token).srcpos);
			}
#line 3760 "y.tab.c"
    break;

  case 129: /* stmt: ASM TOK_SEMICOLON  */
#line 1149 "./Pgram.y"
                        {
				(yyval.tnode) = tmknode(GEN_STMT, STMT_EMPTY, 0, 0);
				tsrc_pos((yyval.tnode), (yyvsp[-1].token).srcpos, (yyvsp[-1].token).srcpos);
			}
#line 3769 "y.tab.c"
    break;

  case 130: /* stmt: expr TOK_SEMICOLON  */
#line 1155 "./Pgram.y"
                        {
				(yyval.tnode) = tmknode(GEN_STMT, STMT_EXPR, (yyvsp[-1].tnode), 0);
				tsrc_pos((yyval.tnode), NULL, (yyvsp[0].token).srcpos);
			}
#line 3778 "y.tab.c"
    break;

  case 131: /* stmt: TOK_SEMICOLON  */
#line 1160 "./Pgram.y"
                        {
				(yyval.tnode) = tmknode(GEN_STMT, STMT_EMPTY, 0, 0);
				tsrc_pos((yyval.tnode), (yyvsp[0].token).srcpos, (yyvsp[0].token).srcpos);
			}
#line 3787 "y.tab.c"
    break;

  case 132: /* stmt: compstmt  */
#line 1165 "./Pgram.y"
                        {
				(yyval.tnode) = tmknode(GEN_STMT, STMT_COMPSTMT, (yyvsp[0].tnode), 0);
			}
#line 3795 "y.tab.c"
    break;

  case 133: /* stmt: IF TOK_LPAREN expr TOK_RPAREN stmt ELSE stmt  */
#line 1169 "./Pgram.y"
                        {
				(yyval.tnode) = tmknode(GEN_STMT, STMT_IF_ELSE, (yyvsp[-4].tnode), (yyvsp[-2].tnode));
				tlist_add((yyval.tnode), (yyvsp[0].tnode));
				tsrc_pos((yyval.tnode), (yyvsp[-6].token).srcpos, NULL);
			}
#line 3805 "y.tab.c"
    break;

  case 134: /* stmt: IF TOK_LPAREN expr TOK_RPAREN stmt  */
#line 1181 "./Pgram.y"
                        {
				(yyval.tnode) = tmknode(GEN_STMT, STMT_IF, (yyvsp[-2].tnode), (yyvsp[0].tnode));
				tsrc_pos((yyval.tnode), (yyvsp[-4].token).srcpos, NULL);
			}
#line 3814 "y.tab.c"
    break;

  case 135: /* stmt: WHILE TOK_LPAREN expr TOK_RPAREN stmt  */
#line 1186 "./Pgram.y"
                        {
				(yyval.tnode) = tmknode(GEN_STMT, STMT_WHILE, (yyvsp[-2].tnode), (yyvsp[0].tnode));
				tsrc_pos((yyval.tnode), (yyvsp[-4].token).srcpos, NULL);
			}
#line 3823 "y.tab.c"
    break;

  case 136: /* stmt: DO stmt WHILE TOK_LPAREN expr TOK_RPAREN TOK_SEMICOLON  */
#line 1191 "./Pgram.y"
                        {
				(yyval.tnode) = tmknode(GEN_STMT, STMT_DO, (yyvsp[-5].tnode), (yyvsp[-2].tnode));
				tsrc_pos((yyval.tnode), (yyvsp[-6].token).srcpos, (yyvsp[0].token).srcpos);
			}
#line 3832 "y.tab.c"
    break;

  case 137: /* stmt: FOR TOK_LPAREN expr TOK_SEMICOLON expr TOK_SEMICOLON expr TOK_RPAREN stmt  */
#line 1196 "./Pgram.y"
                        {
				if ((yyvsp[0].tnode)->species == STMT_EMPTY) {
					(yyval.tnode) = tmknode(GEN_STMT, STMT_FOR_EEE_,
						(yyvsp[-6].tnode), (yyvsp[-4].tnode));
					tlist_add((yyval.tnode), (yyvsp[-2].tnode));
					tsrc_pos((yyval.tnode), (yyvsp[-8].token).srcpos, (yyvsp[0].tnode)->srcpos);
					tfreenode((yyvsp[0].tnode));
				} else {
					(yyval.tnode) = tmknode(GEN_STMT, STMT_FOR_EEES,
						(yyvsp[-6].tnode), (yyvsp[-4].tnode));
					tlist_add((yyval.tnode), (yyvsp[-2].tnode));
					tlist_add((yyval.tnode), (yyvsp[0].tnode));
					tsrc_pos((yyval.tnode), (yyvsp[-8].token).srcpos, (yyvsp[0].tnode)->srcpos);
				}
			}
#line 3852 "y.tab.c"
    break;

  case 138: /* stmt: FOR TOK_LPAREN expr TOK_SEMICOLON expr TOK_SEMICOLON TOK_RPAREN stmt  */
#line 1212 "./Pgram.y"
                        {
				if ((yyvsp[0].tnode)->species == STMT_EMPTY) {
					(yyval.tnode) = tmknode(GEN_STMT, STMT_FOR_EE__,
						(yyvsp[-5].tnode), (yyvsp[-3].tnode));
					tsrc_pos((yyval.tnode), (yyvsp[-7].token).srcpos, (yyvsp[0].tnode)->srcpos);
					tfreenode((yyvsp[0].tnode));
				} else {
					(yyval.tnode) = tmknode(GEN_STMT, STMT_FOR_EE_S,
						(yyvsp[-5].tnode), (yyvsp[-3].tnode));
					tlist_add((yyval.tnode), (yyvsp[0].tnode));
					tsrc_pos((yyval.tnode), (yyvsp[-7].token).srcpos, (yyvsp[0].tnode)->srcpos);
				}
			}
#line 3870 "y.tab.c"
    break;

  case 139: /* stmt: FOR TOK_LPAREN expr TOK_SEMICOLON TOK_SEMICOLON expr TOK_RPAREN stmt  */
#line 1226 "./Pgram.y"
                        {
				if ((yyvsp[0].tnode)->species == STMT_EMPTY) {
					(yyval.tnode) = tmknode(GEN_STMT, STMT_FOR_E_E_,
						(yyvsp[-5].tnode), (yyvsp[-2].tnode));
					tsrc_pos((yyval.tnode), (yyvsp[-7].token).srcpos, (yyvsp[0].tnode)->srcpos);
					tfreenode((yyvsp[0].tnode));
				} else {
					(yyval.tnode) = tmknode(GEN_STMT, STMT_FOR_E_ES,
						(yyvsp[-5].tnode), (yyvsp[-2].tnode));
					tlist_add((yyval.tnode), (yyvsp[0].tnode));
					tsrc_pos((yyval.tnode), (yyvsp[-7].token).srcpos, (yyvsp[0].tnode)->srcpos);
				}
			}
#line 3888 "y.tab.c"
    break;

  case 140: /* stmt: FOR TOK_LPAREN expr TOK_SEMICOLON TOK_SEMICOLON TOK_RPAREN stmt  */
#line 1240 "./Pgram.y"
                        {
				if ((yyvsp[0].tnode)->species == STMT_EMPTY) {
					(yyval.tnode) = tmknode(GEN_STMT, STMT_FOR_E___,
						(yyvsp[-4].tnode), 0);
					tsrc_pos((yyval.tnode), (yyvsp[-6].token).srcpos, (yyvsp[0].tnode)->srcpos);
					tfreenode((yyvsp[0].tnode));
				} else {
				        (yyval.tnode) = tmknode(GEN_STMT, STMT_FOR_E__S,
						     (yyvsp[-4].tnode), (yyvsp[0].tnode));
				        tsrc_pos((yyval.tnode), (yyvsp[-6].token).srcpos, (yyvsp[0].tnode)->srcpos);
				}
			}
#line 3905 "y.tab.c"
    break;

  case 141: /* stmt: FOR TOK_LPAREN TOK_SEMICOLON expr TOK_SEMICOLON expr TOK_RPAREN stmt  */
#line 1253 "./Pgram.y"
                        {
				if ((yyvsp[0].tnode)->species == STMT_EMPTY) {
					(yyval.tnode) = tmknode(GEN_STMT, STMT_FOR__EE_,
						(yyvsp[-4].tnode), (yyvsp[-2].tnode));
					tsrc_pos((yyval.tnode), (yyvsp[-7].token).srcpos, (yyvsp[0].tnode)->srcpos);
					tfreenode((yyvsp[0].tnode));
				} else {
					(yyval.tnode) = tmknode(GEN_STMT, STMT_FOR__EES,
						(yyvsp[-4].tnode), (yyvsp[-2].tnode));
					tlist_add((yyval.tnode), (yyvsp[0].tnode));
					tsrc_pos((yyval.tnode), (yyvsp[-7].token).srcpos, (yyvsp[0].tnode)->srcpos);
				}
			}
#line 3923 "y.tab.c"
    break;

  case 142: /* stmt: FOR TOK_LPAREN TOK_SEMICOLON expr TOK_SEMICOLON TOK_RPAREN stmt  */
#line 1267 "./Pgram.y"
                        {
				if ((yyvsp[0].tnode)->species == STMT_EMPTY) {
					(yyval.tnode) = tmknode(GEN_STMT, STMT_FOR__E__,
						(yyvsp[-3].tnode), 0);
					tsrc_pos((yyval.tnode), (yyvsp[-6].token).srcpos, (yyvsp[0].tnode)->srcpos);
					tfreenode((yyvsp[0].tnode));
				} else {
				        (yyval.tnode) = tmknode(GEN_STMT, STMT_FOR__E_S,
						(yyvsp[-3].tnode), (yyvsp[0].tnode));
				        tsrc_pos((yyval.tnode), (yyvsp[-6].token).srcpos, (yyvsp[0].tnode)->srcpos);
				}
			}
#line 3940 "y.tab.c"
    break;

  case 143: /* stmt: FOR TOK_LPAREN TOK_SEMICOLON TOK_SEMICOLON expr TOK_RPAREN stmt  */
#line 1280 "./Pgram.y"
                        {
				if ((yyvsp[0].tnode)->species == STMT_EMPTY) {
					(yyval.tnode) = tmknode(GEN_STMT, STMT_FOR___E_,
						(yyvsp[-2].tnode), 0);
					tsrc_pos((yyval.tnode), (yyvsp[-6].token).srcpos, (yyvsp[0].tnode)->srcpos);
					tfreenode((yyvsp[0].tnode));
				} else {
				        (yyval.tnode) = tmknode(GEN_STMT, STMT_FOR___ES,
						(yyvsp[-2].tnode), (yyvsp[0].tnode));
					tsrc_pos((yyval.tnode), (yyvsp[-6].token).srcpos, (yyvsp[0].tnode)->srcpos);
				}
			}
#line 3957 "y.tab.c"
    break;

  case 144: /* stmt: FOR TOK_LPAREN TOK_SEMICOLON TOK_SEMICOLON TOK_RPAREN stmt  */
#line 1293 "./Pgram.y"
                        {
				(yyval.tnode) = tmknode(GEN_STMT, STMT_FOR____S, (yyvsp[0].tnode), 0);
				tsrc_pos((yyval.tnode), (yyvsp[-5].token).srcpos, NULL);
			}
#line 3966 "y.tab.c"
    break;

  case 145: /* stmt: SWITCH TOK_LPAREN expr TOK_RPAREN stmt  */
#line 1298 "./Pgram.y"
                        {
				(yyval.tnode) = tmknode(GEN_STMT, STMT_SWITCH, (yyvsp[-2].tnode), (yyvsp[0].tnode));
				tsrc_pos((yyval.tnode), (yyvsp[-4].token).srcpos, NULL);
			}
#line 3975 "y.tab.c"
    break;

  case 146: /* stmt: CASE expr TOK_COLON stmt  */
#line 1303 "./Pgram.y"
                        {
				(yyval.tnode) = tmknode(GEN_STMT, STMT_CASE, (yyvsp[-2].tnode), (yyvsp[0].tnode));
				tsrc_pos((yyval.tnode), (yyvsp[-3].token).srcpos, NULL);
			}
#line 3984 "y.tab.c"
    break;

  case 147: /* stmt: DEFAULT TOK_COLON stmt  */
#line 1308 "./Pgram.y"
                        {
				(yyval.tnode) = tmknode(GEN_STMT, STMT_DEFAULT, (yyvsp[0].tnode), 0);
				tsrc_pos((yyval.tnode), (yyvsp[-2].token).srcpos, NULL);
			}
#line 3993 "y.tab.c"
    break;

  case 148: /* stmt: BREAK TOK_SEMICOLON  */
#line 1313 "./Pgram.y"
                        {
				(yyval.tnode) = tmknode(GEN_STMT, STMT_BREAK, 0, 0);
				tsrc_pos((yyval.tnode), (yyvsp[-1].token).srcpos, (yyvsp[0].token).srcpos);
			}
#line 4002 "y.tab.c"
    break;

  case 149: /* stmt: CONTINUE TOK_SEMICOLON  */
#line 1318 "./Pgram.y"
                        {
				(yyval.tnode) = tmknode(GEN_STMT, STMT_CONTINUE, 0, 0);
				tsrc_pos((yyval.tnode), (yyvsp[-1].token).srcpos, (yyvsp[0].token).srcpos);
			}
#line 4011 "y.tab.c"
    break;

  case 150: /* stmt: RETURN expr TOK_SEMICOLON  */
#line 1323 "./Pgram.y"
                        {
				(yyval.tnode) = tmknode(GEN_STMT, STMT_RETURN_EXPR,
					(yyvsp[-1].tnode), 0);
				tsrc_pos((yyval.tnode), (yyvsp[-2].token).srcpos, (yyvsp[0].token).srcpos);
			}
#line 4021 "y.tab.c"
    break;

  case 151: /* stmt: RETURN TOK_SEMICOLON  */
#line 1329 "./Pgram.y"
                        {
				(yyval.tnode) = tmknode(GEN_STMT, STMT_RETURN, 0, 0);
				tsrc_pos((yyval.tnode), (yyvsp[-1].token).srcpos, (yyvsp[0].token).srcpos);
			}
#line 4030 "y.tab.c"
    break;

  case 152: /* stmt: GOTO tname_or_name TOK_SEMICOLON  */
#line 1334 "./Pgram.y"
                        {
				(yyval.tnode) = tmknode(GEN_STMT, STMT_GOTO, (yyvsp[-1].tnode), 0);
				tsrc_pos((yyval.tnode), (yyvsp[-2].token).srcpos, (yyvsp[0].token).srcpos);
			}
#line 4039 "y.tab.c"
    break;

  case 153: /* stmt: tname_or_name TOK_COLON stmt  */
#line 1339 "./Pgram.y"
                        {
				(yyval.tnode) = tmknode(GEN_STMT, STMT_LABEL, (yyvsp[-2].tnode), (yyvsp[0].tnode));
			}
#line 4047 "y.tab.c"
    break;

  case 154: /* exp_list: expr  */
#line 1346 "./Pgram.y"
                        {
				(yyval.tnode) = tmknode(GEN_EXP_LIST, 0, (yyvsp[0].tnode), 0);
			}
#line 4055 "y.tab.c"
    break;

  case 155: /* exp_list: exp_list TOK_COMMA expr  */
#line 1350 "./Pgram.y"
                        {
				(yyval.tnode) = tlist_add((yyvsp[-2].tnode), (yyvsp[0].tnode));
			}
#line 4063 "y.tab.c"
    break;

  case 156: /* expr: expr relop expr  */
#line 1356 "./Pgram.y"
                        {
				(yyval.tnode) = tmknode(GEN_EXPR, EXPR_BINOP, (yyvsp[-2].tnode), (yyvsp[-1].tnode));
				tlist_add((yyval.tnode), (yyvsp[0].tnode));
			}
#line 4072 "y.tab.c"
    break;

  case 157: /* expr: expr equop expr  */
#line 1362 "./Pgram.y"
                        {
				(yyval.tnode) = tmknode(GEN_EXPR, EXPR_BINOP, (yyvsp[-2].tnode), (yyvsp[-1].tnode));
				tlist_add((yyval.tnode), (yyvsp[0].tnode));
			}
#line 4081 "y.tab.c"
    break;

  case 158: /* expr: expr TOK_COMMA expr  */
#line 1367 "./Pgram.y"
                        {
				(yyval.tnode) = tmknode(GEN_EXPR, EXPR_COMMA, (yyvsp[-2].tnode), (yyvsp[0].tnode));
			}
#line 4089 "y.tab.c"
    break;

  case 159: /* expr: expr TOK_PLUS expr  */
#line 1371 "./Pgram.y"
                        {
				(yyval.tnode) = tmknode(GEN_EXPR, EXPR_BINOP, (yyvsp[-2].tnode),
					tmkleaf(GEN_BINOP, BINOP_PLUS,
						(yyvsp[-1].token).srcpos, 0));
				tlist_add((yyval.tnode), (yyvsp[0].tnode));
			}
#line 4100 "y.tab.c"
    break;

  case 160: /* expr: expr TOK_DASH expr  */
#line 1378 "./Pgram.y"
                        {
				(yyval.tnode) = tmknode(GEN_EXPR, EXPR_BINOP, (yyvsp[-2].tnode),
					tmkleaf(GEN_BINOP, BINOP_MINUS,
						(yyvsp[-1].token).srcpos, 0));
				tlist_add((yyval.tnode), (yyvsp[0].tnode));
			}
#line 4111 "y.tab.c"
    break;

  case 161: /* expr: expr TOK_STAR expr  */
#line 1385 "./Pgram.y"
                        {
				(yyval.tnode) = tmknode(GEN_EXPR, EXPR_BINOP, (yyvsp[-2].tnode),
					tmkleaf(GEN_BINOP, BINOP_MUL, (yyvsp[-1].token).srcpos,
						0));
				tlist_add((yyval.tnode), (yyvsp[0].tnode));
			}
#line 4122 "y.tab.c"
    break;

  case 162: /* expr: expr TOK_SLASH expr  */
#line 1392 "./Pgram.y"
                        {
				(yyval.tnode) = tmknode(GEN_EXPR, EXPR_BINOP, (yyvsp[-2].tnode),
					tmkleaf(GEN_BINOP, BINOP_DIV, (yyvsp[-1].token).srcpos,
						0));
				tlist_add((yyval.tnode), (yyvsp[0].tnode));
			}
#line 4133 "y.tab.c"
    break;

  case 163: /* expr: expr TOK_PERCENT expr  */
#line 1399 "./Pgram.y"
                        {
				(yyval.tnode) = tmknode(GEN_EXPR, EXPR_BINOP, (yyvsp[-2].tnode),
					tmkleaf(GEN_BINOP, BINOP_MOD, (yyvsp[-1].token).srcpos,
						0));
				tlist_add((yyval.tnode), (yyvsp[0].tnode));
			}
#line 4144 "y.tab.c"
    break;

  case 164: /* expr: expr LSHIFT expr  */
#line 1406 "./Pgram.y"
                        {
				(yyval.tnode) = tmknode(GEN_EXPR, EXPR_BINOP, (yyvsp[-2].tnode),
					tmkleaf(GEN_BINOP, BINOP_LS, (yyvsp[-1].token).srcpos,
						0));
				tlist_add((yyval.tnode), (yyvsp[0].tnode));
			}
#line 4155 "y.tab.c"
    break;

  case 165: /* expr: expr RSHIFT expr  */
#line 1413 "./Pgram.y"
                        {
				(yyval.tnode) = tmknode(GEN_EXPR, EXPR_BINOP, (yyvsp[-2].tnode),
					tmkleaf(GEN_BINOP, BINOP_RS, (yyvsp[-1].token).srcpos,
						0));
				tlist_add((yyval.tnode), (yyvsp[0].tnode));
			}
#line 4166 "y.tab.c"
    break;

  case 166: /* expr: expr TOK_VERTICAL expr  */
#line 1420 "./Pgram.y"
                        {
				(yyval.tnode) = tmknode(GEN_EXPR, EXPR_BINOP, (yyvsp[-2].tnode),
					tmkleaf(GEN_BINOP, BINOP_OR, (yyvsp[-1].token).srcpos,
						0));
				tlist_add((yyval.tnode), (yyvsp[0].tnode));
			}
#line 4177 "y.tab.c"
    break;

  case 167: /* expr: expr TOK_CARROT expr  */
#line 1427 "./Pgram.y"
                        {
				(yyval.tnode) = tmknode(GEN_EXPR, EXPR_BINOP, (yyvsp[-2].tnode),
					tmkleaf(GEN_BINOP, BINOP_ER, (yyvsp[-1].token).srcpos,
						0));
				tlist_add((yyval.tnode), (yyvsp[0].tnode));
			}
#line 4188 "y.tab.c"
    break;

  case 168: /* expr: expr TOK_AMPER expr  */
#line 1434 "./Pgram.y"
                        {
				(yyval.tnode) = tmknode(GEN_EXPR, EXPR_BINOP, (yyvsp[-2].tnode),
					tmkleaf(GEN_BINOP, BINOP_AND, (yyvsp[-1].token).srcpos,
						0));
				tlist_add((yyval.tnode), (yyvsp[0].tnode));
			}
#line 4199 "y.tab.c"
    break;

  case 169: /* expr: expr ANDAND expr  */
#line 1441 "./Pgram.y"
                        {
				(yyval.tnode) = tmknode(GEN_EXPR, EXPR_BINOP, (yyvsp[-2].tnode),
					tmkleaf(GEN_BINOP, BINOP_ANDAND,
						(yyvsp[-1].token).srcpos, 0));
				tlist_add((yyval.tnode), (yyvsp[0].tnode));
			}
#line 4210 "y.tab.c"
    break;

  case 170: /* expr: expr OROR expr  */
#line 1448 "./Pgram.y"
                        {
				(yyval.tnode) = tmknode(GEN_EXPR, EXPR_BINOP, (yyvsp[-2].tnode),
					tmkleaf(GEN_BINOP, BINOP_OROR,
						(yyvsp[-1].token).srcpos, 0));
				tlist_add((yyval.tnode), (yyvsp[0].tnode));
			}
#line 4221 "y.tab.c"
    break;

  case 171: /* expr: expr TOK_QMARK expr TOK_COLON expr  */
#line 1455 "./Pgram.y"
                        {
				(yyval.tnode) = tmknode(GEN_EXPR, EXPR_QCOLON, (yyvsp[-4].tnode), (yyvsp[-2].tnode));
				tlist_add((yyval.tnode), (yyvsp[0].tnode));
			}
#line 4230 "y.tab.c"
    break;

  case 172: /* expr: expr asop expr  */
#line 1460 "./Pgram.y"
                        {
				(yyval.tnode) = tmknode(GEN_EXPR, EXPR_BINOP, (yyvsp[-2].tnode), (yyvsp[-1].tnode));
				tlist_add((yyval.tnode), (yyvsp[0].tnode));
			}
#line 4239 "y.tab.c"
    break;

  case 173: /* expr: expr TOK_EQUALS expr  */
#line 1465 "./Pgram.y"
                        {
				(yyval.tnode) = tmknode(GEN_EXPR, EXPR_BINOP, (yyvsp[-2].tnode),
					tmkleaf(GEN_BINOP, BINOP_ASGN,
						(yyvsp[-1].token).srcpos, 0));
				tlist_add((yyval.tnode), (yyvsp[0].tnode));
			}
#line 4250 "y.tab.c"
    break;

  case 174: /* expr: term  */
#line 1472 "./Pgram.y"
                        {
				(yyval.tnode) = (yyvsp[0].tnode);
			}
#line 4258 "y.tab.c"
    break;

  case 175: /* term: term PLUSPLUS  */
#line 1478 "./Pgram.y"
                        {
				(yyval.tnode) = tmknode(GEN_EXPR, EXPR_INCOP, (yyvsp[-1].tnode),
					tmkleaf(GEN_INCOP, INCOP_INC, (yyvsp[0].token).srcpos,
						0));
			}
#line 4268 "y.tab.c"
    break;

  case 176: /* term: term MINUSMINUS  */
#line 1484 "./Pgram.y"
                        {
				(yyval.tnode) = tmknode(GEN_EXPR, EXPR_INCOP, (yyvsp[-1].tnode),
					tmkleaf(GEN_INCOP, INCOP_DEC, (yyvsp[0].token).srcpos,
						0));
			}
#line 4278 "y.tab.c"
    break;

  case 177: /* term: PLUSPLUS term  */
#line 1490 "./Pgram.y"
                        {
				(yyval.tnode) = tmknode(GEN_EXPR, EXPR_UNOP,
					tmkleaf(GEN_UNOP, UNOP_INC, (yyvsp[-1].token).srcpos,
						0),
					(yyvsp[0].tnode));
			}
#line 4289 "y.tab.c"
    break;

  case 178: /* term: MINUSMINUS term  */
#line 1497 "./Pgram.y"
                        {
				(yyval.tnode) = tmknode(GEN_EXPR, EXPR_UNOP,
					tmkleaf(GEN_UNOP, UNOP_DEC, (yyvsp[-1].token).srcpos,
						0),
					(yyvsp[0].tnode));
			}
#line 4300 "y.tab.c"
    break;

  case 179: /* term: TOK_AMPER term  */
#line 1504 "./Pgram.y"
                        {
				(yyval.tnode) = tmknode(GEN_EXPR, EXPR_UNOP,
					tmkleaf(GEN_UNOP, UNOP_AND, (yyvsp[-1].token).srcpos,
						0),
					(yyvsp[0].tnode));
			}
#line 4311 "y.tab.c"
    break;

  case 180: /* term: TOK_TILDE term  */
#line 1511 "./Pgram.y"
                        {
				(yyval.tnode) = tmknode(GEN_EXPR, EXPR_UNOP,
					tmkleaf(GEN_UNOP, UNOP_COMPL, (yyvsp[-1].token).srcpos,
						0),
					(yyvsp[0].tnode));
			}
#line 4322 "y.tab.c"
    break;

  case 181: /* term: TOK_EXCLAIM term  */
#line 1518 "./Pgram.y"
                        {
				(yyval.tnode) = tmknode(GEN_EXPR, EXPR_UNOP,
					tmkleaf(GEN_UNOP, UNOP_NOT, (yyvsp[-1].token).srcpos,
						0),
					(yyvsp[0].tnode));
			}
#line 4333 "y.tab.c"
    break;

  case 182: /* term: TOK_DASH term  */
#line 1525 "./Pgram.y"
                        {
				(yyval.tnode) = tmknode(GEN_EXPR, EXPR_UNOP,
					tmkleaf(GEN_UNOP, UNOP_MINUS, (yyvsp[-1].token).srcpos,
						0),
					(yyvsp[0].tnode));
			}
#line 4344 "y.tab.c"
    break;

  case 183: /* term: TOK_PLUS term  */
#line 1532 "./Pgram.y"
                        {
				/*
				* This rule is not in the internal grammar
				* so we have to fake it.
				*/
				(yyval.tnode) = (yyvsp[0].tnode);
			}
#line 4356 "y.tab.c"
    break;

  case 184: /* term: SIZEOF term  */
#line 1540 "./Pgram.y"
                        {
				(yyval.tnode) = tmknode(GEN_EXPR, EXPR_SIZEOF, (yyvsp[0].tnode), 0);
				tsrc_pos((yyval.tnode), (yyvsp[-1].token).srcpos, NULL);
			}
#line 4365 "y.tab.c"
    break;

  case 185: /* term: TOK_LPAREN cast_type TOK_RPAREN term  */
#line 1545 "./Pgram.y"
                        {
				(yyval.tnode) = tmknode(GEN_EXPR, EXPR_CAST, (yyvsp[-2].tnode), (yyvsp[0].tnode));
				tsrc_pos((yyval.tnode), (yyvsp[-3].token).srcpos, NULL);
			}
#line 4374 "y.tab.c"
    break;

  case 186: /* term: SIZEOF TOK_LPAREN cast_type TOK_RPAREN  */
#line 1550 "./Pgram.y"
                        {
				(yyval.tnode) = tmknode(GEN_EXPR, EXPR_SIZEOF_TYPE,
					(yyvsp[-1].tnode), 0);
				tsrc_pos((yyval.tnode), (yyvsp[-3].token).srcpos, (yyvsp[0].token).srcpos);
			}
#line 4384 "y.tab.c"
    break;

  case 187: /* term: OFFSET TOK_LPAREN tname_or_name TOK_COMMA mname TOK_RPAREN  */
#line 1556 "./Pgram.y"
                        {
				(yyval.tnode) = tmknode(GEN_EXPR, EXPR_OFFSET, (yyvsp[-3].tnode), (yyvsp[-1].tnode));
				tsrc_pos((yyval.tnode), (yyvsp[-5].token).srcpos, (yyvsp[0].token).srcpos);
			}
#line 4393 "y.tab.c"
    break;

  case 188: /* term: star term  */
#line 1561 "./Pgram.y"
                        {
				if ((yyvsp[0].tnode)->species == EXPR_LSTAR) {
					tlist_ladd((yyvsp[0].tnode)->down->over, (yyvsp[-1].tnode));
					(yyval.tnode) = (yyvsp[0].tnode);
				} else {
					(yyval.tnode) = tmknode(GEN_EXPR, EXPR_LSTAR,
						tmknode(GEN_STARS, 0, (yyvsp[-1].tnode), 0),
						(yyvsp[0].tnode));
				}
			}
#line 4408 "y.tab.c"
    break;

  case 189: /* term: term TOK_LSQUARE expr TOK_RSQUARE  */
#line 1572 "./Pgram.y"
                        {
				(yyval.tnode) = tmknode(GEN_EXPR, EXPR_LARRAY, (yyvsp[-3].tnode), (yyvsp[-1].tnode));
				tsrc_pos((yyval.tnode), NULL, (yyvsp[0].token).srcpos);
			}
#line 4417 "y.tab.c"
    break;

  case 190: /* term: term STREF tname_or_name  */
#line 1577 "./Pgram.y"
                        {
				(yyval.tnode) = tmknode(GEN_EXPR, EXPR_LARROW, (yyvsp[-2].tnode), (yyvsp[0].tnode));
			}
#line 4425 "y.tab.c"
    break;

  case 191: /* term: term TOK_PERIOD tname_or_name  */
#line 1581 "./Pgram.y"
                        {
				(yyval.tnode) = tmknode(GEN_EXPR, EXPR_LDOT, (yyvsp[-2].tnode), (yyvsp[0].tnode));
			}
#line 4433 "y.tab.c"
    break;

  case 192: /* term: name  */
#line 1585 "./Pgram.y"
                        {
				(yyval.tnode) = tmknode(GEN_EXPR, EXPR_LNAME, (yyvsp[0].tnode), 0);
			}
#line 4441 "y.tab.c"
    break;

  case 193: /* term: term TOK_LPAREN exp_list TOK_RPAREN  */
#line 1589 "./Pgram.y"
                        {
				TNODE *p;

				if ((yyvsp[-3].tnode)->species == EXPR_LNAME) {
					(yyvsp[-3].tnode)->genus = GEN_FUNC_LP;
					(yyvsp[-3].tnode)->species = FUNC_NAME_LP;
					(yyvsp[-3].tnode)->down->genus = GEN_FNAME;
					p = (yyvsp[-3].tnode);
				} else {
					p = tmknode(GEN_FUNC_LP, FUNC_EXPR_LP,
						(yyvsp[-3].tnode), 0);
				}
				(yyval.tnode) = tmknode(GEN_EXPR, EXPR_LFCALL1, p, (yyvsp[-1].tnode));
				tsrc_pos((yyval.tnode), NULL, (yyvsp[0].token).srcpos);
			}
#line 4461 "y.tab.c"
    break;

  case 194: /* term: term TOK_LPAREN TOK_RPAREN  */
#line 1605 "./Pgram.y"
                        {
				TNODE *p;

				if ((yyvsp[-2].tnode)->species == EXPR_LNAME) {
					(yyvsp[-2].tnode)->genus = GEN_FUNC_LP;
					(yyvsp[-2].tnode)->species = FUNC_NAME_LP;
					(yyvsp[-2].tnode)->down->genus = GEN_FNAME;
					p = (yyvsp[-2].tnode);
				} else {
					p = tmknode(GEN_FUNC_LP, FUNC_EXPR_LP,
						(yyvsp[-2].tnode), 0);
				}
				(yyval.tnode) = tmknode(GEN_EXPR, EXPR_LFCALL0, p, 0);
				tsrc_pos((yyval.tnode), NULL, (yyvsp[0].token).srcpos);
			}
#line 4481 "y.tab.c"
    break;

  case 195: /* term: ICON  */
#line 1621 "./Pgram.y"
                        {
				(yyval.tnode) = tmknode(GEN_EXPR, EXPR_ICON, 
					tmkleaf(GEN_ICON, 0,
						(yyvsp[0].token).srcpos, (yyvsp[0].token).text),
					0);
			}
#line 4492 "y.tab.c"
    break;

  case 196: /* term: FCON  */
#line 1628 "./Pgram.y"
                        {
				(yyval.tnode) = tmknode(GEN_EXPR, EXPR_FCON,
					tmkleaf(GEN_FCON, 0,
						(yyvsp[0].token).srcpos, (yyvsp[0].token).text),
					0);
			}
#line 4503 "y.tab.c"
    break;

  case 197: /* term: strings  */
#line 1635 "./Pgram.y"
                        {
				(yyval.tnode) = tmknode(GEN_EXPR, EXPR_STRING, (yyvsp[0].tnode), 0);
			}
#line 4511 "y.tab.c"
    break;

  case 198: /* term: TOK_LPAREN expr TOK_RPAREN  */
#line 1639 "./Pgram.y"
                        {
				(yyval.tnode) = tmknode(GEN_EXPR, EXPR_INHERIT, (yyvsp[-1].tnode), 0);
				tsrc_pos((yyval.tnode), (yyvsp[-2].token).srcpos, (yyvsp[0].token).srcpos);
			}
#line 4520 "y.tab.c"
    break;

  case 199: /* strings: strings STRING  */
#line 1646 "./Pgram.y"
                        {
				(yyval.tnode) = tlist_add((yyvsp[-1].tnode), 
					tmkleaf(GEN_STRING, 0,
						(yyvsp[0].token).srcpos, (yyvsp[0].token).text));
			}
#line 4530 "y.tab.c"
    break;

  case 200: /* strings: STRING  */
#line 1652 "./Pgram.y"
                        {
				(yyval.tnode) = tmknode(GEN_STRINGS, 0, 
					tmkleaf(GEN_STRING, 0,
						(yyvsp[0].token).srcpos, (yyvsp[0].token).text),
					0);
			}
#line 4541 "y.tab.c"
    break;

  case 201: /* cast_type: classtypes null_dcl  */
#line 1661 "./Pgram.y"
                        {
				if ((yyvsp[-1].tnode)->species == CLASSTYPES_TYPEDEF) {
					parse_error((yyvsp[-1].tnode)->srcpos,
						"typedef in cast");
					(yyvsp[-1].tnode)->species = CLASSTYPES_NORMAL;
				}
				if ((yyvsp[0].tnode))
					(yyval.tnode) = tmknode(GEN_CAST_TYPE, CAST_TYPE,
						(yyvsp[-1].tnode), (yyvsp[0].tnode));
				else 
					(yyval.tnode) = tmknode(GEN_CAST_TYPE,
						CAST_TYPE_NULL, (yyvsp[-1].tnode), NULL);
			}
#line 4559 "y.tab.c"
    break;

  case 202: /* null_dcl: %empty  */
#line 1677 "./Pgram.y"
                        {
				(yyval.tnode) = NULL;
			}
#line 4567 "y.tab.c"
    break;

  case 203: /* null_dcl: null_dcl TOK_LPAREN TOK_RPAREN  */
#line 1681 "./Pgram.y"
                        {
				(yyval.tnode) = tmknode(GEN_NULL_DCL, NULL_N_FUNC, (yyvsp[-2].tnode), 0);
				tsrc_pos((yyval.tnode), NULL, (yyvsp[0].token).srcpos);
			}
#line 4576 "y.tab.c"
    break;

  case 204: /* null_dcl: null_dcl TOK_LPAREN ansi_params TOK_RPAREN  */
#line 1686 "./Pgram.y"
                        {
				(yyval.tnode) = tmknode(GEN_NULL_DCL, NULL_ANSI, (yyvsp[-3].tnode), (yyvsp[-1].tnode));
				tsrc_pos((yyval.tnode), NULL, (yyvsp[0].token).srcpos);
			}
#line 4585 "y.tab.c"
    break;

  case 205: /* null_dcl: null_dcl TOK_LPAREN ansi_params TOK_COMMA ELLIPSIS TOK_RPAREN  */
#line 1691 "./Pgram.y"
                        {
				(yyval.tnode) = tmknode(GEN_NULL_DCL, NULL_ANSI_E, (yyvsp[-5].tnode), (yyvsp[-3].tnode));
				tsrc_pos((yyval.tnode), NULL, (yyvsp[0].token).srcpos);
			}
#line 4594 "y.tab.c"
    break;

  case 206: /* null_dcl: null_dcl TOK_LPAREN ELLIPSIS TOK_RPAREN  */
#line 1696 "./Pgram.y"
                        {
				(yyval.tnode) = tmknode(GEN_NULL_DCL, NULL_E_ANSI, (yyvsp[-3].tnode), 0);
				tsrc_pos((yyval.tnode), NULL, (yyvsp[0].token).srcpos);
			}
#line 4603 "y.tab.c"
    break;

  case 207: /* null_dcl: star null_dcl  */
#line 1701 "./Pgram.y"
                        {
				if ((yyvsp[0].tnode) == NULL)
					(yyval.tnode) = tmknode(GEN_NULL_DCL, NULL_STAR,
						(yyvsp[-1].tnode), 0);
				else 
					(yyval.tnode) = tmknode(GEN_NULL_DCL, NULL_STAR_N,
						tmknode(GEN_STARS, 0, (yyvsp[-1].tnode), 0),
						(yyvsp[0].tnode));
			}
#line 4617 "y.tab.c"
    break;

  case 208: /* null_dcl: null_dcl TOK_LSQUARE TOK_RSQUARE  */
#line 1711 "./Pgram.y"
                        {
				if ((yyvsp[-2].tnode) == NULL)
					(yyval.tnode) = tmknode(GEN_NULL_DCL, NULL_SUB,
						0, 0);
				else 
					(yyval.tnode) = tmknode(GEN_NULL_DCL, NULL_N_SUB,
						(yyvsp[-2].tnode), 0);
				tsrc_pos((yyval.tnode), NULL, (yyvsp[0].token).srcpos);
			}
#line 4631 "y.tab.c"
    break;

  case 209: /* null_dcl: null_dcl TOK_LSQUARE expr TOK_RSQUARE  */
#line 1721 "./Pgram.y"
                        {
				if ((yyvsp[-3].tnode) == NULL)
					(yyval.tnode) = tmknode(GEN_NULL_DCL, NULL_SUB_E,
						(yyvsp[-1].tnode), 0);
				else 
					(yyval.tnode) = tmknode(GEN_NULL_DCL,NULL_N_SUB_E,
						(yyvsp[-3].tnode), (yyvsp[-1].tnode));
				tsrc_pos((yyval.tnode), NULL, (yyvsp[0].token).srcpos);
			}
#line 4645 "y.tab.c"
    break;

  case 210: /* null_dcl: TOK_LPAREN null_dcl TOK_RPAREN  */
#line 1731 "./Pgram.y"
                        {
				if ((yyvsp[-1].tnode) == NULL)
					(yyval.tnode) = tmknode(GEN_NULL_DCL,
						NULL_INHERIT, 0, 0);
				else 
					(yyval.tnode) = tmknode(GEN_NULL_DCL,
						NULL_INHERIT_N, (yyvsp[-1].tnode), 0);
				tsrc_pos((yyval.tnode), (yyvsp[-2].token).srcpos, (yyvsp[0].token).srcpos);
			}
#line 4659 "y.tab.c"
    break;

  case 215: /* t_name: T_NAME  */
#line 1753 "./Pgram.y"
                        {
				(yyval.tnode) = tmkleaf(GEN_TNAME, 0,
					(yyvsp[0].token).srcpos, (yyvsp[0].token).text);
			}
#line 4668 "y.tab.c"
    break;

  case 216: /* name: NAME  */
#line 1760 "./Pgram.y"
                        {
				(yyval.tnode) = tmkleaf(GEN_NAME, 0, (yyvsp[0].token).srcpos, (yyvsp[0].token).text);
			}
#line 4676 "y.tab.c"
    break;

  case 217: /* star: TOK_STAR  */
#line 1766 "./Pgram.y"
                        {
				(yyval.tnode) = tmkleaf(GEN_STAR, STAR_NORMAL, (yyvsp[0].token).srcpos, 0);
			}
#line 4684 "y.tab.c"
    break;

  case 218: /* star: TOK_STAR qualifiers  */
#line 1771 "./Pgram.y"
                        {
				(yyval.tnode) = tmknode(GEN_STAR, STAR_QUALS, (yyvsp[0].tnode), 0);
			}
#line 4692 "y.tab.c"
    break;

  case 219: /* qualifiers: qualifier  */
#line 1777 "./Pgram.y"
                        {
				(yyval.tnode) = tmknode(GEN_QUALS, 0, (yyvsp[0].tnode), 0);
			}
#line 4700 "y.tab.c"
    break;

  case 220: /* qualifiers: qualifiers qualifier  */
#line 1781 "./Pgram.y"
                        {
				(yyval.tnode) = tlist_add((yyvsp[-1].tnode), (yyvsp[0].tnode));
			}
#line 4708 "y.tab.c"
    break;

  case 221: /* qualifier: CONST  */
#line 1787 "./Pgram.y"
                        {
				(yyval.tnode) = tmkleaf(GEN_QUAL, QUAL_CONST, (yyvsp[0].token).srcpos, 0);
			}
#line 4716 "y.tab.c"
    break;

  case 222: /* qualifier: VOLATILE  */
#line 1792 "./Pgram.y"
                        {
				(yyval.tnode) = tmkleaf(GEN_QUAL, QUAL_VOLATILE, (yyvsp[0].token).srcpos, 0);
			}
#line 4724 "y.tab.c"
    break;

  case 223: /* asop: PLUS_EQ  */
#line 1797 "./Pgram.y"
                        {
				(yyval.tnode) = tmkleaf(GEN_BINOP, BINOP_APLUS,
					(yyvsp[0].token).srcpos, 0);
			}
#line 4733 "y.tab.c"
    break;

  case 224: /* asop: MINUS_EQ  */
#line 1803 "./Pgram.y"
                        {
				(yyval.tnode) = tmkleaf(GEN_BINOP, BINOP_AMINUS,
					(yyvsp[0].token).srcpos, 0);
			}
#line 4742 "y.tab.c"
    break;

  case 225: /* asop: MUL_EQ  */
#line 1809 "./Pgram.y"
                        {
				(yyval.tnode) = tmkleaf(GEN_BINOP, BINOP_AMUL,
					(yyvsp[0].token).srcpos, 0);
			}
#line 4751 "y.tab.c"
    break;

  case 226: /* asop: DIV_EQ  */
#line 1815 "./Pgram.y"
                        {
				(yyval.tnode) = tmkleaf(GEN_BINOP, BINOP_ADIV,
					(yyvsp[0].token).srcpos, 0);
			}
#line 4760 "y.tab.c"
    break;

  case 227: /* asop: MOD_EQ  */
#line 1821 "./Pgram.y"
                        {
				(yyval.tnode) = tmkleaf(GEN_BINOP, BINOP_AMOD,
					(yyvsp[0].token).srcpos, 0);
			}
#line 4769 "y.tab.c"
    break;

  case 228: /* asop: LS_EQ  */
#line 1827 "./Pgram.y"
                        {
				(yyval.tnode) = tmkleaf(GEN_BINOP, BINOP_ALS,
					(yyvsp[0].token).srcpos, 0);
			}
#line 4778 "y.tab.c"
    break;

  case 229: /* asop: RS_EQ  */
#line 1833 "./Pgram.y"
                        {
				(yyval.tnode) = tmkleaf(GEN_BINOP, BINOP_ARS,
					(yyvsp[0].token).srcpos, 0);
			}
#line 4787 "y.tab.c"
    break;

  case 230: /* asop: AND_EQ  */
#line 1839 "./Pgram.y"
                        {
				(yyval.tnode) = tmkleaf(GEN_BINOP, BINOP_AAND,
					(yyvsp[0].token).srcpos, 0);
			}
#line 4796 "y.tab.c"
    break;

  case 231: /* asop: OR_EQ  */
#line 1845 "./Pgram.y"
                        {
				(yyval.tnode) = tmkleaf(GEN_BINOP, BINOP_AOR,
					(yyvsp[0].token).srcpos, 0);
			}
#line 4805 "y.tab.c"
    break;

  case 232: /* asop: ER_EQ  */
#line 1851 "./Pgram.y"
                        {
				(yyval.tnode) = tmkleaf(GEN_BINOP, BINOP_AER,
					(yyvsp[0].token).srcpos, 0);
			}
#line 4814 "y.tab.c"
    break;

  case 233: /* relop: GT_EQ  */
#line 1857 "./Pgram.y"
                        {
				(yyval.tnode) = tmkleaf(GEN_BINOP, BINOP_GTEQ,
					(yyvsp[0].token).srcpos, 0);
			}
#line 4823 "y.tab.c"
    break;

  case 234: /* relop: LT_EQ  */
#line 1863 "./Pgram.y"
                        {
				(yyval.tnode) = tmkleaf(GEN_BINOP, BINOP_LTEQ,
					(yyvsp[0].token).srcpos, 0);
			}
#line 4832 "y.tab.c"
    break;

  case 235: /* relop: TOK_GREATER  */
#line 1869 "./Pgram.y"
                        {
				(yyval.tnode) = tmkleaf(GEN_BINOP, BINOP_GT, (yyvsp[0].token).srcpos, 0);
			}
#line 4840 "y.tab.c"
    break;

  case 236: /* relop: TOK_LESSER  */
#line 1874 "./Pgram.y"
                        {
				(yyval.tnode) = tmkleaf(GEN_BINOP, BINOP_LT, (yyvsp[0].token).srcpos, 0);
			}
#line 4848 "y.tab.c"
    break;

  case 237: /* equop: EQUAL  */
#line 1879 "./Pgram.y"
                        {
				(yyval.tnode) = tmkleaf(GEN_BINOP, BINOP_EQ, (yyvsp[0].token).srcpos, 0);
			}
#line 4856 "y.tab.c"
    break;

  case 238: /* equop: BANG_EQUAL  */
#line 1884 "./Pgram.y"
                        {
				(yyval.tnode) = tmkleaf(GEN_BINOP, BINOP_NEQ,
					(yyvsp[0].token).srcpos, 0);
			}
#line 4865 "y.tab.c"
    break;


#line 4869 "y.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 1889 "./Pgram.y"


#define CHECK_MALLOC(p) ((p)?1:internal_error(NULL, "Out of memory\n"))

int
parse(FILE *srcfile,
      TNODE ** tree,
      char **uprefix)
{
    int status;

    scan_init(srcfile);

    status = yyparse();

    scan_end(uprefix);

    *tree = tree_root;

    return status;
}

static void
insertTypeNames(TNODE * node)
{
    TNODE *p;
    TNODE *item;

    if (node->genus != GEN_DATA_SPECS) {
	internal_error(node->srcpos, "Unexpected genus: %d",
		       node->genus);
    }

    for (p = CHILD0(node); p != NULL; p = TNEXT(p)) {
	item = CHILD0(p);
	while (item->genus == GEN_DATA_ITEM) {
	    if (item->species == FUNC_STARS_SPEC)
		item = CHILD1(item);
	    else
		item = CHILD0(item);
	}
	scan_setType(item->text);
    }
}
