/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



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




/* Copy the first part of user declarations.  */
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



/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 131 "./Pgram.y"
{
	TOKENVALUE	token;
	TNODE		*tnode;
}
/* Line 193 of yacc.c.  */
#line 397 "y.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 410 "y.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   3685

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  91
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  54
/* YYNRULES -- Number of rules.  */
#define YYNRULES  238
/* YYNRULES -- Number of states.  */
#define YYNSTATES  444

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   525

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
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
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,     7,     9,    11,    16,    20,    24,
      27,    30,    32,    36,    41,    45,    49,    54,    58,    63,
      70,    75,    82,    87,    92,    94,    98,   101,   104,   106,
     109,   111,   113,   115,   117,   119,   121,   123,   125,   127,
     129,   131,   133,   135,   137,   139,   141,   143,   145,   147,
     149,   151,   153,   155,   158,   161,   165,   167,   171,   174,
     176,   181,   187,   193,   200,   203,   205,   209,   211,   215,
     221,   227,   232,   237,   244,   251,   257,   263,   266,   269,
     273,   277,   279,   282,   286,   288,   290,   294,   296,   300,
     303,   305,   309,   313,   316,   319,   321,   324,   326,   330,
     333,   336,   338,   342,   345,   347,   349,   351,   354,   356,
     358,   362,   367,   371,   375,   380,   387,   392,   394,   398,
     400,   404,   409,   412,   417,   423,   428,   432,   436,   439,
     442,   445,   447,   449,   457,   463,   469,   477,   487,   496,
     505,   513,   522,   530,   538,   545,   551,   556,   560,   563,
     566,   570,   573,   577,   581,   583,   587,   591,   595,   599,
     603,   607,   611,   615,   619,   623,   627,   631,   635,   639,
     643,   647,   653,   657,   661,   663,   666,   669,   672,   675,
     678,   681,   684,   687,   690,   693,   698,   703,   710,   713,
     718,   722,   726,   728,   733,   737,   739,   741,   743,   747,
     750,   752,   755,   756,   760,   765,   772,   777,   780,   784,
     789,   793,   795,   799,   801,   803,   805,   807,   809,   812,
     814,   817,   819,   821,   823,   825,   827,   829,   831,   833,
     835,   837,   839,   841,   843,   845,   847,   849,   851
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      92,     0,    -1,    92,    93,    -1,    -1,    94,    -1,   116,
      -1,    99,    95,   101,   127,    -1,    99,    95,   127,    -1,
      95,   101,   127,    -1,    95,   127,    -1,   139,    95,    -1,
      96,    -1,    96,    40,    41,    -1,    96,    42,   130,    43,
      -1,    96,    42,    43,    -1,    40,    95,    41,    -1,   138,
      40,   115,    41,    -1,   138,    40,    41,    -1,   138,    40,
      97,    41,    -1,   138,    40,    97,    46,    64,    41,    -1,
      96,    40,    97,    41,    -1,    96,    40,    97,    46,    64,
      41,    -1,   138,    40,    64,    41,    -1,    96,    40,    64,
      41,    -1,    98,    -1,    97,    46,    98,    -1,    99,   121,
      -1,    99,   134,    -1,   100,    -1,    99,   100,    -1,    18,
      -1,     5,    -1,    14,    -1,    10,    -1,    19,    -1,    22,
      -1,    30,    -1,    23,    -1,    31,    -1,     6,    -1,    32,
      -1,    39,    -1,    20,    -1,    25,    -1,    37,    -1,    13,
      -1,    28,    -1,   137,    -1,   109,    -1,   105,    -1,   110,
      -1,   106,    -1,   102,    -1,   101,   102,    -1,   101,    63,
      -1,    99,   103,    63,    -1,   121,    -1,   103,    46,   121,
      -1,   104,   128,    -1,   128,    -1,    12,    44,   107,    45,
      -1,    12,   136,    44,   107,    45,    -1,    12,    44,   107,
      46,    45,    -1,    12,   136,    44,   107,    46,    45,    -1,
      12,   136,    -1,   108,    -1,   107,    46,   108,    -1,   138,
      -1,   138,    47,   130,    -1,    26,   136,    44,   111,    45,
      -1,    29,   136,    44,   111,    45,    -1,    26,    44,   111,
      45,    -1,    29,    44,   111,    45,    -1,    34,    26,   136,
      44,   111,    45,    -1,    34,    29,   136,    44,   111,    45,
      -1,    34,    26,    44,   111,    45,    -1,    34,    29,    44,
     111,    45,    -1,    26,   136,    -1,    29,   136,    -1,    34,
      26,   136,    -1,    34,    29,   136,    -1,   112,    -1,   111,
     112,    -1,    99,   113,    63,    -1,    63,    -1,   114,    -1,
     113,    46,   114,    -1,   121,    -1,   121,    49,   130,    -1,
      49,   130,    -1,   138,    -1,   115,    46,   138,    -1,    99,
     119,    63,    -1,    99,    63,    -1,   119,    63,    -1,    63,
      -1,   117,   118,    -1,   118,    -1,    99,   119,    63,    -1,
      99,    63,    -1,    63,   118,    -1,   120,    -1,   119,    46,
     120,    -1,   121,   126,    -1,   121,    -1,    95,    -1,   122,
      -1,   139,   122,    -1,   123,    -1,   138,    -1,   123,    40,
      41,    -1,   122,    42,   130,    43,    -1,   122,    42,    43,
      -1,    40,   122,    41,    -1,   123,    40,    97,    41,    -1,
     123,    40,    97,    46,    64,    41,    -1,   123,    40,    64,
      41,    -1,   125,    -1,   124,    46,   125,    -1,   130,    -1,
      44,   124,    45,    -1,    44,   124,    46,    45,    -1,    47,
     130,    -1,    47,    44,   124,    45,    -1,    47,    44,   124,
      46,    45,    -1,    44,   117,   104,    45,    -1,    44,   104,
      45,    -1,    44,   117,    45,    -1,    44,    45,    -1,    36,
      63,    -1,   130,    63,    -1,    63,    -1,   127,    -1,    17,
      40,   130,    41,   128,    11,   128,    -1,    17,    40,   130,
      41,   128,    -1,    33,    40,   130,    41,   128,    -1,     9,
     128,    33,    40,   130,    41,    63,    -1,    15,    40,   130,
      63,   130,    63,   130,    41,   128,    -1,    15,    40,   130,
      63,   130,    63,    41,   128,    -1,    15,    40,   130,    63,
      63,   130,    41,   128,    -1,    15,    40,   130,    63,    63,
      41,   128,    -1,    15,    40,    63,   130,    63,   130,    41,
     128,    -1,    15,    40,    63,   130,    63,    41,   128,    -1,
      15,    40,    63,    63,   130,    41,   128,    -1,    15,    40,
      63,    63,    41,   128,    -1,    27,    40,   130,    41,   128,
      -1,     4,   130,    49,   128,    -1,     8,    49,   128,    -1,
       3,    63,    -1,     7,    63,    -1,    21,   130,    63,    -1,
      21,    63,    -1,    16,   136,    63,    -1,   136,    49,   128,
      -1,   130,    -1,   129,    46,   130,    -1,   130,   143,   130,
      -1,   130,   144,   130,    -1,   130,    46,   130,    -1,   130,
      55,   130,    -1,   130,    56,   130,    -1,   130,    57,   130,
      -1,   130,    59,   130,    -1,   130,    58,   130,    -1,   130,
      84,   130,    -1,   130,    85,   130,    -1,   130,    50,   130,
      -1,   130,    51,   130,    -1,   130,    52,   130,    -1,   130,
      65,   130,    -1,   130,    66,   130,    -1,   130,    48,   130,
      49,   130,    -1,   130,   142,   130,    -1,   130,    47,   130,
      -1,   131,    -1,   131,    67,    -1,   131,    68,    -1,    67,
     131,    -1,    68,   131,    -1,    52,   131,    -1,    61,   131,
      -1,    60,   131,    -1,    56,   131,    -1,    55,   131,    -1,
      24,   131,    -1,    40,   133,    41,   131,    -1,    24,    40,
     133,    41,    -1,    35,    40,   136,    46,   135,    41,    -1,
     139,   131,    -1,   131,    42,   130,    43,    -1,   131,    69,
     136,    -1,   131,    62,   136,    -1,   138,    -1,   131,    40,
     129,    41,    -1,   131,    40,    41,    -1,    89,    -1,    90,
      -1,   132,    -1,    40,   130,    41,    -1,   132,    88,    -1,
      88,    -1,    99,   134,    -1,    -1,   134,    40,    41,    -1,
     134,    40,    97,    41,    -1,   134,    40,    97,    46,    64,
      41,    -1,   134,    40,    64,    41,    -1,   139,   134,    -1,
     134,    42,    43,    -1,   134,    42,   130,    43,    -1,    40,
     134,    41,    -1,   138,    -1,   135,    62,   138,    -1,   138,
      -1,   137,    -1,    87,    -1,    86,    -1,    57,    -1,    57,
     140,    -1,   141,    -1,   140,   141,    -1,     6,    -1,    32,
      -1,    70,    -1,    71,    -1,    72,    -1,    73,    -1,    74,
      -1,    75,    -1,    76,    -1,    77,    -1,    78,    -1,    79,
      -1,    82,    -1,    83,    -1,    53,    -1,    54,    -1,    80,
      -1,    81,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
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

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "BREAK", "CASE", "CHAR_KW", "CONST",
  "CONTINUE", "DEFAULT", "DO", "DOUBLE", "ELSE", "ENUM", "EXTERN", "FLOAT",
  "FOR", "GOTO", "IF", "INT", "LONG", "REGISTER", "RETURN", "SHORT",
  "SIGNED", "SIZEOF", "STATIC", "STRUCT", "SWITCH", "TYPEDEF", "UNION",
  "UNSIGNED", "VOID", "VOLATILE", "WHILE", "TOK_PACKED", "OFFSET", "ASM",
  "INLINE", "ATTRIBUTE", "AUTO", "TOK_LPAREN", "TOK_RPAREN", "TOK_LSQUARE",
  "TOK_RSQUARE", "TOK_LCURLY", "TOK_RCURLY", "TOK_COMMA", "TOK_EQUALS",
  "TOK_QMARK", "TOK_COLON", "TOK_VERTICAL", "TOK_CARROT", "TOK_AMPER",
  "TOK_GREATER", "TOK_LESSER", "TOK_PLUS", "TOK_DASH", "TOK_STAR",
  "TOK_PERCENT", "TOK_SLASH", "TOK_EXCLAIM", "TOK_TILDE", "TOK_PERIOD",
  "TOK_SEMICOLON", "ELLIPSIS", "ANDAND", "OROR", "PLUSPLUS", "MINUSMINUS",
  "STREF", "PLUS_EQ", "MINUS_EQ", "MUL_EQ", "DIV_EQ", "MOD_EQ", "LS_EQ",
  "RS_EQ", "AND_EQ", "OR_EQ", "ER_EQ", "EQUAL", "BANG_EQUAL", "GT_EQ",
  "LT_EQ", "LSHIFT", "RSHIFT", "NAME", "T_NAME", "STRING", "ICON", "FCON",
  "$accept", "module", "module_item", "function", "func_spec",
  "complex_term", "ansi_params", "ansi_param", "classtypes", "classtype",
  "param_dcls", "param_dcl", "parameter_defs", "stmt_list", "enum_dcl",
  "enum_ref", "moe_list", "moe", "struct_dcl", "struct_ref", "mem_list",
  "member", "mem_dcls", "mem_dcl", "names", "init_dcl", "indata_dcls",
  "indata_dcl", "data_specs", "data_spec", "data_item", "nfunc_spec",
  "d_i_term", "init_list", "init_item", "initializer", "compstmt", "stmt",
  "exp_list", "expr", "term", "strings", "cast_type", "null_dcl", "mname",
  "tname_or_name", "t_name", "name", "star", "qualifiers", "qualifier",
  "asop", "relop", "equop", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   525,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,   269,   270,   271,   272,   273,   275,   276,
     277,   278,   279,   280,   281,   282,   283,   284,   285,   287,
     288,   289,   290,   291,   292,   293,   294,   295,   296,   297,
     501,   502,   503,   504,   505,   506,   507,   508,   509,   510,
     511,   512,   513,   514,   515,   516,   517,   518,   519,   520,
     521,   522,   523,   524,   300,   303,   304,   309,   310,   311,
     312,   313,   314,   315,   316,   317,   318,   319,   320,   321,
     322,   323,   324,   325,   326,   327,   400,   401,   402,   403,
     404
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
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

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
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

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
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
     183,   182,   181,   180,     0,   100,   177,   178,    99,     0,
     126,    58,   127,     0,    96,     0,     0,     0,     0,     0,
       0,   235,   236,     0,     0,     0,     0,     0,   130,     0,
       0,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   237,   238,   233,   234,     0,     0,     0,     0,     0,
       0,     0,     0,   175,   176,     0,   199,     0,   188,     0,
      55,    23,    20,     0,   202,    26,    27,   202,    13,     6,
       0,     0,   117,   119,   111,   116,   114,     0,    22,    18,
       0,    16,     0,    62,    66,    68,    61,     0,    89,     0,
      83,     0,    69,    70,    75,     0,    76,     0,     0,   147,
       0,     0,     0,   152,     0,   150,     0,     0,     0,     0,
     202,   201,   202,   198,     0,    98,   125,   158,   173,     0,
     166,   167,   168,   159,   160,   161,   163,   162,   169,   170,
     164,   165,   172,   156,   157,   194,     0,   154,     0,   191,
     190,   153,    57,     0,    25,     0,     0,     0,   207,     0,
     123,     0,     0,     0,    91,    63,    86,    88,    73,    74,
     146,     0,     0,     0,     0,     0,   186,     0,     0,     0,
     185,     0,   193,     0,   189,    21,   210,   203,     0,     0,
     208,     0,   120,     0,   124,   118,   115,    19,     0,     0,
       0,     0,     0,     0,   134,   145,   135,     0,   211,   171,
     155,   206,   204,     0,   209,   121,     0,   144,     0,     0,
       0,     0,     0,     0,     0,   187,     0,     0,   136,   143,
     142,     0,   140,     0,     0,     0,   133,   212,   205,   141,
     139,   138,     0,   137
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    29,    30,   142,    32,   150,   151,    89,    34,
      66,    67,   143,   130,    35,    36,    84,    85,    37,    38,
      90,    91,   177,   178,   170,    39,   131,   215,    40,    41,
      42,    43,    44,   281,   282,    78,   133,   134,   346,   135,
     136,   137,   208,   355,   407,   138,    45,   155,   141,    62,
      63,   257,   258,   259
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -248
static const yytype_int16 yypact[] =
{
    -248,  1019,  -248,  -248,  -248,  -248,   -17,  -248,  -248,  -248,
    -248,  -248,  -248,  -248,  -248,    -8,  -248,    55,  -248,  -248,
    -248,   160,  -248,  -248,    33,    11,  -248,  -248,  -248,  -248,
    -248,   219,    76,  1141,  -248,  -248,  -248,  -248,  -248,  -248,
      35,  -248,   -34,   -13,    10,  -248,    60,    33,   -51,    64,
    -248,  -248,  1825,    83,  1825,    92,    58,    66,    16,    -4,
    -248,  -248,    11,  -248,   688,  1255,  1375,  -248,  -248,  1417,
     432,  -248,   219,  -248,    48,    33,  -248,  2132,  -248,  2171,
    1454,  1297,  -248,   -13,   156,  -248,   114,   -51,  -248,  1177,
    1497,  -248,  1825,  1533,  1825,  1825,   136,  1825,   168,  -248,
    -248,  -248,   107,  2556,   141,   174,   928,   177,   120,   188,
    2195,  2595,   190,   196,   206,   202,  1055,  -248,  2556,  2556,
    2556,  2556,  2556,  2045,  2556,  2556,  -248,  -248,  -248,  1219,
     538,   776,  -248,  -248,  -248,  3213,   243,   171,   220,   225,
     245,  2556,  -248,   101,  -248,  -248,  -248,  -248,  -248,   251,
     109,  -248,  1334,  -248,  3044,  -248,  1375,  -248,  -248,  -248,
    2242,  3492,  -248,  3087,  -248,   254,   128,  -248,   256,   149,
     151,  -248,  -248,   -19,  2556,   181,  2556,   102,  -248,   252,
    -248,  -248,  1563,  -248,  1593,  1623,  1825,  1653,  1825,  -248,
    3253,  -248,   928,  -248,   267,  2256,   239,  2556,  -248,  3293,
    1055,   243,  2556,  2556,   120,  -248,  1689,  2641,   263,   243,
     243,   243,   243,   243,  1855,  -248,   243,   243,  -248,   103,
    -248,  -248,  -248,   852,  -248,  2556,  2556,  2556,  2556,  2556,
    2556,  -248,  -248,  2556,  2556,  2556,  2556,  2556,  -248,  2556,
    2556,  -248,  -248,  -248,  -248,  -248,  -248,  -248,  -248,  -248,
    -248,  -248,  -248,  -248,  -248,  2556,  2556,  2556,  2556,  2556,
    2298,  2556,   120,  -248,  -248,   120,  -248,   928,   243,    33,
    -248,  -248,  -248,  1885,    36,  -248,   137,    36,  -248,  -248,
    2242,   189,  -248,  3492,  -248,  -248,  -248,  1925,  -248,  -248,
    1965,  -248,   -51,  -248,  -248,  3492,  -248,   -11,  3492,     9,
    -248,  2556,  -248,  -248,  -248,  1725,  -248,  1755,   928,  -248,
     268,  2312,  3333,  -248,  2686,  -248,   273,  2731,  2776,   269,
     118,   137,   118,  -248,  2556,  -248,  -248,  3492,  3492,  3373,
    1045,  3600,   920,   157,   157,  -248,  -248,  -248,  3582,  3566,
     231,   231,  3492,   126,  2187,  -248,   152,  3492,  3130,  -248,
    -248,  -248,  -248,   279,  -248,   179,  1785,  2354,   137,   226,
    -248,  2054,   281,   282,  -248,  -248,  -248,  3492,  -248,  -248,
    -248,  2556,  2393,  3413,  2417,   928,   578,   928,   928,   -51,
     243,  2556,  -248,  2556,  -248,  -248,  -248,  -248,   285,   159,
    -248,  3173,  -248,  2093,  -248,  -248,  -248,  -248,  2821,   928,
    2866,  2469,  2493,  3453,   298,  -248,  -248,    -2,  -248,  3530,
    3492,  -248,  -248,  2005,  -248,  -248,   265,  -248,   928,   928,
    2911,   928,  2956,  2532,   928,  -248,   -51,   288,  -248,  -248,
    -248,   928,  -248,   928,   928,  3001,  -248,  -248,  -248,  -248,
    -248,  -248,   928,  -248
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -248,  -248,  -248,  -248,     7,  -248,   -77,  -245,    40,   -12,
     260,   -59,  -248,   186,  -248,  -248,   248,  -158,  -248,  -248,
     -10,   -25,  -248,    37,  -248,  -248,  -248,   -40,   -14,   266,
     -56,   -22,  -248,    63,  -247,  -248,    17,  -100,  -248,   276,
      13,  -248,   138,  -134,  -248,     5,    -5,    -1,   292,  -248,
     278,  -248,  -248,  -248
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -215
static const yytype_int16 yytable[] =
{
      46,    50,    59,   166,   169,    51,   194,   146,    31,   144,
      50,    49,    50,    77,    51,   294,    51,    60,   276,    74,
      53,    73,    55,    46,   132,    83,   293,    48,   354,    79,
     221,    58,    46,   179,   365,    27,    52,   100,    79,   425,
      72,    33,   354,    61,    93,   354,    46,    86,    68,    24,
      80,    50,    50,    73,    82,    51,    51,    99,   176,   139,
     426,    96,    98,   140,    46,   181,    25,    27,   181,    27,
      28,    65,   321,    24,    46,    27,   274,    73,    27,    28,
     171,    75,   182,   147,   184,   185,    86,   187,    46,   157,
      25,   224,   309,    25,    75,    27,   275,   146,    76,    54,
      81,    50,    95,    50,   129,   140,    65,    51,    87,   152,
      97,   158,    65,   196,   395,   219,    69,    73,    70,    27,
     152,   152,    27,   221,   201,    50,   139,    92,    46,   140,
     140,   209,   210,   211,   212,   213,    94,   216,   217,   294,
      73,    27,    28,   358,    27,    28,   395,   269,   299,    75,
     272,    46,    27,    28,   268,   273,   206,   181,   320,   181,
     181,   174,   181,   129,   270,   300,   325,   351,   354,   286,
     189,   129,    86,   279,   287,    25,   305,   356,   307,   357,
     186,   233,   234,   235,   236,   237,    56,    50,   358,    57,
     289,   140,   291,   382,    73,   290,    65,   292,   383,    50,
     412,   172,   173,    51,   191,   413,    27,    28,   370,   319,
     255,   256,   188,   352,   235,   236,   237,   195,    50,   356,
     386,   357,   140,   192,     3,     4,   296,   297,   197,     5,
     202,     6,     7,     8,   360,   361,   203,     9,    10,    11,
     206,    12,    13,   179,    14,    15,   204,    16,    17,    18,
      19,    20,    59,    21,   129,    83,    22,    50,    23,   266,
      50,    51,    50,    64,    51,   205,   140,   349,    46,   267,
     350,   392,   393,    46,  -214,   404,    46,   405,   406,   389,
     181,    58,   181,   260,    82,   261,   233,   234,   235,   236,
     237,   364,   271,    47,  -213,   285,    86,   288,    46,   417,
     310,   301,   313,    50,   324,   262,    28,   140,   371,   424,
     263,   264,   265,   152,   376,   379,    47,   223,   429,   430,
     385,   432,   396,   397,   436,    47,   411,   152,   428,   438,
     152,   439,   156,   440,   441,   175,   366,   380,   316,    47,
     101,   159,   443,   359,     0,     0,   154,     0,     0,     0,
       0,     0,     0,   161,     0,   163,     0,    47,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    47,     0,     0,
      50,     0,    50,    50,   140,     0,   140,   140,   408,   190,
       0,    47,     0,     0,     0,     0,   199,     0,     0,   380,
       0,     0,   207,     0,    50,     0,   152,     0,   140,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    50,    50,     0,    50,   140,   140,    50,
     140,    47,     0,   140,     0,   437,    50,     0,    50,    50,
     140,     0,   140,   140,     0,     0,   283,    50,     0,     0,
       0,   140,     0,     0,   277,     0,     0,     0,     0,     0,
     295,     0,   298,   152,     0,     0,   111,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   114,     0,     0,
       0,   312,   116,   314,     0,   153,   207,     0,   317,   318,
       0,     0,     0,     0,   118,     0,     0,   119,   120,    25,
       0,     0,   121,   122,     0,     0,     0,     0,   322,   124,
     125,   327,   328,   329,   330,   331,   332,     0,     0,   333,
     334,   335,   336,   337,     0,   338,   339,     0,    27,     0,
     126,   127,   128,     0,     0,     0,     0,     0,     0,     0,
       0,   340,   341,   342,   343,   344,   347,   348,     0,     0,
       0,   102,   103,     0,     0,   104,   105,   106,     0,     0,
       0,     0,     0,   107,   108,   109,   283,     0,     0,   110,
       0,    47,   111,     0,     0,   112,   277,     0,     0,   277,
       0,   113,     0,   114,   115,     0,     0,   367,   116,     0,
       0,     0,    64,   220,     0,     0,     0,   373,     0,     0,
     118,    47,     0,   119,   120,    25,     0,     0,   121,   122,
       0,   193,   111,     0,     0,   124,   125,     0,     0,     0,
       0,     0,   322,   114,   322,     0,     0,     0,   116,     0,
       0,     0,     0,     0,    27,    28,   126,   127,   128,     0,
       0,     0,     0,   391,     0,     0,     0,   283,   121,   122,
       0,     0,     0,     0,     0,   124,   125,   398,   400,     0,
     403,     0,     0,     0,     0,     0,     0,   409,     0,   410,
       0,     0,     0,     0,    27,     0,   126,   127,   128,   283,
       0,     0,     0,     0,     0,     0,     0,   420,   422,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   102,   103,     3,     4,   104,   105,   106,     5,   435,
       6,     7,     8,   107,   108,   109,     9,    10,    11,   110,
      12,    13,   111,    14,    15,   112,    16,    17,    18,    19,
      20,   113,    21,   114,   115,    22,     0,    23,   116,     0,
       0,     0,    64,   117,     0,     0,     0,     0,     0,     0,
     118,     0,     0,   119,   120,    25,     0,     0,   121,   122,
       0,   123,     0,     0,     0,   124,   125,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    27,    28,   126,   127,   128,   102,
     103,     3,     4,   104,   105,   106,     5,     0,     6,     7,
       8,   107,   108,   109,     9,    10,    11,   110,    12,    13,
     111,    14,    15,   112,    16,    17,    18,    19,    20,   113,
      21,   114,   115,    22,     0,    23,   116,     0,     0,     0,
      64,   222,     0,     0,     0,     0,     0,     0,   118,     0,
       0,   119,   120,    25,     0,     0,   121,   122,     0,   123,
       0,     0,     0,   124,   125,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   102,   103,     0,     0,   104,
     105,   106,    27,    28,   126,   127,   128,   107,   108,   109,
       0,     0,     0,   110,     0,     0,   111,     0,     0,   112,
       0,     0,     0,     0,     0,   113,     0,   114,   115,     0,
       0,     0,   116,     0,     0,     0,    64,   326,     0,     0,
       0,     0,     0,     0,   118,     0,     0,   119,   120,    25,
       0,     0,   121,   122,     0,   193,     0,     0,     0,   124,
     125,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   102,   103,     0,     0,   104,   105,   106,    27,    28,
     126,   127,   128,   107,   108,   109,     0,     0,     0,   110,
       0,     0,   111,     0,     0,   112,     0,     0,     0,     0,
       0,   113,     0,   114,   115,     0,     0,     0,   116,     0,
       0,     0,    64,   231,   232,   233,   234,   235,   236,   237,
     118,     0,     0,   119,   120,    25,     0,     0,   121,   122,
       0,   193,     0,     0,     0,   124,   125,     0,     0,     0,
     251,   252,   253,   254,   255,   256,     0,     0,     0,     0,
       0,     0,     0,     0,    27,    28,   126,   127,   128,     2,
       0,     0,     0,     0,     3,     4,     0,     0,     0,     5,
       0,     6,     7,     8,     0,     0,     0,     9,    10,    11,
       0,    12,    13,     0,    14,    15,     0,    16,    17,    18,
      19,    20,     0,    21,     0,     0,    22,     0,    23,    24,
       3,     4,     0,     0,     0,     5,     0,     6,     7,     8,
       0,     0,     0,     9,    10,    11,    25,    12,    13,   111,
      14,    15,    26,    16,    17,    18,    19,    20,     0,    21,
     114,     0,    22,     0,    23,   116,   229,   230,   231,   232,
     233,   234,   235,   236,   237,    27,    28,   118,     0,     0,
     119,   120,    25,     0,     0,   121,   122,     0,     0,     0,
       0,     0,   124,   125,     0,   251,   252,   253,   254,   255,
     256,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    27,    28,   126,   127,   128,     3,     4,     0,     0,
       0,     5,     0,     6,     7,     8,     0,     0,     0,     9,
      10,    11,     0,    12,    13,     0,    14,    15,     0,    16,
      17,    18,    19,    20,     0,    21,     0,     0,    22,     0,
      23,    24,     3,     4,     0,     0,     0,     5,     0,     6,
       7,     8,     0,     0,     0,     9,    10,    11,    25,    12,
      13,     0,    14,    15,    71,    16,    17,    18,    19,    20,
       0,    21,     0,     0,    22,     0,    23,    24,     0,     0,
       0,     0,     0,     0,     3,     4,   176,    27,    28,     5,
       0,     6,     7,     8,    25,     0,     0,     9,    10,    11,
       0,    12,    13,     0,    14,    15,     0,    16,    17,    18,
      19,    20,     0,    21,     0,     0,    22,     0,    23,    24,
       3,     4,     0,    27,    28,     5,     0,     6,     7,     8,
       0,     0,     0,     9,    10,    11,    25,    12,    13,     0,
      14,    15,   218,    16,    17,    18,    19,    20,     0,    21,
       0,     0,    22,     0,    23,    24,     0,     0,     0,     0,
       0,     0,     3,     4,     0,    27,    28,     5,     0,     6,
       7,     8,    25,     0,     0,     9,    10,    11,     0,    12,
      13,     0,    14,    15,     0,    16,    17,    18,    19,    20,
       0,    21,     0,     0,    22,     0,    23,     0,   167,     3,
       4,    27,    28,     0,     5,     0,     6,     7,     8,     0,
       0,     0,     9,    10,    11,     0,    12,    13,     0,    14,
      15,   168,    16,    17,    18,    19,    20,     0,    21,     0,
       0,    22,     0,    23,   274,     0,     0,     0,     0,     0,
       3,     4,     0,    27,    28,     5,     0,     6,     7,     8,
       0,    25,     0,     9,    10,    11,     0,    12,    13,     0,
      14,    15,     0,    16,    17,    18,    19,    20,     0,    21,
       0,     0,    22,     0,    23,     0,     0,     0,     0,    64,
      27,    28,     3,     4,     0,     0,     0,     5,     0,     6,
       7,     8,     0,     0,     0,     9,    10,    11,   145,    12,
      13,     0,    14,    15,     0,    16,    17,    18,    19,    20,
       0,    21,     0,     0,    22,     0,    23,     0,   148,     3,
       4,     0,    28,     0,     5,     0,     6,     7,     8,     0,
       0,     0,     9,    10,    11,     0,    12,    13,     0,    14,
      15,   149,    16,    17,    18,    19,    20,     0,    21,     0,
       0,    22,     0,    23,     0,   164,     0,     0,     0,     0,
       0,     0,     3,     4,    28,     0,     0,     5,     0,     6,
       7,     8,     0,     0,     0,     9,    10,    11,   165,    12,
      13,     0,    14,    15,     0,    16,    17,    18,    19,    20,
       0,    21,     0,     0,    22,     0,    23,     0,     3,     4,
       0,    28,   180,     5,     0,     6,     7,     8,     0,     0,
       0,     9,    10,    11,     0,    12,    13,     0,    14,    15,
      88,    16,    17,    18,    19,    20,     0,    21,     3,     4,
      22,     0,    23,     5,     0,     6,     7,     8,   183,     0,
       0,     9,    10,    11,    28,    12,    13,     0,    14,    15,
       0,    16,    17,    18,    19,    20,    88,    21,     3,     4,
      22,     0,    23,     5,     0,     6,     7,     8,   302,     0,
       0,     9,    10,    11,     0,    12,    13,     0,    14,    15,
      28,    16,    17,    18,    19,    20,    88,    21,     3,     4,
      22,     0,    23,     5,     0,     6,     7,     8,   303,     0,
       0,     9,    10,    11,     0,    12,    13,     0,    14,    15,
      28,    16,    17,    18,    19,    20,    88,    21,     3,     4,
      22,     0,    23,     5,     0,     6,     7,     8,   304,     0,
       0,     9,    10,    11,     0,    12,    13,     0,    14,    15,
      28,    16,    17,    18,    19,    20,    88,    21,     0,     0,
      22,     0,    23,     0,     3,     4,     0,     0,   306,     5,
       0,     6,     7,     8,     0,     0,     0,     9,    10,    11,
      28,    12,    13,     0,    14,    15,    88,    16,    17,    18,
      19,    20,     0,    21,     0,     0,    22,     0,    23,   320,
       3,     4,     0,     0,     0,     5,     0,     6,     7,     8,
      28,     0,     0,     9,    10,    11,    25,    12,    13,     0,
      14,    15,     0,    16,    17,    18,    19,    20,     0,    21,
       3,     4,    22,     0,    23,     5,     0,     6,     7,     8,
     368,     0,     0,     9,    10,    11,    28,    12,    13,     0,
      14,    15,     0,    16,    17,    18,    19,    20,    88,    21,
       3,     4,    22,     0,    23,     5,     0,     6,     7,     8,
     369,     0,     0,     9,    10,    11,     0,    12,    13,     0,
      14,    15,    28,    16,    17,    18,    19,    20,    88,    21,
       0,     0,    22,     0,    23,     0,   387,     0,     0,     0,
       3,     4,     0,     0,     0,     5,     0,     6,     7,     8,
       0,     0,    28,     9,    10,    11,     0,    12,    13,   388,
      14,    15,     0,    16,    17,    18,    19,    20,     0,    21,
       3,     4,    22,     0,    23,     5,     0,     6,     7,     8,
       0,     0,    28,     9,    10,    11,     0,    12,    13,     0,
      14,    15,     0,    16,    17,    18,    19,    20,    88,    21,
       3,     4,    22,     0,    23,     5,     0,     6,     7,     8,
       0,     0,     0,     9,    10,    11,     0,    12,    13,     0,
      14,    15,    28,    16,    17,    18,    19,    20,   214,    21,
       0,     0,    22,     0,    23,     0,     0,     0,     0,     0,
       3,     4,     0,     0,     0,     5,     0,     6,     7,     8,
       0,     0,    28,     9,    10,    11,     0,    12,    13,   353,
      14,    15,     0,    16,    17,    18,    19,    20,     0,    21,
       0,     0,    22,     0,    23,     0,     0,     0,     0,     0,
       3,     4,    28,     0,     0,     5,     0,     6,     7,     8,
       0,     0,     0,     9,    10,    11,     0,    12,    13,   362,
      14,    15,     0,    16,    17,    18,    19,    20,     0,    21,
       0,     0,    22,     0,    23,     0,     0,     0,     0,     0,
       3,     4,    28,     0,     0,     5,     0,     6,     7,     8,
       0,     0,     0,     9,    10,    11,     0,    12,    13,   363,
      14,    15,     0,    16,    17,    18,    19,    20,     0,    21,
       0,     0,    22,     0,    23,     0,     0,     0,     0,     0,
       3,     4,    28,     0,     0,     5,     0,     6,     7,     8,
       0,     0,     0,     9,    10,    11,     0,    12,    13,   427,
      14,    15,     0,    16,    17,    18,    19,    20,   111,    21,
       0,     0,    22,     0,    23,     0,     0,     0,     0,   114,
       0,     0,    28,     0,   116,     0,     0,     0,   280,   394,
       0,     0,     0,     0,     0,     0,   118,     0,     0,   119,
     120,    25,     0,     0,   121,   122,     0,   111,     0,     0,
       0,   124,   125,     0,     0,     0,     0,     0,   114,     0,
       0,     0,    28,   116,     0,     0,     0,   280,   415,     0,
      27,     0,   126,   127,   128,   118,     0,     0,   119,   120,
      25,     0,     0,   121,   122,     0,   111,     0,     0,     0,
     124,   125,     0,     0,     0,     0,     0,   114,     0,     0,
       0,     0,   116,     0,     0,     0,   160,     0,     0,    27,
       0,   126,   127,   128,   118,     0,     0,   119,   120,    25,
       0,     0,   121,   122,     0,   111,     0,     0,     0,   124,
     125,     0,     0,     0,     0,     0,   114,     0,     0,     0,
       0,   116,     0,     0,   162,     0,     0,     0,    27,   111,
     126,   127,   128,   118,     0,     0,   119,   120,    25,     0,
     114,   121,   122,     0,     0,   116,     0,     0,   124,   125,
     231,   232,   233,   234,   235,   236,   237,   118,     0,     0,
     119,   120,    25,     0,     0,   121,   122,    27,   198,   126,
     127,   128,   124,   125,     0,     0,   111,     0,     0,   253,
     254,   255,   256,     0,     0,     0,     0,   114,     0,     0,
     111,    27,   116,   126,   127,   128,   280,     0,     0,     0,
       0,   114,     0,     0,   118,     0,   116,   119,   120,    25,
       0,     0,   121,   122,     0,     0,     0,     0,   118,   124,
     125,   119,   120,    25,     0,     0,   121,   122,     0,   311,
       0,     0,   111,   124,   125,     0,     0,     0,    27,     0,
     126,   127,   128,   114,     0,     0,   111,     0,   116,   345,
       0,     0,    27,     0,   126,   127,   128,   114,     0,     0,
     118,     0,   116,   119,   120,    25,     0,     0,   121,   122,
       0,     0,     0,     0,   118,   124,   125,   119,   120,    25,
       0,     0,   121,   122,     0,   372,     0,     0,   111,   124,
     125,     0,     0,     0,    27,     0,   126,   127,   128,   114,
       0,     0,     0,     0,   116,     0,     0,   390,    27,     0,
     126,   127,   128,     0,     0,     0,   118,     0,     0,   119,
     120,    25,     0,     0,   121,   122,     0,   111,     0,     0,
       0,   124,   125,     0,     0,     0,     0,     0,   114,     0,
       0,     0,     0,   116,   399,     0,     0,     0,     0,     0,
      27,   111,   126,   127,   128,   118,     0,     0,   119,   120,
      25,     0,   114,   121,   122,     0,     0,   116,     0,     0,
     124,   125,     0,     0,     0,     0,     0,     0,     0,   118,
       0,     0,   119,   120,    25,     0,     0,   121,   122,    27,
     402,   126,   127,   128,   124,   125,     0,     0,     0,     0,
       0,     0,     0,   111,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    27,   114,   126,   127,   128,     0,   116,
     419,     0,     0,     0,     0,     0,     0,   111,     0,     0,
       0,   118,     0,     0,   119,   120,    25,     0,   114,   121,
     122,     0,     0,   116,   421,     0,   124,   125,     0,     0,
       0,     0,     0,     0,     0,   118,     0,     0,   119,   120,
      25,     0,     0,   121,   122,    27,   111,   126,   127,   128,
     124,   125,     0,     0,     0,     0,     0,   114,     0,     0,
       0,     0,   116,   434,     0,     0,     0,     0,     0,    27,
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
       0,    27,   323,   126,   127,   128,     0,   225,   226,   227,
       0,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,     0,     0,     0,     0,     0,   239,   240,     0,     0,
       0,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   375,     0,     0,
       0,     0,   225,   226,   227,     0,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,     0,     0,     0,     0,
       0,   239,   240,     0,     0,     0,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   377,     0,     0,     0,     0,   225,   226,   227,
       0,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,     0,     0,     0,     0,     0,   239,   240,     0,     0,
       0,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   378,     0,     0,
       0,     0,   225,   226,   227,     0,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,     0,     0,     0,     0,
       0,   239,   240,     0,     0,     0,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   416,     0,     0,     0,     0,   225,   226,   227,
       0,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,     0,     0,     0,     0,     0,   239,   240,     0,     0,
       0,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   418,     0,     0,
       0,     0,   225,   226,   227,     0,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,     0,     0,     0,     0,
       0,   239,   240,     0,     0,     0,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   431,     0,     0,     0,     0,   225,   226,   227,
       0,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,     0,     0,     0,     0,     0,   239,   240,     0,     0,
       0,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   433,     0,     0,
       0,     0,   225,   226,   227,     0,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,     0,     0,     0,     0,
       0,   239,   240,     0,     0,     0,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   442,     0,     0,     0,     0,   225,   226,   227,
       0,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,     0,     0,     0,     0,     0,   239,   240,     0,     0,
       0,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   278,     0,     0,
     225,   226,   227,     0,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,     0,     0,     0,     0,     0,   239,
     240,     0,     0,     0,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     284,     0,     0,   225,   226,   227,     0,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,     0,     0,     0,
       0,     0,   239,   240,     0,     0,     0,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   384,     0,     0,   225,   226,   227,     0,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
       0,     0,     0,     0,     0,   239,   240,     0,     0,     0,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   414,     0,     0,   225,
     226,   227,     0,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,     0,     0,     0,     0,     0,   239,   240,
       0,     0,     0,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   225,
     226,   227,     0,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,     0,     0,     0,   238,     0,   239,   240,
       0,     0,     0,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   225,
     226,   227,   308,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,     0,     0,     0,     0,     0,   239,   240,
       0,     0,     0,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   225,
     226,   227,     0,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,     0,     0,     0,   315,     0,   239,   240,
       0,     0,     0,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   225,
     226,   227,     0,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,     0,     0,     0,   374,     0,   239,   240,
       0,     0,     0,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   225,
     226,   227,   381,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,     0,     0,     0,     0,     0,   239,   240,
       0,     0,     0,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   225,
     226,   227,     0,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,     0,     0,     0,   401,     0,   239,   240,
       0,     0,     0,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   225,
     226,   227,     0,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,     0,     0,     0,   423,     0,   239,   240,
       0,     0,     0,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   226,
     227,     0,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,     0,     0,     0,     0,     0,   239,   240,     0,
       0,     0,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   227,     0,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
       0,     0,     0,     0,     0,   239,   240,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     251,   252,   253,   254,   255,   256,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,     0,     0,     0,     0,
       0,   239,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,     0,     0,     0,     0,   251,   252,   253,   254,
     255,   256,   230,   231,   232,   233,   234,   235,   236,   237,
       0,     0,   251,   252,   253,   254,   255,   256,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     251,   252,   253,   254,   255,   256
};

static const yytype_int16 yycheck[] =
{
       1,     6,    24,    80,    81,     6,   106,    66,     1,    65,
      15,     6,    17,    47,    15,   173,    17,     6,   152,    33,
      15,    33,    17,    24,    64,    47,    45,    44,   273,    42,
     130,    24,    33,    89,    45,    86,    44,    41,    42,    41,
      33,     1,   287,    32,    54,   290,    47,    48,    31,    40,
      40,    56,    57,    65,    47,    56,    57,    41,    49,    64,
      62,    56,    57,    64,    65,    90,    57,    86,    93,    86,
      87,    31,   206,    40,    75,    86,    40,    89,    86,    87,
      81,    46,    92,    66,    94,    95,    87,    97,    89,    72,
      57,   131,   192,    57,    46,    86,   152,   156,    63,    44,
      40,   106,    44,   108,    64,   106,    66,   108,    44,    69,
      44,    63,    72,   108,   361,   129,    40,   129,    42,    86,
      80,    81,    86,   223,   111,   130,   131,    44,   129,   130,
     131,   118,   119,   120,   121,   122,    44,   124,   125,   297,
     152,    86,    87,   277,    86,    87,   393,    46,    46,    46,
      41,   152,    86,    87,   141,    46,   116,   182,    40,   184,
     185,    47,   187,   123,    63,    63,    63,   267,   413,    41,
      63,   131,   173,   156,    46,    57,   186,    40,   188,    42,
      44,    55,    56,    57,    58,    59,    26,   192,   322,    29,
      41,   192,    41,    41,   206,    46,   156,    46,    46,   204,
      41,    45,    46,   204,    63,    46,    86,    87,   308,   204,
      84,    85,    44,   269,    57,    58,    59,    40,   223,    40,
      41,    42,   223,    49,     5,     6,    45,    46,    40,    10,
      40,    12,    13,    14,    45,    46,    40,    18,    19,    20,
     200,    22,    23,   299,    25,    26,    40,    28,    29,    30,
      31,    32,   274,    34,   214,   277,    37,   262,    39,    88,
     265,   262,   267,    44,   265,    63,   267,   262,   269,    49,
     265,    45,    46,   274,    49,   375,   277,   377,   378,   356,
     305,   274,   307,    40,   277,    42,    55,    56,    57,    58,
      59,   292,    41,     1,    49,    41,   297,    41,   299,   399,
      33,    49,    63,   308,    41,    62,    87,   308,    40,    11,
      67,    68,    69,   273,    41,    46,    24,   131,   418,   419,
      41,   421,    41,    41,   424,    33,    41,   287,    63,    41,
     290,   431,    72,   433,   434,    87,   299,   324,   200,    47,
      62,    75,   442,   280,    -1,    -1,    70,    -1,    -1,    -1,
      -1,    -1,    -1,    77,    -1,    79,    -1,    65,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,    -1,    -1,
     375,    -1,   377,   378,   375,    -1,   377,   378,   379,   103,
      -1,    89,    -1,    -1,    -1,    -1,   110,    -1,    -1,   376,
      -1,    -1,   116,    -1,   399,    -1,   356,    -1,   399,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   418,   419,    -1,   421,   418,   419,   424,
     421,   129,    -1,   424,    -1,   426,   431,    -1,   433,   434,
     431,    -1,   433,   434,    -1,    -1,   160,   442,    -1,    -1,
      -1,   442,    -1,    -1,   152,    -1,    -1,    -1,    -1,    -1,
     174,    -1,   176,   413,    -1,    -1,    24,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,    -1,    -1,
      -1,   195,    40,   197,    -1,    43,   200,    -1,   202,   203,
      -1,    -1,    -1,    -1,    52,    -1,    -1,    55,    56,    57,
      -1,    -1,    60,    61,    -1,    -1,    -1,    -1,   206,    67,
      68,   225,   226,   227,   228,   229,   230,    -1,    -1,   233,
     234,   235,   236,   237,    -1,   239,   240,    -1,    86,    -1,
      88,    89,    90,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   255,   256,   257,   258,   259,   260,   261,    -1,    -1,
      -1,     3,     4,    -1,    -1,     7,     8,     9,    -1,    -1,
      -1,    -1,    -1,    15,    16,    17,   280,    -1,    -1,    21,
      -1,   269,    24,    -1,    -1,    27,   274,    -1,    -1,   277,
      -1,    33,    -1,    35,    36,    -1,    -1,   301,    40,    -1,
      -1,    -1,    44,    45,    -1,    -1,    -1,   311,    -1,    -1,
      52,   299,    -1,    55,    56,    57,    -1,    -1,    60,    61,
      -1,    63,    24,    -1,    -1,    67,    68,    -1,    -1,    -1,
      -1,    -1,   320,    35,   322,    -1,    -1,    -1,    40,    -1,
      -1,    -1,    -1,    -1,    86,    87,    88,    89,    90,    -1,
      -1,    -1,    -1,   357,    -1,    -1,    -1,   361,    60,    61,
      -1,    -1,    -1,    -1,    -1,    67,    68,   371,   372,    -1,
     374,    -1,    -1,    -1,    -1,    -1,    -1,   381,    -1,   383,
      -1,    -1,    -1,    -1,    86,    -1,    88,    89,    90,   393,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   401,   402,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,     6,     7,     8,     9,    10,   423,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    -1,    39,    40,    -1,
      -1,    -1,    44,    45,    -1,    -1,    -1,    -1,    -1,    -1,
      52,    -1,    -1,    55,    56,    57,    -1,    -1,    60,    61,
      -1,    63,    -1,    -1,    -1,    67,    68,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    86,    87,    88,    89,    90,     3,
       4,     5,     6,     7,     8,     9,    10,    -1,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    -1,    39,    40,    -1,    -1,    -1,
      44,    45,    -1,    -1,    -1,    -1,    -1,    -1,    52,    -1,
      -1,    55,    56,    57,    -1,    -1,    60,    61,    -1,    63,
      -1,    -1,    -1,    67,    68,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,    -1,    -1,     7,
       8,     9,    86,    87,    88,    89,    90,    15,    16,    17,
      -1,    -1,    -1,    21,    -1,    -1,    24,    -1,    -1,    27,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    36,    -1,
      -1,    -1,    40,    -1,    -1,    -1,    44,    45,    -1,    -1,
      -1,    -1,    -1,    -1,    52,    -1,    -1,    55,    56,    57,
      -1,    -1,    60,    61,    -1,    63,    -1,    -1,    -1,    67,
      68,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,    -1,    -1,     7,     8,     9,    86,    87,
      88,    89,    90,    15,    16,    17,    -1,    -1,    -1,    21,
      -1,    -1,    24,    -1,    -1,    27,    -1,    -1,    -1,    -1,
      -1,    33,    -1,    35,    36,    -1,    -1,    -1,    40,    -1,
      -1,    -1,    44,    53,    54,    55,    56,    57,    58,    59,
      52,    -1,    -1,    55,    56,    57,    -1,    -1,    60,    61,
      -1,    63,    -1,    -1,    -1,    67,    68,    -1,    -1,    -1,
      80,    81,    82,    83,    84,    85,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    86,    87,    88,    89,    90,     0,
      -1,    -1,    -1,    -1,     5,     6,    -1,    -1,    -1,    10,
      -1,    12,    13,    14,    -1,    -1,    -1,    18,    19,    20,
      -1,    22,    23,    -1,    25,    26,    -1,    28,    29,    30,
      31,    32,    -1,    34,    -1,    -1,    37,    -1,    39,    40,
       5,     6,    -1,    -1,    -1,    10,    -1,    12,    13,    14,
      -1,    -1,    -1,    18,    19,    20,    57,    22,    23,    24,
      25,    26,    63,    28,    29,    30,    31,    32,    -1,    34,
      35,    -1,    37,    -1,    39,    40,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    86,    87,    52,    -1,    -1,
      55,    56,    57,    -1,    -1,    60,    61,    -1,    -1,    -1,
      -1,    -1,    67,    68,    -1,    80,    81,    82,    83,    84,
      85,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    86,    87,    88,    89,    90,     5,     6,    -1,    -1,
      -1,    10,    -1,    12,    13,    14,    -1,    -1,    -1,    18,
      19,    20,    -1,    22,    23,    -1,    25,    26,    -1,    28,
      29,    30,    31,    32,    -1,    34,    -1,    -1,    37,    -1,
      39,    40,     5,     6,    -1,    -1,    -1,    10,    -1,    12,
      13,    14,    -1,    -1,    -1,    18,    19,    20,    57,    22,
      23,    -1,    25,    26,    63,    28,    29,    30,    31,    32,
      -1,    34,    -1,    -1,    37,    -1,    39,    40,    -1,    -1,
      -1,    -1,    -1,    -1,     5,     6,    49,    86,    87,    10,
      -1,    12,    13,    14,    57,    -1,    -1,    18,    19,    20,
      -1,    22,    23,    -1,    25,    26,    -1,    28,    29,    30,
      31,    32,    -1,    34,    -1,    -1,    37,    -1,    39,    40,
       5,     6,    -1,    86,    87,    10,    -1,    12,    13,    14,
      -1,    -1,    -1,    18,    19,    20,    57,    22,    23,    -1,
      25,    26,    63,    28,    29,    30,    31,    32,    -1,    34,
      -1,    -1,    37,    -1,    39,    40,    -1,    -1,    -1,    -1,
      -1,    -1,     5,     6,    -1,    86,    87,    10,    -1,    12,
      13,    14,    57,    -1,    -1,    18,    19,    20,    -1,    22,
      23,    -1,    25,    26,    -1,    28,    29,    30,    31,    32,
      -1,    34,    -1,    -1,    37,    -1,    39,    -1,    41,     5,
       6,    86,    87,    -1,    10,    -1,    12,    13,    14,    -1,
      -1,    -1,    18,    19,    20,    -1,    22,    23,    -1,    25,
      26,    64,    28,    29,    30,    31,    32,    -1,    34,    -1,
      -1,    37,    -1,    39,    40,    -1,    -1,    -1,    -1,    -1,
       5,     6,    -1,    86,    87,    10,    -1,    12,    13,    14,
      -1,    57,    -1,    18,    19,    20,    -1,    22,    23,    -1,
      25,    26,    -1,    28,    29,    30,    31,    32,    -1,    34,
      -1,    -1,    37,    -1,    39,    -1,    -1,    -1,    -1,    44,
      86,    87,     5,     6,    -1,    -1,    -1,    10,    -1,    12,
      13,    14,    -1,    -1,    -1,    18,    19,    20,    63,    22,
      23,    -1,    25,    26,    -1,    28,    29,    30,    31,    32,
      -1,    34,    -1,    -1,    37,    -1,    39,    -1,    41,     5,
       6,    -1,    87,    -1,    10,    -1,    12,    13,    14,    -1,
      -1,    -1,    18,    19,    20,    -1,    22,    23,    -1,    25,
      26,    64,    28,    29,    30,    31,    32,    -1,    34,    -1,
      -1,    37,    -1,    39,    -1,    41,    -1,    -1,    -1,    -1,
      -1,    -1,     5,     6,    87,    -1,    -1,    10,    -1,    12,
      13,    14,    -1,    -1,    -1,    18,    19,    20,    64,    22,
      23,    -1,    25,    26,    -1,    28,    29,    30,    31,    32,
      -1,    34,    -1,    -1,    37,    -1,    39,    -1,     5,     6,
      -1,    87,    45,    10,    -1,    12,    13,    14,    -1,    -1,
      -1,    18,    19,    20,    -1,    22,    23,    -1,    25,    26,
      63,    28,    29,    30,    31,    32,    -1,    34,     5,     6,
      37,    -1,    39,    10,    -1,    12,    13,    14,    45,    -1,
      -1,    18,    19,    20,    87,    22,    23,    -1,    25,    26,
      -1,    28,    29,    30,    31,    32,    63,    34,     5,     6,
      37,    -1,    39,    10,    -1,    12,    13,    14,    45,    -1,
      -1,    18,    19,    20,    -1,    22,    23,    -1,    25,    26,
      87,    28,    29,    30,    31,    32,    63,    34,     5,     6,
      37,    -1,    39,    10,    -1,    12,    13,    14,    45,    -1,
      -1,    18,    19,    20,    -1,    22,    23,    -1,    25,    26,
      87,    28,    29,    30,    31,    32,    63,    34,     5,     6,
      37,    -1,    39,    10,    -1,    12,    13,    14,    45,    -1,
      -1,    18,    19,    20,    -1,    22,    23,    -1,    25,    26,
      87,    28,    29,    30,    31,    32,    63,    34,    -1,    -1,
      37,    -1,    39,    -1,     5,     6,    -1,    -1,    45,    10,
      -1,    12,    13,    14,    -1,    -1,    -1,    18,    19,    20,
      87,    22,    23,    -1,    25,    26,    63,    28,    29,    30,
      31,    32,    -1,    34,    -1,    -1,    37,    -1,    39,    40,
       5,     6,    -1,    -1,    -1,    10,    -1,    12,    13,    14,
      87,    -1,    -1,    18,    19,    20,    57,    22,    23,    -1,
      25,    26,    -1,    28,    29,    30,    31,    32,    -1,    34,
       5,     6,    37,    -1,    39,    10,    -1,    12,    13,    14,
      45,    -1,    -1,    18,    19,    20,    87,    22,    23,    -1,
      25,    26,    -1,    28,    29,    30,    31,    32,    63,    34,
       5,     6,    37,    -1,    39,    10,    -1,    12,    13,    14,
      45,    -1,    -1,    18,    19,    20,    -1,    22,    23,    -1,
      25,    26,    87,    28,    29,    30,    31,    32,    63,    34,
      -1,    -1,    37,    -1,    39,    -1,    41,    -1,    -1,    -1,
       5,     6,    -1,    -1,    -1,    10,    -1,    12,    13,    14,
      -1,    -1,    87,    18,    19,    20,    -1,    22,    23,    64,
      25,    26,    -1,    28,    29,    30,    31,    32,    -1,    34,
       5,     6,    37,    -1,    39,    10,    -1,    12,    13,    14,
      -1,    -1,    87,    18,    19,    20,    -1,    22,    23,    -1,
      25,    26,    -1,    28,    29,    30,    31,    32,    63,    34,
       5,     6,    37,    -1,    39,    10,    -1,    12,    13,    14,
      -1,    -1,    -1,    18,    19,    20,    -1,    22,    23,    -1,
      25,    26,    87,    28,    29,    30,    31,    32,    63,    34,
      -1,    -1,    37,    -1,    39,    -1,    -1,    -1,    -1,    -1,
       5,     6,    -1,    -1,    -1,    10,    -1,    12,    13,    14,
      -1,    -1,    87,    18,    19,    20,    -1,    22,    23,    64,
      25,    26,    -1,    28,    29,    30,    31,    32,    -1,    34,
      -1,    -1,    37,    -1,    39,    -1,    -1,    -1,    -1,    -1,
       5,     6,    87,    -1,    -1,    10,    -1,    12,    13,    14,
      -1,    -1,    -1,    18,    19,    20,    -1,    22,    23,    64,
      25,    26,    -1,    28,    29,    30,    31,    32,    -1,    34,
      -1,    -1,    37,    -1,    39,    -1,    -1,    -1,    -1,    -1,
       5,     6,    87,    -1,    -1,    10,    -1,    12,    13,    14,
      -1,    -1,    -1,    18,    19,    20,    -1,    22,    23,    64,
      25,    26,    -1,    28,    29,    30,    31,    32,    -1,    34,
      -1,    -1,    37,    -1,    39,    -1,    -1,    -1,    -1,    -1,
       5,     6,    87,    -1,    -1,    10,    -1,    12,    13,    14,
      -1,    -1,    -1,    18,    19,    20,    -1,    22,    23,    64,
      25,    26,    -1,    28,    29,    30,    31,    32,    24,    34,
      -1,    -1,    37,    -1,    39,    -1,    -1,    -1,    -1,    35,
      -1,    -1,    87,    -1,    40,    -1,    -1,    -1,    44,    45,
      -1,    -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,    55,
      56,    57,    -1,    -1,    60,    61,    -1,    24,    -1,    -1,
      -1,    67,    68,    -1,    -1,    -1,    -1,    -1,    35,    -1,
      -1,    -1,    87,    40,    -1,    -1,    -1,    44,    45,    -1,
      86,    -1,    88,    89,    90,    52,    -1,    -1,    55,    56,
      57,    -1,    -1,    60,    61,    -1,    24,    -1,    -1,    -1,
      67,    68,    -1,    -1,    -1,    -1,    -1,    35,    -1,    -1,
      -1,    -1,    40,    -1,    -1,    -1,    44,    -1,    -1,    86,
      -1,    88,    89,    90,    52,    -1,    -1,    55,    56,    57,
      -1,    -1,    60,    61,    -1,    24,    -1,    -1,    -1,    67,
      68,    -1,    -1,    -1,    -1,    -1,    35,    -1,    -1,    -1,
      -1,    40,    -1,    -1,    43,    -1,    -1,    -1,    86,    24,
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

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
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
     131,   131,   131,   131,    63,   118,   131,   131,    63,   119,
      45,   128,    45,   104,   118,    46,    47,    48,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    63,    65,
      66,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,   142,   143,   144,
      40,    42,    62,    67,    68,    69,    88,    49,   131,    46,
      63,    41,    41,    46,    40,   121,   134,   139,    43,   127,
      44,   124,   125,   130,    43,    41,    41,    46,    41,    41,
      46,    41,    46,    45,   108,   130,    45,    46,   130,    46,
      63,    49,    45,    45,    45,   111,    45,   111,    49,   128,
      33,    63,   130,    63,   130,    63,   133,   130,   130,   136,
      40,   134,   139,    41,    41,    63,    45,   130,   130,   130,
     130,   130,   130,   130,   130,   130,   130,   130,   130,   130,
     130,   130,   130,   130,   130,    41,   129,   130,   130,   136,
     136,   128,   121,    64,    98,   134,    40,    42,   134,   124,
      45,    46,    64,    64,   138,    45,   114,   130,    45,    45,
     128,    40,    63,   130,    63,    41,    41,    41,    41,    46,
     131,    49,    41,    46,    43,    41,    41,    41,    64,    97,
      43,   130,    45,    46,    45,   125,    41,    41,   130,    41,
     130,    63,    63,   130,   128,   128,   128,   135,   138,   130,
     130,    41,    41,    46,    43,    45,    41,   128,    41,    41,
     130,    41,   130,    63,    11,    41,    62,    64,    63,   128,
     128,    41,   128,    41,    41,   130,   128,   138,    41,   128,
     128,   128,    41,   128
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
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



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

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
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 317 "./Pgram.y"
    {
				(yyval.tnode) = (yyvsp[(1) - (2)].tnode);
				if ((yyvsp[(2) - (2)].tnode)) tlist_add((yyval.tnode), (yyvsp[(2) - (2)].tnode));
			}
    break;

  case 3:
#line 322 "./Pgram.y"
    {
				(yyval.tnode) = tmknode(GEN_MODULE, 0, 0, 0);
				tree_root = (yyval.tnode);
			}
    break;

  case 4:
#line 329 "./Pgram.y"
    {
				(yyval.tnode) = tmknode(GEN_MODULE_ITEM, FUNCTION_ITEM,
					(yyvsp[(1) - (1)].tnode), 0);
			}
    break;

  case 5:
#line 334 "./Pgram.y"
    {
				if ((yyvsp[(1) - (1)].tnode)) (yyval.tnode) = tmknode(GEN_MODULE_ITEM, DCL_ITEM,
					(yyvsp[(1) - (1)].tnode), 0);
				else (yyval.tnode) = NULL;
			}
    break;

  case 6:
#line 342 "./Pgram.y"
    {
				if ((yyvsp[(1) - (4)].tnode)->species == CLASSTYPES_TYPEDEF) {
					parse_error((yyvsp[(1) - (4)].tnode)->srcpos,
						"typedef function definition");
					(yyvsp[(1) - (4)].tnode)->species = CLASSTYPES_NORMAL;
				}
				(yyval.tnode) = tmknode(GEN_FUNCTION, FUNC_TFPC, (yyvsp[(1) - (4)].tnode), (yyvsp[(2) - (4)].tnode));
				tlist_add((yyval.tnode), (yyvsp[(3) - (4)].tnode));
				tlist_add((yyval.tnode), (yyvsp[(4) - (4)].tnode));
			}
    break;

  case 7:
#line 353 "./Pgram.y"
    {
				if ((yyvsp[(1) - (3)].tnode)->species == CLASSTYPES_TYPEDEF) {
					parse_error((yyvsp[(1) - (3)].tnode)->srcpos,
						"typedef function definition");
					(yyvsp[(1) - (3)].tnode)->species = CLASSTYPES_NORMAL;
				}
				(yyval.tnode) = tmknode(GEN_FUNCTION, FUNC_TFC, (yyvsp[(1) - (3)].tnode), (yyvsp[(2) - (3)].tnode));
				tlist_add((yyval.tnode), (yyvsp[(3) - (3)].tnode));
			}
    break;

  case 8:
#line 363 "./Pgram.y"
    {
				(yyval.tnode) = tmknode(GEN_FUNCTION, FUNC_FPC, (yyvsp[(1) - (3)].tnode), (yyvsp[(2) - (3)].tnode));
				tlist_add((yyval.tnode), (yyvsp[(3) - (3)].tnode));
			}
    break;

  case 9:
#line 368 "./Pgram.y"
    {
				(yyval.tnode) = tmknode(GEN_FUNCTION, FUNC_FC, (yyvsp[(1) - (2)].tnode), (yyvsp[(2) - (2)].tnode));
			}
    break;

  case 10:
#line 374 "./Pgram.y"
    {
				if ((yyvsp[(2) - (2)].tnode)->species == FUNC_STARS_SPEC) {
					tlist_ladd((yyvsp[(2) - (2)].tnode)->down->over, (yyvsp[(1) - (2)].tnode));
					(yyval.tnode) = (yyvsp[(2) - (2)].tnode);
				} else {
					(yyval.tnode) = tmknode(GEN_FUNC_SPEC,
						FUNC_STARS_SPEC,
						tmknode(GEN_STARS, 0, (yyvsp[(1) - (2)].tnode), 0),
						(yyvsp[(2) - (2)].tnode));
				}
			}
    break;

  case 11:
#line 386 "./Pgram.y"
    {
				(yyval.tnode) = (yyvsp[(1) - (1)].tnode);
			}
    break;

  case 12:
#line 392 "./Pgram.y"
    {
				(yyval.tnode) = tmknode(GEN_FUNC_SPEC, FUNC_SPEC_NFCALL,
					(yyvsp[(1) - (3)].tnode), 0);
				tsrc_pos((yyval.tnode), NULL, (yyvsp[(3) - (3)].token).srcpos);
			}
    break;

  case 13:
#line 398 "./Pgram.y"
    {
				(yyval.tnode) = tmknode(GEN_FUNC_SPEC,
					FUNC_SPEC_ARRAY_EXPR, (yyvsp[(1) - (4)].tnode), (yyvsp[(3) - (4)].tnode));
				tsrc_pos((yyval.tnode), NULL, (yyvsp[(4) - (4)].token).srcpos);
			}
    break;

  case 14:
#line 404 "./Pgram.y"
    {
				(yyval.tnode) = tmknode(GEN_FUNC_SPEC, FUNC_SPEC_ARRAY,
					(yyvsp[(1) - (3)].tnode), 0);
				tsrc_pos((yyval.tnode), NULL, (yyvsp[(3) - (3)].token).srcpos);
			}
    break;

  case 15:
#line 410 "./Pgram.y"
    {
				(yyval.tnode) = tmknode(GEN_FUNC_SPEC, FUNC_SPEC_INHERIT,
					(yyvsp[(2) - (3)].tnode), 0);
				tsrc_pos((yyval.tnode), (yyvsp[(1) - (3)].token).srcpos, (yyvsp[(3) - (3)].token).srcpos);
			}
    break;

  case 16:
#line 416 "./Pgram.y"
    {
				(yyvsp[(1) - (4)].tnode)->genus = GEN_FNAME;	/* fix leaf type */
				(yyval.tnode) = tmknode(GEN_FUNC_SPEC, FUNC_FCALL_NAMES,
					(yyvsp[(1) - (4)].tnode), (yyvsp[(3) - (4)].tnode));
				tsrc_pos((yyval.tnode), NULL, (yyvsp[(4) - (4)].token).srcpos);
			}
    break;

  case 17:
#line 423 "./Pgram.y"
    {
				(yyvsp[(1) - (3)].tnode)->genus = GEN_FNAME;	/* fix leaf type */
				(yyval.tnode) = tmknode(GEN_FUNC_SPEC, FUNC_FCALL, (yyvsp[(1) - (3)].tnode), 0);
				tsrc_pos((yyval.tnode), NULL, (yyvsp[(3) - (3)].token).srcpos);
			}
    break;

  case 18:
#line 429 "./Pgram.y"
    {
				(yyvsp[(1) - (4)].tnode)->genus = GEN_FNAME;	/* fix leaf type */
				(yyval.tnode) = tmknode(GEN_FUNC_SPEC, FUNC_FCALL_ANSI,
					(yyvsp[(1) - (4)].tnode), (yyvsp[(3) - (4)].tnode));
				tsrc_pos((yyval.tnode), NULL, (yyvsp[(4) - (4)].token).srcpos);
			}
    break;

  case 19:
#line 436 "./Pgram.y"
    {
				(yyvsp[(1) - (6)].tnode)->genus = GEN_FNAME;	/* fix leaf type */
				(yyval.tnode) = tmknode(GEN_FUNC_SPEC, FUNC_FCALL_ANSI_E,
					(yyvsp[(1) - (6)].tnode), (yyvsp[(3) - (6)].tnode));
				tsrc_pos((yyval.tnode), NULL, (yyvsp[(6) - (6)].token).srcpos);
			}
    break;

  case 20:
#line 443 "./Pgram.y"
    {
				(yyval.tnode) = tmknode(GEN_FUNC_SPEC, FUNC_SPEC_ANSI,
					(yyvsp[(1) - (4)].tnode), (yyvsp[(3) - (4)].tnode));
				tsrc_pos((yyval.tnode), NULL, (yyvsp[(4) - (4)].token).srcpos);
			}
    break;

  case 21:
#line 449 "./Pgram.y"
    {
				(yyval.tnode) = tmknode(GEN_FUNC_SPEC, FUNC_SPEC_ANSI_E,
					(yyvsp[(1) - (6)].tnode), (yyvsp[(3) - (6)].tnode));
				tsrc_pos((yyval.tnode), NULL, (yyvsp[(6) - (6)].token).srcpos);
			}
    break;

  case 22:
#line 455 "./Pgram.y"
    {
				(yyvsp[(1) - (4)].tnode)->genus = GEN_FNAME;	/* fix leaf type */
				(yyval.tnode) = tmknode(GEN_FUNC_SPEC, FUNC_FCALL_E_ANSI,
					(yyvsp[(1) - (4)].tnode), 0);
				tsrc_pos((yyval.tnode), NULL, (yyvsp[(4) - (4)].token).srcpos);
			}
    break;

  case 23:
#line 462 "./Pgram.y"
    {
				(yyval.tnode) = tmknode(GEN_FUNC_SPEC, FUNC_SPEC_E_ANSI,
					(yyvsp[(1) - (4)].tnode), 0);
				tsrc_pos((yyval.tnode), NULL, (yyvsp[(4) - (4)].token).srcpos);
			}
    break;

  case 24:
#line 470 "./Pgram.y"
    {
				(yyval.tnode) = tmknode(GEN_ANSI_PARAMS, 0, (yyvsp[(1) - (1)].tnode), 0);
			}
    break;

  case 25:
#line 474 "./Pgram.y"
    {
				(yyval.tnode) = tlist_add((yyvsp[(1) - (3)].tnode), (yyvsp[(3) - (3)].tnode));
			}
    break;

  case 26:
#line 480 "./Pgram.y"
    {
				if ((yyvsp[(1) - (2)].tnode)->species == CLASSTYPES_TYPEDEF) {
					parse_error((yyvsp[(1) - (2)].tnode)->srcpos,
						"typedef parameters");
					(yyvsp[(1) - (2)].tnode)->species = CLASSTYPES_NORMAL;
				}
				(yyval.tnode) = tmknode(GEN_ANSI_PARAM, ANSI_DATA_ITEM,
					(yyvsp[(1) - (2)].tnode), (yyvsp[(2) - (2)].tnode));
			}
    break;

  case 27:
#line 490 "./Pgram.y"
    {
				if ((yyvsp[(1) - (2)].tnode)->species == CLASSTYPES_TYPEDEF) {
					parse_error((yyvsp[(1) - (2)].tnode)->srcpos,
						"typedef parameters");
					(yyvsp[(1) - (2)].tnode)->species = CLASSTYPES_NORMAL;
				}
				(yyval.tnode) = tmknode(GEN_ANSI_PARAM, ANSI_NULL_DCL,
					(yyvsp[(1) - (2)].tnode), (yyvsp[(2) - (2)].tnode));
			}
    break;

  case 28:
#line 502 "./Pgram.y"
    {
				(yyval.tnode) = tmknode(GEN_CLASSTYPES, 0, (yyvsp[(1) - (1)].tnode), 0);
				if ((yyvsp[(1) - (1)].tnode)->species == CLASSTYPE_TYPEDEF)
					(yyval.tnode)->species = CLASSTYPES_TYPEDEF;
			}
    break;

  case 29:
#line 508 "./Pgram.y"
    {
				(yyval.tnode) = tlist_add((yyvsp[(1) - (2)].tnode), (yyvsp[(2) - (2)].tnode));
				if ((yyvsp[(2) - (2)].tnode)->species == CLASSTYPE_TYPEDEF)
					(yyval.tnode)->species = CLASSTYPES_TYPEDEF;
			}
    break;

  case 30:
#line 516 "./Pgram.y"
    {
				(yyval.tnode) = tmkleaf(GEN_CLASSTYPE, CLASSTYPE_INT,
					(yyvsp[(1) - (1)].token).srcpos, 0);
			}
    break;

  case 31:
#line 521 "./Pgram.y"
    {
				(yyval.tnode) = tmkleaf(GEN_CLASSTYPE, CLASSTYPE_CHAR,
					(yyvsp[(1) - (1)].token).srcpos, 0);
			}
    break;

  case 32:
#line 526 "./Pgram.y"
    {
				(yyval.tnode) = tmkleaf(GEN_CLASSTYPE, CLASSTYPE_FLOAT,
					(yyvsp[(1) - (1)].token).srcpos, 0);
			}
    break;

  case 33:
#line 531 "./Pgram.y"
    {
				(yyval.tnode) = tmkleaf(GEN_CLASSTYPE, CLASSTYPE_DOUBLE,
					(yyvsp[(1) - (1)].token).srcpos, 0);
			}
    break;

  case 34:
#line 536 "./Pgram.y"
    {
				(yyval.tnode) = tmkleaf(GEN_CLASSTYPE, CLASSTYPE_LONG,
					(yyvsp[(1) - (1)].token).srcpos, 0);
			}
    break;

  case 35:
#line 541 "./Pgram.y"
    {
				(yyval.tnode) = tmkleaf(GEN_CLASSTYPE, CLASSTYPE_SHORT,
					(yyvsp[(1) - (1)].token).srcpos, 0);
			}
    break;

  case 36:
#line 546 "./Pgram.y"
    {
				(yyval.tnode) = tmkleaf(GEN_CLASSTYPE, CLASSTYPE_UNSIGNED,
					(yyvsp[(1) - (1)].token).srcpos, 0);
			}
    break;

  case 37:
#line 551 "./Pgram.y"
    {
				(yyval.tnode) = tmkleaf(GEN_CLASSTYPE, CLASSTYPE_SIGNED,
					(yyvsp[(1) - (1)].token).srcpos, 0);
			}
    break;

  case 38:
#line 556 "./Pgram.y"
    {
				(yyval.tnode) = tmkleaf(GEN_CLASSTYPE, CLASSTYPE_VOID,
					(yyvsp[(1) - (1)].token).srcpos, 0);
			}
    break;

  case 39:
#line 561 "./Pgram.y"
    {
				(yyval.tnode) = tmkleaf(GEN_CLASSTYPE, CLASSTYPE_CONST,
					(yyvsp[(1) - (1)].token).srcpos, 0);
			}
    break;

  case 40:
#line 566 "./Pgram.y"
    {
				(yyval.tnode) = tmkleaf(GEN_CLASSTYPE, CLASSTYPE_VOLATILE,
					(yyvsp[(1) - (1)].token).srcpos, 0);
			}
    break;

  case 41:
#line 571 "./Pgram.y"
    {
				(yyval.tnode) = tmkleaf(GEN_CLASSTYPE, CLASSTYPE_AUTO,
					(yyvsp[(1) - (1)].token).srcpos, 0);
			}
    break;

  case 42:
#line 576 "./Pgram.y"
    {
				(yyval.tnode) = tmkleaf(GEN_CLASSTYPE, CLASSTYPE_REGISTER,
					(yyvsp[(1) - (1)].token).srcpos, 0);
			}
    break;

  case 43:
#line 581 "./Pgram.y"
    {
				(yyval.tnode) = tmkleaf(GEN_CLASSTYPE, CLASSTYPE_STATIC,
					(yyvsp[(1) - (1)].token).srcpos, 0);
			}
    break;

  case 44:
#line 586 "./Pgram.y"
    {
				(yyval.tnode) = tmkleaf(GEN_CLASSTYPE, CLASSTYPE_INLINE,
					(yyvsp[(1) - (1)].token).srcpos, 0);
			}
    break;

  case 45:
#line 591 "./Pgram.y"
    {
				(yyval.tnode) = tmkleaf(GEN_CLASSTYPE, CLASSTYPE_EXTERN,
					(yyvsp[(1) - (1)].token).srcpos, 0);
			}
    break;

  case 46:
#line 596 "./Pgram.y"
    {
				(yyval.tnode) = tmkleaf(GEN_CLASSTYPE, CLASSTYPE_TYPEDEF,
					(yyvsp[(1) - (1)].token).srcpos, 0);
			}
    break;

  case 47:
#line 601 "./Pgram.y"
    {
				(yyval.tnode) = tmknode(GEN_CLASSTYPE, CLASSTYPE_TNAME,
					(yyvsp[(1) - (1)].tnode), 0);
			}
    break;

  case 48:
#line 606 "./Pgram.y"
    {
				(yyval.tnode) = tmknode(GEN_CLASSTYPE, CLASSTYPE_STRUCT_D,
					(yyvsp[(1) - (1)].tnode), 0);
			}
    break;

  case 49:
#line 611 "./Pgram.y"
    {
				(yyval.tnode) = tmknode(GEN_CLASSTYPE, CLASSTYPE_ENUM_D,
					(yyvsp[(1) - (1)].tnode), 0);
			}
    break;

  case 50:
#line 616 "./Pgram.y"
    {
				(yyval.tnode) = tmknode(GEN_CLASSTYPE, CLASSTYPE_STRUCT_R,
					(yyvsp[(1) - (1)].tnode), 0);
			}
    break;

  case 51:
#line 621 "./Pgram.y"
    {
				(yyval.tnode) = tmknode(GEN_CLASSTYPE, CLASSTYPE_ENUM_R,
					(yyvsp[(1) - (1)].tnode), 0);
			}
    break;

  case 52:
#line 628 "./Pgram.y"
    {
				(yyval.tnode) = tmknode(GEN_PARAM_DCLS, 0, (yyvsp[(1) - (1)].tnode), 0);
			}
    break;

  case 53:
#line 632 "./Pgram.y"
    {
				(yyval.tnode) = tlist_add((yyvsp[(1) - (2)].tnode), (yyvsp[(2) - (2)].tnode));
			}
    break;

  case 54:
#line 636 "./Pgram.y"
    {
				/* extra ';' not allowed before 1st param_dcl */
				(yyval.tnode) = (yyvsp[(1) - (2)].tnode);
				tsrc_pos((yyval.tnode), NULL, (yyvsp[(2) - (2)].token).srcpos);
			}
    break;

  case 55:
#line 644 "./Pgram.y"
    {
				if ((yyvsp[(1) - (3)].tnode)->species == CLASSTYPES_TYPEDEF) {
					parse_error((yyvsp[(1) - (3)].tnode)->srcpos,
						"typedef parameters");
					(yyvsp[(1) - (3)].tnode)->species = CLASSTYPES_NORMAL;
				}
				(yyval.tnode) = tmknode(GEN_PARAM_DCL, 0, (yyvsp[(1) - (3)].tnode), (yyvsp[(2) - (3)].tnode));
				tsrc_pos((yyval.tnode), NULL, (yyvsp[(3) - (3)].token).srcpos);
			}
    break;

  case 56:
#line 656 "./Pgram.y"
    {
				(yyval.tnode) = tmknode(GEN_PARAM_DEFS, 0, (yyvsp[(1) - (1)].tnode), 0);
			}
    break;

  case 57:
#line 660 "./Pgram.y"
    {
				(yyval.tnode) = tlist_add((yyvsp[(1) - (3)].tnode), (yyvsp[(3) - (3)].tnode));
			}
    break;

  case 58:
#line 666 "./Pgram.y"
    {
				(yyval.tnode) = tlist_add((yyvsp[(1) - (2)].tnode), (yyvsp[(2) - (2)].tnode));
			}
    break;

  case 59:
#line 670 "./Pgram.y"
    {
				(yyval.tnode) = tmknode(GEN_STMT_LIST, 0, (yyvsp[(1) - (1)].tnode), 0);
			}
    break;

  case 60:
#line 676 "./Pgram.y"
    {
				(yyval.tnode) = tmknode(GEN_ENUM_DCL, sENUM_NOTAG, (yyvsp[(3) - (4)].tnode), 0);
				tsrc_pos((yyval.tnode), (yyvsp[(1) - (4)].token).srcpos, (yyvsp[(4) - (4)].token).srcpos);
			}
    break;

  case 61:
#line 681 "./Pgram.y"
    {
				(yyval.tnode) = tmknode(GEN_ENUM_DCL, sENUM_TAG, (yyvsp[(2) - (5)].tnode), (yyvsp[(4) - (5)].tnode));
				tsrc_pos((yyval.tnode), (yyvsp[(1) - (5)].token).srcpos, (yyvsp[(5) - (5)].token).srcpos);
			}
    break;

  case 62:
#line 686 "./Pgram.y"
    {
				(yyval.tnode) = tmknode(GEN_ENUM_DCL, sENUM_NOTAG, (yyvsp[(3) - (5)].tnode), 0);
				tsrc_pos((yyval.tnode), (yyvsp[(1) - (5)].token).srcpos, (yyvsp[(5) - (5)].token).srcpos);
			}
    break;

  case 63:
#line 691 "./Pgram.y"
    {
				(yyval.tnode) = tmknode(GEN_ENUM_DCL, sENUM_TAG, (yyvsp[(2) - (6)].tnode), (yyvsp[(4) - (6)].tnode));
				tsrc_pos((yyval.tnode), (yyvsp[(1) - (6)].token).srcpos, (yyvsp[(6) - (6)].token).srcpos);
			}
    break;

  case 64:
#line 698 "./Pgram.y"
    {
				(yyval.tnode) = tmknode(GEN_ENUM_REF, 0, (yyvsp[(2) - (2)].tnode), 0);
				tsrc_pos((yyval.tnode), (yyvsp[(1) - (2)].token).srcpos, NULL);
			}
    break;

  case 65:
#line 705 "./Pgram.y"
    {
				(yyval.tnode) = tmknode(GEN_MOE_LIST, 0, (yyvsp[(1) - (1)].tnode), 0);
			}
    break;

  case 66:
#line 709 "./Pgram.y"
    {
				(yyval.tnode) = tlist_add((yyvsp[(1) - (3)].tnode), (yyvsp[(3) - (3)].tnode));
			}
    break;

  case 67:
#line 715 "./Pgram.y"
    {
				(yyval.tnode) = tmknode(GEN_MOE, MOE_NOVAL, (yyvsp[(1) - (1)].tnode), 0);
			}
    break;

  case 68:
#line 719 "./Pgram.y"
    {
				(yyval.tnode) = tmknode(GEN_MOE, MOE_VAL, (yyvsp[(1) - (3)].tnode), (yyvsp[(3) - (3)].tnode));
			}
    break;

  case 69:
#line 725 "./Pgram.y"
    {
				(yyval.tnode) = tmknode(GEN_STRUCT_DCL, DCL_STRUCT_TAG,
					(yyvsp[(2) - (5)].tnode), (yyvsp[(4) - (5)].tnode));
				tsrc_pos((yyval.tnode), (yyvsp[(1) - (5)].token).srcpos, (yyvsp[(5) - (5)].token).srcpos);
			}
    break;

  case 70:
#line 731 "./Pgram.y"
    {
				(yyval.tnode) = tmknode(GEN_STRUCT_DCL, DCL_UNION_TAG,
					(yyvsp[(2) - (5)].tnode), (yyvsp[(4) - (5)].tnode));
				tsrc_pos((yyval.tnode), (yyvsp[(1) - (5)].token).srcpos, (yyvsp[(5) - (5)].token).srcpos);
			}
    break;

  case 71:
#line 737 "./Pgram.y"
    {
				(yyval.tnode) = tmknode(GEN_STRUCT_DCL, DCL_STRUCT_NOTAG,
					(yyvsp[(3) - (4)].tnode), 0);
				tsrc_pos((yyval.tnode), (yyvsp[(1) - (4)].token).srcpos, (yyvsp[(4) - (4)].token).srcpos);
			}
    break;

  case 72:
#line 743 "./Pgram.y"
    {
				(yyval.tnode) = tmknode(GEN_STRUCT_DCL, DCL_UNION_NOTAG,
					(yyvsp[(3) - (4)].tnode), 0);
				tsrc_pos((yyval.tnode), (yyvsp[(1) - (4)].token).srcpos, (yyvsp[(4) - (4)].token).srcpos);
			}
    break;

  case 73:
#line 749 "./Pgram.y"
    {
				(yyval.tnode) = tmknode(GEN_STRUCT_DCL, DCL_PSTRUCT_TAG,
					(yyvsp[(3) - (6)].tnode), (yyvsp[(5) - (6)].tnode));
				tsrc_pos((yyval.tnode), (yyvsp[(1) - (6)].token).srcpos, (yyvsp[(6) - (6)].token).srcpos);
			}
    break;

  case 74:
#line 755 "./Pgram.y"
    {
				(yyval.tnode) = tmknode(GEN_STRUCT_DCL, DCL_PUNION_TAG,
					(yyvsp[(3) - (6)].tnode), (yyvsp[(5) - (6)].tnode));
				tsrc_pos((yyval.tnode), (yyvsp[(1) - (6)].token).srcpos, (yyvsp[(6) - (6)].token).srcpos);
			}
    break;

  case 75:
#line 761 "./Pgram.y"
    {
				(yyval.tnode) = tmknode(GEN_STRUCT_DCL, DCL_PSTRUCT_NOTAG,
					(yyvsp[(4) - (5)].tnode), 0);
				tsrc_pos((yyval.tnode), (yyvsp[(1) - (5)].token).srcpos, (yyvsp[(5) - (5)].token).srcpos);
			}
    break;

  case 76:
#line 767 "./Pgram.y"
    {
				(yyval.tnode) = tmknode(GEN_STRUCT_DCL, DCL_PUNION_NOTAG,
					(yyvsp[(4) - (5)].tnode), 0);
				tsrc_pos((yyval.tnode), (yyvsp[(1) - (5)].token).srcpos, (yyvsp[(5) - (5)].token).srcpos);
			}
    break;

  case 77:
#line 775 "./Pgram.y"
    {
				(yyval.tnode) = tmknode(GEN_STRUCT_REF, REF_STRUCT,
					(yyvsp[(2) - (2)].tnode), 0);
				tsrc_pos((yyval.tnode), (yyvsp[(1) - (2)].token).srcpos, NULL);
			}
    break;

  case 78:
#line 781 "./Pgram.y"
    {
				(yyval.tnode) = tmknode(GEN_STRUCT_REF, REF_UNION, (yyvsp[(2) - (2)].tnode), 0);
				tsrc_pos((yyval.tnode), (yyvsp[(1) - (2)].token).srcpos, NULL);
			}
    break;

  case 79:
#line 787 "./Pgram.y"
    {
				(yyval.tnode) = tmknode(GEN_STRUCT_REF, REF_PSTRUCT,
					(yyvsp[(3) - (3)].tnode), 0);
				tsrc_pos((yyval.tnode), (yyvsp[(1) - (3)].token).srcpos, NULL);
			}
    break;

  case 80:
#line 793 "./Pgram.y"
    {
				(yyval.tnode) = tmknode(GEN_STRUCT_REF, REF_PUNION, (yyvsp[(3) - (3)].tnode), 0);
				tsrc_pos((yyval.tnode), (yyvsp[(1) - (3)].token).srcpos, NULL);
			}
    break;

  case 81:
#line 800 "./Pgram.y"
    {
				(yyval.tnode) = tmknode(GEN_MEM_LIST, 0, (yyvsp[(1) - (1)].tnode), 0);
			}
    break;

  case 82:
#line 804 "./Pgram.y"
    {	
			        if ((yyvsp[(2) - (2)].tnode) != NULL) {
				    (yyval.tnode) = tlist_add((yyvsp[(1) - (2)].tnode), (yyvsp[(2) - (2)].tnode));
				} else {
				    (yyval.tnode) = (yyvsp[(1) - (2)].tnode);
				}
			}
    break;

  case 83:
#line 814 "./Pgram.y"
    {
				if ((yyvsp[(1) - (3)].tnode)->species == CLASSTYPES_TYPEDEF) {
					parse_error((yyvsp[(1) - (3)].tnode)->srcpos,
						"typedef struct/union member");
					(yyvsp[(1) - (3)].tnode)->species = CLASSTYPES_NORMAL;
				}
				(yyval.tnode) = tmknode(GEN_MEMBER, 0, (yyvsp[(1) - (3)].tnode), (yyvsp[(2) - (3)].tnode));
				tsrc_pos((yyval.tnode), NULL, (yyvsp[(3) - (3)].token).srcpos);
			}
    break;

  case 84:
#line 824 "./Pgram.y"
    {
			        (yyval.tnode) = NULL; 
			}
    break;

  case 85:
#line 846 "./Pgram.y"
    {
				(yyval.tnode) = tmknode(GEN_MEM_DCLS, 0, (yyvsp[(1) - (1)].tnode), 0);
			}
    break;

  case 86:
#line 850 "./Pgram.y"
    {
				(yyval.tnode) = tlist_add((yyvsp[(1) - (3)].tnode), (yyvsp[(3) - (3)].tnode));
			}
    break;

  case 87:
#line 856 "./Pgram.y"
    {
				(yyval.tnode) = tmknode(GEN_MEM_DCL, MEM_DCL, (yyvsp[(1) - (1)].tnode), 0);
			}
    break;

  case 88:
#line 860 "./Pgram.y"
    {
				(yyval.tnode) = tmknode(GEN_MEM_DCL, MEM_DCL_BIT, (yyvsp[(1) - (3)].tnode), (yyvsp[(3) - (3)].tnode));
			}
    break;

  case 89:
#line 864 "./Pgram.y"
    {
				(yyval.tnode) = tmknode(GEN_MEM_DCL, MEM_BIT, (yyvsp[(2) - (2)].tnode), 0);
				tsrc_pos((yyval.tnode), (yyvsp[(1) - (2)].token).srcpos, NULL);
			}
    break;

  case 90:
#line 871 "./Pgram.y"
    {
				(yyval.tnode) = tmknode(GEN_NAMES, 0, (yyvsp[(1) - (1)].tnode), 0);
			}
    break;

  case 91:
#line 875 "./Pgram.y"
    {
				(yyval.tnode) = tlist_add((yyvsp[(1) - (3)].tnode), (yyvsp[(3) - (3)].tnode));
			}
    break;

  case 92:
#line 881 "./Pgram.y"
    {
				if ((yyvsp[(1) - (3)].tnode)->species == CLASSTYPES_TYPEDEF) {
					insertTypeNames((yyvsp[(2) - (3)].tnode));
					(yyvsp[(1) - (3)].tnode)->species = CLASSTYPES_NORMAL;
				}
				(yyval.tnode) = tmknode(GEN_INIT_DCL, INIT_DCL_SPEC,
					(yyvsp[(1) - (3)].tnode), (yyvsp[(2) - (3)].tnode));
				tsrc_pos((yyval.tnode), NULL, (yyvsp[(3) - (3)].token).srcpos);
			}
    break;

  case 93:
#line 891 "./Pgram.y"
    {
				if ((yyvsp[(1) - (2)].tnode)->species == CLASSTYPES_TYPEDEF)
					(yyvsp[(1) - (2)].tnode)->species = CLASSTYPES_NORMAL;
				(yyval.tnode) = tmknode(GEN_INIT_DCL, INIT_DCL_NOSPEC,
					(yyvsp[(1) - (2)].tnode), 0);
				tsrc_pos((yyval.tnode), NULL, (yyvsp[(2) - (2)].token).srcpos);
			}
    break;

  case 94:
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
				(yyvsp[(1) - (2)].tnode));
				tsrc_pos((yyval.tnode), NULL, (yyvsp[(2) - (2)].token).srcpos);
			}
    break;

  case 95:
