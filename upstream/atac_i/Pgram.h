/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     BREAK = 259,
     CASE = 260,
     CHAR_KW = 261,
     CONST = 262,
     CONTINUE = 263,
     DEFAULT = 264,
     DO = 265,
     DOUBLE = 266,
     ELSE = 267,
     ENUM = 268,
     EXTERN = 269,
     FLOAT = 270,
     FOR = 271,
     GOTO = 272,
     IF = 273,
     INT = 275,
     LONG = 276,
     REGISTER = 277,
     RETURN = 278,
     SHORT = 279,
     SIGNED = 280,
     SIZEOF = 281,
     STATIC = 282,
     STRUCT = 283,
     SWITCH = 284,
     TYPEDEF = 285,
     UNION = 287,
     UNSIGNED = 288,
     VOID = 289,
     VOLATILE = 290,
     WHILE = 291,
     TOK_PACKED = 292,
     OFFSET = 293,
     ASM = 294,
     INLINE = 295,
     ATTRIBUTE = 296,
     AUTO = 297,
     TOK_LPAREN = 501,
     TOK_RPAREN = 502,
     TOK_LSQUARE = 503,
     TOK_RSQUARE = 504,
     TOK_LCURLY = 505,
     TOK_RCURLY = 506,
     TOK_COMMA = 507,
     TOK_EQUALS = 508,
     TOK_QMARK = 509,
     TOK_COLON = 510,
     TOK_VERTICAL = 511,
     TOK_CARROT = 512,
     TOK_AMPER = 513,
     TOK_GREATER = 514,
     TOK_LESSER = 515,
     TOK_PLUS = 516,
     TOK_DASH = 517,
     TOK_STAR = 518,
     TOK_PERCENT = 519,
     TOK_SLASH = 520,
     TOK_EXCLAIM = 521,
     TOK_TILDE = 522,
     TOK_PERIOD = 523,
     TOK_SEMICOLON = 524,
     ELLIPSIS = 300,
     ANDAND = 303,
     OROR = 304,
     PLUSPLUS = 309,
     MINUSMINUS = 310,
     STREF = 311,
     PLUS_EQ = 312,
     MINUS_EQ = 313,
     MUL_EQ = 314,
     DIV_EQ = 315,
     MOD_EQ = 316,
     LS_EQ = 317,
     RS_EQ = 318,
     AND_EQ = 319,
     OR_EQ = 320,
     ER_EQ = 321,
     EQUAL = 322,
     BANG_EQUAL = 323,
     GT_EQ = 324,
     LT_EQ = 325,
     LSHIFT = 326,
     RSHIFT = 327,
     NAME = 400,
     T_NAME = 401,
     STRING = 402,
     ICON = 403,
     FCON = 404
   };
#endif
/* Tokens.  */
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




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 131 "./Pgram.y"
{
	TOKENVALUE	token;
	TNODE		*tnode;
}
/* Line 1529 of yacc.c.  */
#line 234 "y.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