#line 913 "./Pgram.y"
    {
				/* Never generate corresponding species. */
				(yyval.tnode) = NULL;
			}
    break;

  case 96:
#line 920 "./Pgram.y"
    {
				(yyval.tnode) = tlist_add((yyvsp[(1) - (2)].tnode), (yyvsp[(2) - (2)].tnode));
			}
    break;

  case 97:
#line 924 "./Pgram.y"
    {
				(yyval.tnode) = tmknode(GEN_INDATA_DCLS, 0, (yyvsp[(1) - (1)].tnode), 0);
			}
    break;

  case 98:
#line 930 "./Pgram.y"
    {
				if ((yyvsp[(1) - (3)].tnode)->species == CLASSTYPES_TYPEDEF) {
					insertTypeNames((yyvsp[(2) - (3)].tnode));
					(yyvsp[(1) - (3)].tnode)->species = CLASSTYPES_NORMAL;
				}
				(yyval.tnode) = tmknode(GEN_INDATA_DCL, INIT_DCL_SPEC,
					(yyvsp[(1) - (3)].tnode), (yyvsp[(2) - (3)].tnode));
				tsrc_pos((yyval.tnode), NULL, (yyvsp[(3) - (3)].token).srcpos);
			}
    break;

  case 99:
#line 940 "./Pgram.y"
    {
				if ((yyvsp[(1) - (2)].tnode)->species == CLASSTYPES_TYPEDEF)
					(yyvsp[(1) - (2)].tnode)->species = CLASSTYPES_NORMAL;
				(yyval.tnode) = tmknode(GEN_INDATA_DCL, INIT_DCL_NOSPEC,
					(yyvsp[(1) - (2)].tnode), 0);
				tsrc_pos((yyval.tnode), NULL, (yyvsp[(2) - (2)].token).srcpos);
			}
    break;

  case 100:
#line 948 "./Pgram.y"
    {
				(yyval.tnode) = (yyvsp[(2) - (2)].tnode);
				tsrc_pos((yyval.tnode), (yyvsp[(1) - (2)].token).srcpos, NULL);
			}
    break;

  case 101:
#line 955 "./Pgram.y"
    {
				(yyval.tnode) = tmknode(GEN_DATA_SPECS, 0, (yyvsp[(1) - (1)].tnode), 0);
			}
    break;

  case 102:
#line 959 "./Pgram.y"
    {
				(yyval.tnode) = tlist_add((yyvsp[(1) - (3)].tnode), (yyvsp[(3) - (3)].tnode));
			}
    break;

  case 103:
#line 965 "./Pgram.y"
    {
				(yyval.tnode) = tmknode(GEN_DATA_SPEC, DATA_SPEC_INIT,
					(yyvsp[(1) - (2)].tnode), (yyvsp[(2) - (2)].tnode));
			}
    break;

  case 104:
#line 970 "./Pgram.y"
    {
				(yyval.tnode) = tmknode(GEN_DATA_SPEC, DATA_SPEC, (yyvsp[(1) - (1)].tnode), 0);
			}
    break;

  case 105:
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

				first = (yyvsp[(1) - (1)].tnode);
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
				(yyval.tnode) = (yyvsp[(1) - (1)].tnode);
			}
    break;

  case 106:
#line 1001 "./Pgram.y"
    {
				(yyval.tnode) = (yyvsp[(1) - (1)].tnode);
			}
    break;

  case 107:
#line 1007 "./Pgram.y"
    {
				if ((yyvsp[(2) - (2)].tnode)->species == FUNC_STARS_SPEC) {
					tlist_ladd((yyvsp[(2) - (2)].tnode)->down->over, (yyvsp[(1) - (2)].tnode));
					(yyval.tnode) = (yyvsp[(2) - (2)].tnode);
				} else {
					(yyval.tnode) = tmknode(GEN_DATA_ITEM,
						FUNC_STARS_SPEC,
						tmknode(GEN_STARS, 0, (yyvsp[(1) - (2)].tnode), 0),
						(yyvsp[(2) - (2)].tnode));
				}
			}
    break;

  case 108:
#line 1019 "./Pgram.y"
    {
				(yyval.tnode) = (yyvsp[(1) - (1)].tnode);
			}
    break;

  case 109:
#line 1023 "./Pgram.y"
    {
				(yyval.tnode) = tmknode(GEN_DATA_ITEM, DATA_NAME, (yyvsp[(1) - (1)].tnode), 0);
			}
    break;

  case 110:
#line 1029 "./Pgram.y"
    {
				(yyval.tnode) = tmknode(GEN_DATA_ITEM,
					FUNC_SPEC_NFCALL, (yyvsp[(1) - (3)].tnode), 0);
				tsrc_pos((yyval.tnode), NULL, (yyvsp[(3) - (3)].token).srcpos);
			}
    break;

  case 111:
#line 1035 "./Pgram.y"
    {
				(yyval.tnode) = tmknode(GEN_DATA_ITEM,
					FUNC_SPEC_ARRAY_EXPR, (yyvsp[(1) - (4)].tnode), (yyvsp[(3) - (4)].tnode));
				tsrc_pos((yyval.tnode), NULL, (yyvsp[(4) - (4)].token).srcpos);
			}
    break;

  case 112:
#line 1041 "./Pgram.y"
    {
				(yyval.tnode) = tmknode(GEN_DATA_ITEM,
					FUNC_SPEC_ARRAY, (yyvsp[(1) - (3)].tnode), 0);
				tsrc_pos((yyval.tnode), NULL, (yyvsp[(3) - (3)].token).srcpos);
			}
    break;

  case 113:
#line 1047 "./Pgram.y"
    {
				(yyval.tnode) = tmknode(GEN_DATA_ITEM,
					FUNC_SPEC_INHERIT, (yyvsp[(2) - (3)].tnode), 0);
				tsrc_pos((yyval.tnode), (yyvsp[(1) - (3)].token).srcpos, (yyvsp[(3) - (3)].token).srcpos);
			}
    break;

  case 114:
#line 1053 "./Pgram.y"
    {
				(yyval.tnode) = tmknode(GEN_DATA_ITEM,
					FUNC_SPEC_ANSI, (yyvsp[(1) - (4)].tnode), (yyvsp[(3) - (4)].tnode));
				tsrc_pos((yyval.tnode), NULL, (yyvsp[(4) - (4)].token).srcpos);
			}
    break;

  case 115:
#line 1059 "./Pgram.y"
    {
				(yyval.tnode) = tmknode(GEN_DATA_ITEM,
					FUNC_SPEC_ANSI_E, (yyvsp[(1) - (6)].tnode), (yyvsp[(3) - (6)].tnode));
				tsrc_pos((yyval.tnode), NULL, (yyvsp[(6) - (6)].token).srcpos);
			}
    break;

  case 116:
#line 1065 "./Pgram.y"
    {
				(yyval.tnode) = tmknode(GEN_DATA_ITEM,
					FUNC_SPEC_E_ANSI, (yyvsp[(1) - (4)].tnode), 0);
				tsrc_pos((yyval.tnode), NULL, (yyvsp[(4) - (4)].token).srcpos);
			}
    break;

  case 117:
#line 1073 "./Pgram.y"
    {
				(yyval.tnode) = tmknode(GEN_INIT_LIST, 0, (yyvsp[(1) - (1)].tnode), 0);
			}
    break;

  case 118:
#line 1077 "./Pgram.y"
    {
				(yyval.tnode) = tlist_add((yyvsp[(1) - (3)].tnode), (yyvsp[(3) - (3)].tnode));
			}
    break;

  case 119:
#line 1083 "./Pgram.y"
    {
				(yyval.tnode) = tmknode(GEN_INIT_ITEM, INIT_EXPR,
					(yyvsp[(1) - (1)].tnode), 0);
			}
    break;

  case 120:
#line 1088 "./Pgram.y"
    {
				(yyval.tnode) = tmknode(GEN_INIT_ITEM, INIT_LIST,
					(yyvsp[(2) - (3)].tnode), 0);
				tsrc_pos((yyval.tnode), (yyvsp[(1) - (3)].token).srcpos, (yyvsp[(3) - (3)].token).srcpos);
			}
    break;

  case 121:
#line 1094 "./Pgram.y"
    {
				(yyval.tnode) = tmknode(GEN_INIT_ITEM, INIT_LIST,
					(yyvsp[(2) - (4)].tnode), 0);
				tsrc_pos((yyval.tnode), (yyvsp[(1) - (4)].token).srcpos, (yyvsp[(4) - (4)].token).srcpos);
			}
    break;

  case 122:
#line 1102 "./Pgram.y"
    {
				(yyval.tnode) = tmknode(GEN_INITIALIZER, INITIALIZER_EXPR,
					(yyvsp[(2) - (2)].tnode), 0);
				tsrc_pos((yyval.tnode), (yyvsp[(1) - (2)].token).srcpos, NULL);
			}
    break;

  case 123:
#line 1108 "./Pgram.y"
    {
				(yyval.tnode) = tmknode(GEN_INITIALIZER, INITIALIZER_LIST,
					(yyvsp[(3) - (4)].tnode), 0);
				tsrc_pos((yyval.tnode), (yyvsp[(1) - (4)].token).srcpos, (yyvsp[(4) - (4)].token).srcpos);
			}
    break;

  case 124:
#line 1114 "./Pgram.y"
    {
				/* Ignore extra comma! */
				(yyval.tnode) = tmknode(GEN_INITIALIZER, INITIALIZER_LIST,
					(yyvsp[(3) - (5)].tnode), 0);
				tsrc_pos((yyval.tnode), (yyvsp[(1) - (5)].token).srcpos, (yyvsp[(5) - (5)].token).srcpos);
			}
    break;

  case 125:
#line 1123 "./Pgram.y"
    {
				(yyval.tnode) = tmknode(GEN_COMPSTMT, COMPSTMT_DCL_STMTS,
					(yyvsp[(2) - (4)].tnode), (yyvsp[(3) - (4)].tnode));
				tsrc_pos((yyval.tnode), (yyvsp[(1) - (4)].token).srcpos, (yyvsp[(4) - (4)].token).srcpos);
			}
    break;

  case 126:
#line 1129 "./Pgram.y"
    {
				(yyval.tnode) = tmknode(GEN_COMPSTMT, COMPSTMT_STMTS,
					(yyvsp[(2) - (3)].tnode), 0);
				tsrc_pos((yyval.tnode), (yyvsp[(1) - (3)].token).srcpos, (yyvsp[(3) - (3)].token).srcpos);
			}
    break;

  case 127:
#line 1135 "./Pgram.y"
    {
				(yyval.tnode) = tmknode(GEN_COMPSTMT, COMPSTMT_DCL,
					(yyvsp[(2) - (3)].tnode), 0);
				tsrc_pos((yyval.tnode), (yyvsp[(1) - (3)].token).srcpos, (yyvsp[(3) - (3)].token).srcpos);
			}
    break;

  case 128:
#line 1141 "./Pgram.y"
    {
				(yyval.tnode) = tmknode(GEN_COMPSTMT, COMPSTMT_EMPTY,
					0, 0);
				tsrc_pos((yyval.tnode), (yyvsp[(1) - (2)].token).srcpos, (yyvsp[(2) - (2)].token).srcpos);
			}
    break;

  case 129:
#line 1149 "./Pgram.y"
    {
				(yyval.tnode) = tmknode(GEN_STMT, STMT_EMPTY, 0, 0);
				tsrc_pos((yyval.tnode), (yyvsp[(1) - (2)].token).srcpos, (yyvsp[(1) - (2)].token).srcpos);
			}
    break;

  case 130:
#line 1155 "./Pgram.y"
    {
				(yyval.tnode) = tmknode(GEN_STMT, STMT_EXPR, (yyvsp[(1) - (2)].tnode), 0);
				tsrc_pos((yyval.tnode), NULL, (yyvsp[(2) - (2)].token).srcpos);
			}
    break;

  case 131:
#line 1160 "./Pgram.y"
    {
				(yyval.tnode) = tmknode(GEN_STMT, STMT_EMPTY, 0, 0);
				tsrc_pos((yyval.tnode), (yyvsp[(1) - (1)].token).srcpos, (yyvsp[(1) - (1)].token).srcpos);
			}
    break;

  case 132:
#line 1165 "./Pgram.y"
    {
				(yyval.tnode) = tmknode(GEN_STMT, STMT_COMPSTMT, (yyvsp[(1) - (1)].tnode), 0);
			}
    break;

  case 133:
#line 1169 "./Pgram.y"
    {
				(yyval.tnode) = tmknode(GEN_STMT, STMT_IF_ELSE, (yyvsp[(3) - (7)].tnode), (yyvsp[(5) - (7)].tnode));
				tlist_add((yyval.tnode), (yyvsp[(7) - (7)].tnode));
				tsrc_pos((yyval.tnode), (yyvsp[(1) - (7)].token).srcpos, NULL);
			}
    break;

  case 134:
#line 1181 "./Pgram.y"
    {
				(yyval.tnode) = tmknode(GEN_STMT, STMT_IF, (yyvsp[(3) - (5)].tnode), (yyvsp[(5) - (5)].tnode));
				tsrc_pos((yyval.tnode), (yyvsp[(1) - (5)].token).srcpos, NULL);
			}
    break;

  case 135:
#line 1186 "./Pgram.y"
    {
				(yyval.tnode) = tmknode(GEN_STMT, STMT_WHILE, (yyvsp[(3) - (5)].tnode), (yyvsp[(5) - (5)].tnode));
				tsrc_pos((yyval.tnode), (yyvsp[(1) - (5)].token).srcpos, NULL);
			}
    break;

  case 136:
#line 1191 "./Pgram.y"
    {
				(yyval.tnode) = tmknode(GEN_STMT, STMT_DO, (yyvsp[(2) - (7)].tnode), (yyvsp[(5) - (7)].tnode));
				tsrc_pos((yyval.tnode), (yyvsp[(1) - (7)].token).srcpos, (yyvsp[(7) - (7)].token).srcpos);
			}
    break;

  case 137:
#line 1196 "./Pgram.y"
    {
				if ((yyvsp[(9) - (9)].tnode)->species == STMT_EMPTY) {
					(yyval.tnode) = tmknode(GEN_STMT, STMT_FOR_EEE_,
						(yyvsp[(3) - (9)].tnode), (yyvsp[(5) - (9)].tnode));
					tlist_add((yyval.tnode), (yyvsp[(7) - (9)].tnode));
					tsrc_pos((yyval.tnode), (yyvsp[(1) - (9)].token).srcpos, (yyvsp[(9) - (9)].tnode)->srcpos);
					tfreenode((yyvsp[(9) - (9)].tnode));
				} else {
					(yyval.tnode) = tmknode(GEN_STMT, STMT_FOR_EEES,
						(yyvsp[(3) - (9)].tnode), (yyvsp[(5) - (9)].tnode));
					tlist_add((yyval.tnode), (yyvsp[(7) - (9)].tnode));
					tlist_add((yyval.tnode), (yyvsp[(9) - (9)].tnode));
					tsrc_pos((yyval.tnode), (yyvsp[(1) - (9)].token).srcpos, (yyvsp[(9) - (9)].tnode)->srcpos);
				}
			}
    break;

  case 138:
#line 1212 "./Pgram.y"
    {
				if ((yyvsp[(8) - (8)].tnode)->species == STMT_EMPTY) {
					(yyval.tnode) = tmknode(GEN_STMT, STMT_FOR_EE__,
						(yyvsp[(3) - (8)].tnode), (yyvsp[(5) - (8)].tnode));
					tsrc_pos((yyval.tnode), (yyvsp[(1) - (8)].token).srcpos, (yyvsp[(8) - (8)].tnode)->srcpos);
					tfreenode((yyvsp[(8) - (8)].tnode));
				} else {
					(yyval.tnode) = tmknode(GEN_STMT, STMT_FOR_EE_S,
						(yyvsp[(3) - (8)].tnode), (yyvsp[(5) - (8)].tnode));
					tlist_add((yyval.tnode), (yyvsp[(8) - (8)].tnode));
					tsrc_pos((yyval.tnode), (yyvsp[(1) - (8)].token).srcpos, (yyvsp[(8) - (8)].tnode)->srcpos);
				}
			}
    break;

  case 139:
#line 1226 "./Pgram.y"
    {
				if ((yyvsp[(8) - (8)].tnode)->species == STMT_EMPTY) {
					(yyval.tnode) = tmknode(GEN_STMT, STMT_FOR_E_E_,
						(yyvsp[(3) - (8)].tnode), (yyvsp[(6) - (8)].tnode));
					tsrc_pos((yyval.tnode), (yyvsp[(1) - (8)].token).srcpos, (yyvsp[(8) - (8)].tnode)->srcpos);
					tfreenode((yyvsp[(8) - (8)].tnode));
				} else {
					(yyval.tnode) = tmknode(GEN_STMT, STMT_FOR_E_ES,
						(yyvsp[(3) - (8)].tnode), (yyvsp[(6) - (8)].tnode));
					tlist_add((yyval.tnode), (yyvsp[(8) - (8)].tnode));
					tsrc_pos((yyval.tnode), (yyvsp[(1) - (8)].token).srcpos, (yyvsp[(8) - (8)].tnode)->srcpos);
				}
			}
    break;

  case 140:
#line 1240 "./Pgram.y"
    {
				if ((yyvsp[(7) - (7)].tnode)->species == STMT_EMPTY) {
					(yyval.tnode) = tmknode(GEN_STMT, STMT_FOR_E___,
						(yyvsp[(3) - (7)].tnode), 0);
					tsrc_pos((yyval.tnode), (yyvsp[(1) - (7)].token).srcpos, (yyvsp[(7) - (7)].tnode)->srcpos);
					tfreenode((yyvsp[(7) - (7)].tnode));
				} else {
				        (yyval.tnode) = tmknode(GEN_STMT, STMT_FOR_E__S,
						     (yyvsp[(3) - (7)].tnode), (yyvsp[(7) - (7)].tnode));
				        tsrc_pos((yyval.tnode), (yyvsp[(1) - (7)].token).srcpos, (yyvsp[(7) - (7)].tnode)->srcpos);
				}
			}
    break;

  case 141:
#line 1253 "./Pgram.y"
    {
				if ((yyvsp[(8) - (8)].tnode)->species == STMT_EMPTY) {
					(yyval.tnode) = tmknode(GEN_STMT, STMT_FOR__EE_,
						(yyvsp[(4) - (8)].tnode), (yyvsp[(6) - (8)].tnode));
					tsrc_pos((yyval.tnode), (yyvsp[(1) - (8)].token).srcpos, (yyvsp[(8) - (8)].tnode)->srcpos);
					tfreenode((yyvsp[(8) - (8)].tnode));
				} else {
					(yyval.tnode) = tmknode(GEN_STMT, STMT_FOR__EES,
						(yyvsp[(4) - (8)].tnode), (yyvsp[(6) - (8)].tnode));
					tlist_add((yyval.tnode), (yyvsp[(8) - (8)].tnode));
					tsrc_pos((yyval.tnode), (yyvsp[(1) - (8)].token).srcpos, (yyvsp[(8) - (8)].tnode)->srcpos);
				}
			}
    break;

  case 142:
#line 1267 "./Pgram.y"
    {
				if ((yyvsp[(7) - (7)].tnode)->species == STMT_EMPTY) {
					(yyval.tnode) = tmknode(GEN_STMT, STMT_FOR__E__,
						(yyvsp[(4) - (7)].tnode), 0);
					tsrc_pos((yyval.tnode), (yyvsp[(1) - (7)].token).srcpos, (yyvsp[(7) - (7)].tnode)->srcpos);
					tfreenode((yyvsp[(7) - (7)].tnode));
				} else {
				        (yyval.tnode) = tmknode(GEN_STMT, STMT_FOR__E_S,
						(yyvsp[(4) - (7)].tnode), (yyvsp[(7) - (7)].tnode));
				        tsrc_pos((yyval.tnode), (yyvsp[(1) - (7)].token).srcpos, (yyvsp[(7) - (7)].tnode)->srcpos);
				}
			}
    break;

  case 143:
#line 1280 "./Pgram.y"
    {
				if ((yyvsp[(7) - (7)].tnode)->species == STMT_EMPTY) {
					(yyval.tnode) = tmknode(GEN_STMT, STMT_FOR___E_,
						(yyvsp[(5) - (7)].tnode), 0);
					tsrc_pos((yyval.tnode), (yyvsp[(1) - (7)].token).srcpos, (yyvsp[(7) - (7)].tnode)->srcpos);
					tfreenode((yyvsp[(7) - (7)].tnode));
				} else {
				        (yyval.tnode) = tmknode(GEN_STMT, STMT_FOR___ES,
						(yyvsp[(5) - (7)].tnode), (yyvsp[(7) - (7)].tnode));
					tsrc_pos((yyval.tnode), (yyvsp[(1) - (7)].token).srcpos, (yyvsp[(7) - (7)].tnode)->srcpos);
				}
			}
    break;

  case 144:
#line 1293 "./Pgram.y"
    {
				(yyval.tnode) = tmknode(GEN_STMT, STMT_FOR____S, (yyvsp[(6) - (6)].tnode), 0);
				tsrc_pos((yyval.tnode), (yyvsp[(1) - (6)].token).srcpos, NULL);
			}
    break;

  case 145:
#line 1298 "./Pgram.y"
    {
				(yyval.tnode) = tmknode(GEN_STMT, STMT_SWITCH, (yyvsp[(3) - (5)].tnode), (yyvsp[(5) - (5)].tnode));
				tsrc_pos((yyval.tnode), (yyvsp[(1) - (5)].token).srcpos, NULL);
			}
    break;

  case 146:
#line 1303 "./Pgram.y"
    {
				(yyval.tnode) = tmknode(GEN_STMT, STMT_CASE, (yyvsp[(2) - (4)].tnode), (yyvsp[(4) - (4)].tnode));
				tsrc_pos((yyval.tnode), (yyvsp[(1) - (4)].token).srcpos, NULL);
			}
    break;

  case 147:
#line 1308 "./Pgram.y"
    {
				(yyval.tnode) = tmknode(GEN_STMT, STMT_DEFAULT, (yyvsp[(3) - (3)].tnode), 0);
				tsrc_pos((yyval.tnode), (yyvsp[(1) - (3)].token).srcpos, NULL);
			}
    break;

  case 148:
#line 1313 "./Pgram.y"
    {
				(yyval.tnode) = tmknode(GEN_STMT, STMT_BREAK, 0, 0);
				tsrc_pos((yyval.tnode), (yyvsp[(1) - (2)].token).srcpos, (yyvsp[(2) - (2)].token).srcpos);
			}
    break;

  case 149:
#line 1318 "./Pgram.y"
    {
				(yyval.tnode) = tmknode(GEN_STMT, STMT_CONTINUE, 0, 0);
				tsrc_pos((yyval.tnode), (yyvsp[(1) - (2)].token).srcpos, (yyvsp[(2) - (2)].token).srcpos);
			}
    break;

  case 150:
#line 1323 "./Pgram.y"
    {
				(yyval.tnode) = tmknode(GEN_STMT, STMT_RETURN_EXPR,
					(yyvsp[(2) - (3)].tnode), 0);
				tsrc_pos((yyval.tnode), (yyvsp[(1) - (3)].token).srcpos, (yyvsp[(3) - (3)].token).srcpos);
			}
    break;

  case 151:
#line 1329 "./Pgram.y"
    {
				(yyval.tnode) = tmknode(GEN_STMT, STMT_RETURN, 0, 0);
				tsrc_pos((yyval.tnode), (yyvsp[(1) - (2)].token).srcpos, (yyvsp[(2) - (2)].token).srcpos);
			}
    break;

  case 152:
#line 1334 "./Pgram.y"
    {
				(yyval.tnode) = tmknode(GEN_STMT, STMT_GOTO, (yyvsp[(2) - (3)].tnode), 0);
				tsrc_pos((yyval.tnode), (yyvsp[(1) - (3)].token).srcpos, (yyvsp[(3) - (3)].token).srcpos);
			}
    break;

  case 153:
#line 1339 "./Pgram.y"
    {
				(yyval.tnode) = tmknode(GEN_STMT, STMT_LABEL, (yyvsp[(1) - (3)].tnode), (yyvsp[(3) - (3)].tnode));
			}
    break;

  case 154:
#line 1346 "./Pgram.y"
    {
				(yyval.tnode) = tmknode(GEN_EXP_LIST, 0, (yyvsp[(1) - (1)].tnode), 0);
			}
    break;

  case 155:
#line 1350 "./Pgram.y"
    {
				(yyval.tnode) = tlist_add((yyvsp[(1) - (3)].tnode), (yyvsp[(3) - (3)].tnode));
			}
    break;

  case 156:
#line 1356 "./Pgram.y"
    {
				(yyval.tnode) = tmknode(GEN_EXPR, EXPR_BINOP, (yyvsp[(1) - (3)].tnode), (yyvsp[(2) - (3)].tnode));
				tlist_add((yyval.tnode), (yyvsp[(3) - (3)].tnode));
			}
    break;

  case 157:
#line 1362 "./Pgram.y"
    {
				(yyval.tnode) = tmknode(GEN_EXPR, EXPR_BINOP, (yyvsp[(1) - (3)].tnode), (yyvsp[(2) - (3)].tnode));
				tlist_add((yyval.tnode), (yyvsp[(3) - (3)].tnode));
			}
    break;

  case 158:
#line 1367 "./Pgram.y"
    {
				(yyval.tnode) = tmknode(GEN_EXPR, EXPR_COMMA, (yyvsp[(1) - (3)].tnode), (yyvsp[(3) - (3)].tnode));
			}
    break;

  case 159:
#line 1371 "./Pgram.y"
    {
				(yyval.tnode) = tmknode(GEN_EXPR, EXPR_BINOP, (yyvsp[(1) - (3)].tnode),
					tmkleaf(GEN_BINOP, BINOP_PLUS,
						(yyvsp[(2) - (3)].token).srcpos, 0));
				tlist_add((yyval.tnode), (yyvsp[(3) - (3)].tnode));
			}
    break;

  case 160:
#line 1378 "./Pgram.y"
    {
				(yyval.tnode) = tmknode(GEN_EXPR, EXPR_BINOP, (yyvsp[(1) - (3)].tnode),
					tmkleaf(GEN_BINOP, BINOP_MINUS,
						(yyvsp[(2) - (3)].token).srcpos, 0));
				tlist_add((yyval.tnode), (yyvsp[(3) - (3)].tnode));
			}
    break;

  case 161:
#line 1385 "./Pgram.y"
    {
				(yyval.tnode) = tmknode(GEN_EXPR, EXPR_BINOP, (yyvsp[(1) - (3)].tnode),
					tmkleaf(GEN_BINOP, BINOP_MUL, (yyvsp[(2) - (3)].token).srcpos,
						0));
				tlist_add((yyval.tnode), (yyvsp[(3) - (3)].tnode));
			}
    break;

  case 162:
#line 1392 "./Pgram.y"
    {
				(yyval.tnode) = tmknode(GEN_EXPR, EXPR_BINOP, (yyvsp[(1) - (3)].tnode),
					tmkleaf(GEN_BINOP, BINOP_DIV, (yyvsp[(2) - (3)].token).srcpos,
						0));
				tlist_add((yyval.tnode), (yyvsp[(3) - (3)].tnode));
			}
    break;

  case 163:
#line 1399 "./Pgram.y"
    {
				(yyval.tnode) = tmknode(GEN_EXPR, EXPR_BINOP, (yyvsp[(1) - (3)].tnode),
					tmkleaf(GEN_BINOP, BINOP_MOD, (yyvsp[(2) - (3)].token).srcpos,
						0));
				tlist_add((yyval.tnode), (yyvsp[(3) - (3)].tnode));
			}
    break;

  case 164:
#line 1406 "./Pgram.y"
    {
				(yyval.tnode) = tmknode(GEN_EXPR, EXPR_BINOP, (yyvsp[(1) - (3)].tnode),
					tmkleaf(GEN_BINOP, BINOP_LS, (yyvsp[(2) - (3)].token).srcpos,
						0));
				tlist_add((yyval.tnode), (yyvsp[(3) - (3)].tnode));
			}
    break;

  case 165:
#line 1413 "./Pgram.y"
    {
				(yyval.tnode) = tmknode(GEN_EXPR, EXPR_BINOP, (yyvsp[(1) - (3)].tnode),
					tmkleaf(GEN_BINOP, BINOP_RS, (yyvsp[(2) - (3)].token).srcpos,
						0));
				tlist_add((yyval.tnode), (yyvsp[(3) - (3)].tnode));
			}
    break;

  case 166:
#line 1420 "./Pgram.y"
    {
				(yyval.tnode) = tmknode(GEN_EXPR, EXPR_BINOP, (yyvsp[(1) - (3)].tnode),
					tmkleaf(GEN_BINOP, BINOP_OR, (yyvsp[(2) - (3)].token).srcpos,
						0));
				tlist_add((yyval.tnode), (yyvsp[(3) - (3)].tnode));
			}
    break;

  case 167:
#line 1427 "./Pgram.y"
    {
				(yyval.tnode) = tmknode(GEN_EXPR, EXPR_BINOP, (yyvsp[(1) - (3)].tnode),
					tmkleaf(GEN_BINOP, BINOP_ER, (yyvsp[(2) - (3)].token).srcpos,
						0));
				tlist_add((yyval.tnode), (yyvsp[(3) - (3)].tnode));
			}
    break;

  case 168:
#line 1434 "./Pgram.y"
    {
				(yyval.tnode) = tmknode(GEN_EXPR, EXPR_BINOP, (yyvsp[(1) - (3)].tnode),
					tmkleaf(GEN_BINOP, BINOP_AND, (yyvsp[(2) - (3)].token).srcpos,
						0));
				tlist_add((yyval.tnode), (yyvsp[(3) - (3)].tnode));
			}
    break;

  case 169:
#line 1441 "./Pgram.y"
    {
				(yyval.tnode) = tmknode(GEN_EXPR, EXPR_BINOP, (yyvsp[(1) - (3)].tnode),
					tmkleaf(GEN_BINOP, BINOP_ANDAND,
						(yyvsp[(2) - (3)].token).srcpos, 0));
				tlist_add((yyval.tnode), (yyvsp[(3) - (3)].tnode));
			}
    break;

  case 170:
#line 1448 "./Pgram.y"
    {
				(yyval.tnode) = tmknode(GEN_EXPR, EXPR_BINOP, (yyvsp[(1) - (3)].tnode),
					tmkleaf(GEN_BINOP, BINOP_OROR,
						(yyvsp[(2) - (3)].token).srcpos, 0));
				tlist_add((yyval.tnode), (yyvsp[(3) - (3)].tnode));
			}
    break;

  case 171:
#line 1455 "./Pgram.y"
    {
				(yyval.tnode) = tmknode(GEN_EXPR, EXPR_QCOLON, (yyvsp[(1) - (5)].tnode), (yyvsp[(3) - (5)].tnode));
				tlist_add((yyval.tnode), (yyvsp[(5) - (5)].tnode));
			}
    break;

  case 172:
#line 1460 "./Pgram.y"
    {
				(yyval.tnode) = tmknode(GEN_EXPR, EXPR_BINOP, (yyvsp[(1) - (3)].tnode), (yyvsp[(2) - (3)].tnode));
				tlist_add((yyval.tnode), (yyvsp[(3) - (3)].tnode));
			}
    break;

  case 173:
#line 1465 "./Pgram.y"
    {
				(yyval.tnode) = tmknode(GEN_EXPR, EXPR_BINOP, (yyvsp[(1) - (3)].tnode),
					tmkleaf(GEN_BINOP, BINOP_ASGN,
						(yyvsp[(2) - (3)].token).srcpos, 0));
				tlist_add((yyval.tnode), (yyvsp[(3) - (3)].tnode));
			}
    break;

  case 174:
#line 1472 "./Pgram.y"
    {
				(yyval.tnode) = (yyvsp[(1) - (1)].tnode);
			}
    break;

  case 175:
#line 1478 "./Pgram.y"
    {
				(yyval.tnode) = tmknode(GEN_EXPR, EXPR_INCOP, (yyvsp[(1) - (2)].tnode),
					tmkleaf(GEN_INCOP, INCOP_INC, (yyvsp[(2) - (2)].token).srcpos,
						0));
			}
    break;

  case 176:
#line 1484 "./Pgram.y"
    {
				(yyval.tnode) = tmknode(GEN_EXPR, EXPR_INCOP, (yyvsp[(1) - (2)].tnode),
					tmkleaf(GEN_INCOP, INCOP_DEC, (yyvsp[(2) - (2)].token).srcpos,
						0));
			}
    break;

  case 177:
#line 1490 "./Pgram.y"
    {
				(yyval.tnode) = tmknode(GEN_EXPR, EXPR_UNOP,
					tmkleaf(GEN_UNOP, UNOP_INC, (yyvsp[(1) - (2)].token).srcpos,
						0),
					(yyvsp[(2) - (2)].tnode));
			}
    break;

  case 178:
#line 1497 "./Pgram.y"
    {
				(yyval.tnode) = tmknode(GEN_EXPR, EXPR_UNOP,
					tmkleaf(GEN_UNOP, UNOP_DEC, (yyvsp[(1) - (2)].token).srcpos,
						0),
					(yyvsp[(2) - (2)].tnode));
			}
    break;

  case 179:
#line 1504 "./Pgram.y"
    {
				(yyval.tnode) = tmknode(GEN_EXPR, EXPR_UNOP,
					tmkleaf(GEN_UNOP, UNOP_AND, (yyvsp[(1) - (2)].token).srcpos,
						0),
					(yyvsp[(2) - (2)].tnode));
			}
    break;

  case 180:
#line 1511 "./Pgram.y"
    {
				(yyval.tnode) = tmknode(GEN_EXPR, EXPR_UNOP,
					tmkleaf(GEN_UNOP, UNOP_COMPL, (yyvsp[(1) - (2)].token).srcpos,
						0),
					(yyvsp[(2) - (2)].tnode));
			}
    break;

  case 181:
#line 1518 "./Pgram.y"
    {
				(yyval.tnode) = tmknode(GEN_EXPR, EXPR_UNOP,
					tmkleaf(GEN_UNOP, UNOP_NOT, (yyvsp[(1) - (2)].token).srcpos,
						0),
					(yyvsp[(2) - (2)].tnode));
			}
    break;

  case 182:
#line 1525 "./Pgram.y"
    {
				(yyval.tnode) = tmknode(GEN_EXPR, EXPR_UNOP,
					tmkleaf(GEN_UNOP, UNOP_MINUS, (yyvsp[(1) - (2)].token).srcpos,
						0),
					(yyvsp[(2) - (2)].tnode));
			}
    break;

  case 183:
#line 1532 "./Pgram.y"
    {
				/*
				* This rule is not in the internal grammar
				* so we have to fake it.
				*/
				(yyval.tnode) = (yyvsp[(2) - (2)].tnode);
			}
    break;

  case 184:
#line 1540 "./Pgram.y"
    {
				(yyval.tnode) = tmknode(GEN_EXPR, EXPR_SIZEOF, (yyvsp[(2) - (2)].tnode), 0);
				tsrc_pos((yyval.tnode), (yyvsp[(1) - (2)].token).srcpos, NULL);
			}
    break;

  case 185:
#line 1545 "./Pgram.y"
    {
				(yyval.tnode) = tmknode(GEN_EXPR, EXPR_CAST, (yyvsp[(2) - (4)].tnode), (yyvsp[(4) - (4)].tnode));
				tsrc_pos((yyval.tnode), (yyvsp[(1) - (4)].token).srcpos, NULL);
			}
    break;

  case 186:
#line 1550 "./Pgram.y"
    {
				(yyval.tnode) = tmknode(GEN_EXPR, EXPR_SIZEOF_TYPE,
					(yyvsp[(3) - (4)].tnode), 0);
				tsrc_pos((yyval.tnode), (yyvsp[(1) - (4)].token).srcpos, (yyvsp[(4) - (4)].token).srcpos);
			}
    break;

  case 187:
#line 1556 "./Pgram.y"
    {
				(yyval.tnode) = tmknode(GEN_EXPR, EXPR_OFFSET, (yyvsp[(3) - (6)].tnode), (yyvsp[(5) - (6)].tnode));
				tsrc_pos((yyval.tnode), (yyvsp[(1) - (6)].token).srcpos, (yyvsp[(6) - (6)].token).srcpos);
			}
    break;

  case 188:
#line 1561 "./Pgram.y"
    {
				if ((yyvsp[(2) - (2)].tnode)->species == EXPR_LSTAR) {
					tlist_ladd((yyvsp[(2) - (2)].tnode)->down->over, (yyvsp[(1) - (2)].tnode));
					(yyval.tnode) = (yyvsp[(2) - (2)].tnode);
				} else {
					(yyval.tnode) = tmknode(GEN_EXPR, EXPR_LSTAR,
						tmknode(GEN_STARS, 0, (yyvsp[(1) - (2)].tnode), 0),
						(yyvsp[(2) - (2)].tnode));
				}
			}
    break;

  case 189:
#line 1572 "./Pgram.y"
    {
				(yyval.tnode) = tmknode(GEN_EXPR, EXPR_LARRAY, (yyvsp[(1) - (4)].tnode), (yyvsp[(3) - (4)].tnode));
				tsrc_pos((yyval.tnode), NULL, (yyvsp[(4) - (4)].token).srcpos);
			}
    break;

  case 190:
#line 1577 "./Pgram.y"
    {
				(yyval.tnode) = tmknode(GEN_EXPR, EXPR_LARROW, (yyvsp[(1) - (3)].tnode), (yyvsp[(3) - (3)].tnode));
			}
    break;

  case 191:
#line 1581 "./Pgram.y"
    {
				(yyval.tnode) = tmknode(GEN_EXPR, EXPR_LDOT, (yyvsp[(1) - (3)].tnode), (yyvsp[(3) - (3)].tnode));
			}
    break;

  case 192:
#line 1585 "./Pgram.y"
    {
				(yyval.tnode) = tmknode(GEN_EXPR, EXPR_LNAME, (yyvsp[(1) - (1)].tnode), 0);
			}
    break;

  case 193:
#line 1589 "./Pgram.y"
    {
				TNODE *p;

				if ((yyvsp[(1) - (4)].tnode)->species == EXPR_LNAME) {
					(yyvsp[(1) - (4)].tnode)->genus = GEN_FUNC_LP;
					(yyvsp[(1) - (4)].tnode)->species = FUNC_NAME_LP;
					(yyvsp[(1) - (4)].tnode)->down->genus = GEN_FNAME;
					p = (yyvsp[(1) - (4)].tnode);
				} else {
					p = tmknode(GEN_FUNC_LP, FUNC_EXPR_LP,
						(yyvsp[(1) - (4)].tnode), 0);
				}
				(yyval.tnode) = tmknode(GEN_EXPR, EXPR_LFCALL1, p, (yyvsp[(3) - (4)].tnode));
				tsrc_pos((yyval.tnode), NULL, (yyvsp[(4) - (4)].token).srcpos);
			}
    break;

  case 194:
#line 1605 "./Pgram.y"
    {
				TNODE *p;

				if ((yyvsp[(1) - (3)].tnode)->species == EXPR_LNAME) {
					(yyvsp[(1) - (3)].tnode)->genus = GEN_FUNC_LP;
					(yyvsp[(1) - (3)].tnode)->species = FUNC_NAME_LP;
					(yyvsp[(1) - (3)].tnode)->down->genus = GEN_FNAME;
					p = (yyvsp[(1) - (3)].tnode);
				} else {
					p = tmknode(GEN_FUNC_LP, FUNC_EXPR_LP,
						(yyvsp[(1) - (3)].tnode), 0);
				}
				(yyval.tnode) = tmknode(GEN_EXPR, EXPR_LFCALL0, p, 0);
				tsrc_pos((yyval.tnode), NULL, (yyvsp[(3) - (3)].token).srcpos);
			}
    break;

  case 195:
#line 1621 "./Pgram.y"
    {
				(yyval.tnode) = tmknode(GEN_EXPR, EXPR_ICON, 
					tmkleaf(GEN_ICON, 0,
						(yyvsp[(1) - (1)].token).srcpos, (yyvsp[(1) - (1)].token).text),
					0);
			}
    break;

  case 196:
#line 1628 "./Pgram.y"
    {
				(yyval.tnode) = tmknode(GEN_EXPR, EXPR_FCON,
					tmkleaf(GEN_FCON, 0,
						(yyvsp[(1) - (1)].token).srcpos, (yyvsp[(1) - (1)].token).text),
					0);
			}
    break;

  case 197:
#line 1635 "./Pgram.y"
    {
				(yyval.tnode) = tmknode(GEN_EXPR, EXPR_STRING, (yyvsp[(1) - (1)].tnode), 0);
			}
    break;

  case 198:
#line 1639 "./Pgram.y"
    {
				(yyval.tnode) = tmknode(GEN_EXPR, EXPR_INHERIT, (yyvsp[(2) - (3)].tnode), 0);
				tsrc_pos((yyval.tnode), (yyvsp[(1) - (3)].token).srcpos, (yyvsp[(3) - (3)].token).srcpos);
			}
    break;

  case 199:
#line 1646 "./Pgram.y"
    {
				(yyval.tnode) = tlist_add((yyvsp[(1) - (2)].tnode), 
					tmkleaf(GEN_STRING, 0,
						(yyvsp[(2) - (2)].token).srcpos, (yyvsp[(2) - (2)].token).text));
			}
    break;

  case 200:
#line 1652 "./Pgram.y"
    {
				(yyval.tnode) = tmknode(GEN_STRINGS, 0, 
					tmkleaf(GEN_STRING, 0,
						(yyvsp[(1) - (1)].token).srcpos, (yyvsp[(1) - (1)].token).text),
					0);
			}
    break;

  case 201:
#line 1661 "./Pgram.y"
    {
				if ((yyvsp[(1) - (2)].tnode)->species == CLASSTYPES_TYPEDEF) {
					parse_error((yyvsp[(1) - (2)].tnode)->srcpos,
						"typedef in cast");
					(yyvsp[(1) - (2)].tnode)->species = CLASSTYPES_NORMAL;
				}
				if ((yyvsp[(2) - (2)].tnode))
					(yyval.tnode) = tmknode(GEN_CAST_TYPE, CAST_TYPE,
						(yyvsp[(1) - (2)].tnode), (yyvsp[(2) - (2)].tnode));
				else 
					(yyval.tnode) = tmknode(GEN_CAST_TYPE,
						CAST_TYPE_NULL, (yyvsp[(1) - (2)].tnode), NULL);
			}
    break;

  case 202:
#line 1677 "./Pgram.y"
    {
				(yyval.tnode) = NULL;
			}
    break;

  case 203:
#line 1681 "./Pgram.y"
    {
				(yyval.tnode) = tmknode(GEN_NULL_DCL, NULL_N_FUNC, (yyvsp[(1) - (3)].tnode), 0);
				tsrc_pos((yyval.tnode), NULL, (yyvsp[(3) - (3)].token).srcpos);
			}
    break;

  case 204:
#line 1686 "./Pgram.y"
    {
				(yyval.tnode) = tmknode(GEN_NULL_DCL, NULL_ANSI, (yyvsp[(1) - (4)].tnode), (yyvsp[(3) - (4)].tnode));
				tsrc_pos((yyval.tnode), NULL, (yyvsp[(4) - (4)].token).srcpos);
			}
    break;

  case 205:
#line 1691 "./Pgram.y"
    {
				(yyval.tnode) = tmknode(GEN_NULL_DCL, NULL_ANSI_E, (yyvsp[(1) - (6)].tnode), (yyvsp[(3) - (6)].tnode));
				tsrc_pos((yyval.tnode), NULL, (yyvsp[(6) - (6)].token).srcpos);
			}
    break;

  case 206:
#line 1696 "./Pgram.y"
    {
				(yyval.tnode) = tmknode(GEN_NULL_DCL, NULL_E_ANSI, (yyvsp[(1) - (4)].tnode), 0);
				tsrc_pos((yyval.tnode), NULL, (yyvsp[(4) - (4)].token).srcpos);
			}
    break;

  case 207:
#line 1701 "./Pgram.y"
    {
				if ((yyvsp[(2) - (2)].tnode) == NULL)
					(yyval.tnode) = tmknode(GEN_NULL_DCL, NULL_STAR,
						(yyvsp[(1) - (2)].tnode), 0);
				else 
					(yyval.tnode) = tmknode(GEN_NULL_DCL, NULL_STAR_N,
						tmknode(GEN_STARS, 0, (yyvsp[(1) - (2)].tnode), 0),
						(yyvsp[(2) - (2)].tnode));
			}
    break;

  case 208:
#line 1711 "./Pgram.y"
    {
				if ((yyvsp[(1) - (3)].tnode) == NULL)
					(yyval.tnode) = tmknode(GEN_NULL_DCL, NULL_SUB,
						0, 0);
				else 
					(yyval.tnode) = tmknode(GEN_NULL_DCL, NULL_N_SUB,
						(yyvsp[(1) - (3)].tnode), 0);
				tsrc_pos((yyval.tnode), NULL, (yyvsp[(3) - (3)].token).srcpos);
			}
    break;

  case 209:
#line 1721 "./Pgram.y"
    {
				if ((yyvsp[(1) - (4)].tnode) == NULL)
					(yyval.tnode) = tmknode(GEN_NULL_DCL, NULL_SUB_E,
						(yyvsp[(3) - (4)].tnode), 0);
				else 
					(yyval.tnode) = tmknode(GEN_NULL_DCL,NULL_N_SUB_E,
						(yyvsp[(1) - (4)].tnode), (yyvsp[(3) - (4)].tnode));
				tsrc_pos((yyval.tnode), NULL, (yyvsp[(4) - (4)].token).srcpos);
			}
    break;

  case 210:
#line 1731 "./Pgram.y"
    {
				if ((yyvsp[(2) - (3)].tnode) == NULL)
					(yyval.tnode) = tmknode(GEN_NULL_DCL,
						NULL_INHERIT, 0, 0);
				else 
					(yyval.tnode) = tmknode(GEN_NULL_DCL,
						NULL_INHERIT_N, (yyvsp[(2) - (3)].tnode), 0);
				tsrc_pos((yyval.tnode), (yyvsp[(1) - (3)].token).srcpos, (yyvsp[(3) - (3)].token).srcpos);
			}
    break;

  case 215:
#line 1753 "./Pgram.y"
    {
				(yyval.tnode) = tmkleaf(GEN_TNAME, 0,
					(yyvsp[(1) - (1)].token).srcpos, (yyvsp[(1) - (1)].token).text);
			}
    break;

  case 216:
#line 1760 "./Pgram.y"
    {
				(yyval.tnode) = tmkleaf(GEN_NAME, 0, (yyvsp[(1) - (1)].token).srcpos, (yyvsp[(1) - (1)].token).text);
			}
    break;

  case 217:
#line 1766 "./Pgram.y"
    {
				(yyval.tnode) = tmkleaf(GEN_STAR, STAR_NORMAL, (yyvsp[(1) - (1)].token).srcpos, 0);
			}
    break;

  case 218:
#line 1771 "./Pgram.y"
    {
				(yyval.tnode) = tmknode(GEN_STAR, STAR_QUALS, (yyvsp[(2) - (2)].tnode), 0);
			}
    break;

  case 219:
#line 1777 "./Pgram.y"
    {
				(yyval.tnode) = tmknode(GEN_QUALS, 0, (yyvsp[(1) - (1)].tnode), 0);
			}
    break;

  case 220:
#line 1781 "./Pgram.y"
    {
				(yyval.tnode) = tlist_add((yyvsp[(1) - (2)].tnode), (yyvsp[(2) - (2)].tnode));
			}
    break;

  case 221:
#line 1787 "./Pgram.y"
    {
				(yyval.tnode) = tmkleaf(GEN_QUAL, QUAL_CONST, (yyvsp[(1) - (1)].token).srcpos, 0);
			}
    break;

  case 222:
#line 1792 "./Pgram.y"
    {
				(yyval.tnode) = tmkleaf(GEN_QUAL, QUAL_VOLATILE, (yyvsp[(1) - (1)].token).srcpos, 0);
			}
    break;

  case 223:
#line 1797 "./Pgram.y"
    {
				(yyval.tnode) = tmkleaf(GEN_BINOP, BINOP_APLUS,
					(yyvsp[(1) - (1)].token).srcpos, 0);
			}
    break;

  case 224:
#line 1803 "./Pgram.y"
    {
				(yyval.tnode) = tmkleaf(GEN_BINOP, BINOP_AMINUS,
					(yyvsp[(1) - (1)].token).srcpos, 0);
			}
    break;

  case 225:
#line 1809 "./Pgram.y"
    {
				(yyval.tnode) = tmkleaf(GEN_BINOP, BINOP_AMUL,
					(yyvsp[(1) - (1)].token).srcpos, 0);
			}
    break;

  case 226:
#line 1815 "./Pgram.y"
    {
				(yyval.tnode) = tmkleaf(GEN_BINOP, BINOP_ADIV,
					(yyvsp[(1) - (1)].token).srcpos, 0);
			}
    break;

  case 227:
#line 1821 "./Pgram.y"
    {
				(yyval.tnode) = tmkleaf(GEN_BINOP, BINOP_AMOD,
					(yyvsp[(1) - (1)].token).srcpos, 0);
			}
    break;

  case 228:
#line 1827 "./Pgram.y"
    {
				(yyval.tnode) = tmkleaf(GEN_BINOP, BINOP_ALS,
					(yyvsp[(1) - (1)].token).srcpos, 0);
			}
    break;

  case 229:
#line 1833 "./Pgram.y"
    {
				(yyval.tnode) = tmkleaf(GEN_BINOP, BINOP_ARS,
					(yyvsp[(1) - (1)].token).srcpos, 0);
			}
    break;

  case 230:
#line 1839 "./Pgram.y"
    {
				(yyval.tnode) = tmkleaf(GEN_BINOP, BINOP_AAND,
					(yyvsp[(1) - (1)].token).srcpos, 0);
			}
    break;

  case 231:
#line 1845 "./Pgram.y"
    {
				(yyval.tnode) = tmkleaf(GEN_BINOP, BINOP_AOR,
					(yyvsp[(1) - (1)].token).srcpos, 0);
			}
    break;

  case 232:
#line 1851 "./Pgram.y"
    {
				(yyval.tnode) = tmkleaf(GEN_BINOP, BINOP_AER,
					(yyvsp[(1) - (1)].token).srcpos, 0);
			}
    break;

  case 233:
#line 1857 "./Pgram.y"
    {
				(yyval.tnode) = tmkleaf(GEN_BINOP, BINOP_GTEQ,
					(yyvsp[(1) - (1)].token).srcpos, 0);
			}
    break;

  case 234:
#line 1863 "./Pgram.y"
    {
				(yyval.tnode) = tmkleaf(GEN_BINOP, BINOP_LTEQ,
					(yyvsp[(1) - (1)].token).srcpos, 0);
			}
    break;

  case 235:
#line 1869 "./Pgram.y"
    {
				(yyval.tnode) = tmkleaf(GEN_BINOP, BINOP_GT, (yyvsp[(1) - (1)].token).srcpos, 0);
			}
    break;

  case 236:
#line 1874 "./Pgram.y"
    {
				(yyval.tnode) = tmkleaf(GEN_BINOP, BINOP_LT, (yyvsp[(1) - (1)].token).srcpos, 0);
			}
    break;

  case 237:
#line 1879 "./Pgram.y"
    {
				(yyval.tnode) = tmkleaf(GEN_BINOP, BINOP_EQ, (yyvsp[(1) - (1)].token).srcpos, 0);
			}
    break;

  case 238:
#line 1884 "./Pgram.y"
    {
				(yyval.tnode) = tmkleaf(GEN_BINOP, BINOP_NEQ,
					(yyvsp[(1) - (1)].token).srcpos, 0);
			}
    break;


/* Line 1267 of yacc.c.  */
#line 4825 "y.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
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

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
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
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
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

