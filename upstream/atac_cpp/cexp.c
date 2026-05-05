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
#line 27 "./cexp.y"

#include "config.h"
#include <setjmp.h>
/* #define YYDEBUG 1 */

#ifdef HAVE_STDLIB_H
#include <stdlib.h>
#endif

#ifdef MULTIBYTE_CHARS
#include <locale.h>
#endif

#include <stdio.h>
#include <string.h>

typedef unsigned char U_CHAR;

/* This is used for communicating lists of keywords with cccp.c.  */
struct arglist {
  struct arglist *next;
  U_CHAR *name;
  int length;
  int argno;
};

/* Define a generic NULL if one hasn't already been defined.  */

#ifndef NULL
#define NULL 0
#endif

#ifndef GENERIC_PTR
#if defined (USE_PROTOTYPES) ? USE_PROTOTYPES : defined (__STDC__)
#define GENERIC_PTR void *
#else
#define GENERIC_PTR char *
#endif
#endif

/* Find the largest host integer type and set its size and type.  */

#ifndef HOST_BITS_PER_WIDE_INT

#if HOST_BITS_PER_LONG > HOST_BITS_PER_INT
#define HOST_BITS_PER_WIDE_INT HOST_BITS_PER_LONG
#define HOST_WIDE_INT long
#else
#define HOST_BITS_PER_WIDE_INT HOST_BITS_PER_INT
#define HOST_WIDE_INT int
#endif

#endif

#ifndef NULL_PTR
#define NULL_PTR ((GENERIC_PTR)0)
#endif

int yylex ();
void yyerror ();
HOST_WIDE_INT expression_value;

static jmp_buf parse_return_error;

/* Nonzero means count most punctuation as part of a name.  */
static int keyword_parsing = 0;

/* Nonzero means do not evaluate this expression.
   This is a count, since unevaluated expressions can nest.  */
static int skip_evaluation;

/* some external tables of character types */
extern unsigned char is_idstart[], is_idchar[], is_hor_space[];

extern char *xmalloc ();

/* Flag for -pedantic.  */
extern int pedantic;

/* Flag for -traditional.  */
extern int traditional;

#ifndef CHAR_TYPE_SIZE
#define CHAR_TYPE_SIZE BITS_PER_UNIT
#endif

#ifndef INT_TYPE_SIZE
#define INT_TYPE_SIZE BITS_PER_WORD
#endif

#ifndef LONG_TYPE_SIZE
#define LONG_TYPE_SIZE BITS_PER_WORD
#endif

#ifndef WCHAR_TYPE_SIZE
#define WCHAR_TYPE_SIZE INT_TYPE_SIZE
#endif

#ifndef MAX_CHAR_TYPE_SIZE
#define MAX_CHAR_TYPE_SIZE CHAR_TYPE_SIZE
#endif

#ifndef MAX_INT_TYPE_SIZE
#define MAX_INT_TYPE_SIZE INT_TYPE_SIZE
#endif

#ifndef MAX_LONG_TYPE_SIZE
#define MAX_LONG_TYPE_SIZE LONG_TYPE_SIZE
#endif

#ifndef MAX_WCHAR_TYPE_SIZE
#define MAX_WCHAR_TYPE_SIZE WCHAR_TYPE_SIZE
#endif

/* Yield nonzero if adding two numbers with A's and B's signs can yield a
   number with SUM's sign, where A, B, and SUM are all C integers.  */
#define possible_sum_sign(a, b, sum) ((((a) ^ (b)) | ~ ((a) ^ (sum))) < 0)

static void integer_overflow ();
static long left_shift ();
static long right_shift ();

#line 194 "y.tab.c"

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
    YYUNDEF = 257,                 /* "invalid token"  */
    INT = 258,                     /* INT  */
    CHAR = 259,                    /* CHAR  */
    NAME = 260,                    /* NAME  */
    ERROR = 261,                   /* ERROR  */
    OR = 262,                      /* OR  */
    AND = 263,                     /* AND  */
    EQUAL = 264,                   /* EQUAL  */
    NOTEQUAL = 265,                /* NOTEQUAL  */
    LEQ = 266,                     /* LEQ  */
    GEQ = 267,                     /* GEQ  */
    LSH = 268,                     /* LSH  */
    RSH = 269,                     /* RSH  */
    UNARY = 270                    /* UNARY  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define INT 258
#define CHAR 259
#define NAME 260
#define ERROR 261
#define OR 262
#define AND 263
#define EQUAL 264
#define NOTEQUAL 265
#define LEQ 266
#define GEQ 267
#define LSH 268
#define RSH 269
#define UNARY 270

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 150 "./cexp.y"

  struct constant {long value; int unsignedp;} integer;
  struct name {U_CHAR *address; int length;} name;
  struct arglist *keywords;

#line 280 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);



/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_INT = 3,                        /* INT  */
  YYSYMBOL_CHAR = 4,                       /* CHAR  */
  YYSYMBOL_NAME = 5,                       /* NAME  */
  YYSYMBOL_ERROR = 6,                      /* ERROR  */
  YYSYMBOL_7_ = 7,                         /* '?'  */
  YYSYMBOL_8_ = 8,                         /* ':'  */
  YYSYMBOL_9_ = 9,                         /* ','  */
  YYSYMBOL_OR = 10,                        /* OR  */
  YYSYMBOL_AND = 11,                       /* AND  */
  YYSYMBOL_12_ = 12,                       /* '|'  */
  YYSYMBOL_13_ = 13,                       /* '^'  */
  YYSYMBOL_14_ = 14,                       /* '&'  */
  YYSYMBOL_EQUAL = 15,                     /* EQUAL  */
  YYSYMBOL_NOTEQUAL = 16,                  /* NOTEQUAL  */
  YYSYMBOL_17_ = 17,                       /* '<'  */
  YYSYMBOL_18_ = 18,                       /* '>'  */
  YYSYMBOL_LEQ = 19,                       /* LEQ  */
  YYSYMBOL_GEQ = 20,                       /* GEQ  */
  YYSYMBOL_LSH = 21,                       /* LSH  */
  YYSYMBOL_RSH = 22,                       /* RSH  */
  YYSYMBOL_23_ = 23,                       /* '+'  */
  YYSYMBOL_24_ = 24,                       /* '-'  */
  YYSYMBOL_25_ = 25,                       /* '*'  */
  YYSYMBOL_26_ = 26,                       /* '/'  */
  YYSYMBOL_27_ = 27,                       /* '%'  */
  YYSYMBOL_UNARY = 28,                     /* UNARY  */
  YYSYMBOL_29_ = 29,                       /* '!'  */
  YYSYMBOL_30_ = 30,                       /* '~'  */
  YYSYMBOL_31_ = 31,                       /* '#'  */
  YYSYMBOL_32_ = 32,                       /* '('  */
  YYSYMBOL_33_ = 33,                       /* ')'  */
  YYSYMBOL_YYACCEPT = 34,                  /* $accept  */
  YYSYMBOL_start = 35,                     /* start  */
  YYSYMBOL_exp1 = 36,                      /* exp1  */
  YYSYMBOL_exp = 37,                       /* exp  */
  YYSYMBOL_38_1 = 38,                      /* $@1  */
  YYSYMBOL_39_2 = 39,                      /* $@2  */
  YYSYMBOL_40_3 = 40,                      /* $@3  */
  YYSYMBOL_41_4 = 41,                      /* $@4  */
  YYSYMBOL_42_5 = 42,                      /* $@5  */
  YYSYMBOL_keywords = 43                   /* keywords  */
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
typedef yytype_int8 yy_state_t;

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
#define YYFINAL  19
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   190

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  34
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  10
/* YYNRULES -- Number of rules.  */
#define YYNRULES  41
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  77

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   270


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
       2,     2,     2,    29,     2,    31,     2,    27,    14,     2,
      32,    33,    25,    23,     9,    24,     2,    26,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     8,     2,
      17,     2,    18,     7,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    13,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    12,     2,    30,     2,     2,     2,
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
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,    10,    11,    15,    16,    19,    20,    21,    22,
      28
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   180,   180,   185,   186,   193,   198,   201,   203,   206,
     211,   210,   217,   222,   234,   250,   262,   269,   276,   282,
     288,   291,   294,   300,   306,   312,   318,   321,   324,   328,
     327,   334,   333,   340,   342,   339,   347,   349,   351,   357,
     358,   371
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
  "\"end of file\"", "error", "\"invalid token\"", "INT", "CHAR", "NAME",
  "ERROR", "'?'", "':'", "','", "OR", "AND", "'|'", "'^'", "'&'", "EQUAL",
  "NOTEQUAL", "'<'", "'>'", "LEQ", "GEQ", "LSH", "RSH", "'+'", "'-'",
  "'*'", "'/'", "'%'", "UNARY", "'!'", "'~'", "'#'", "'('", "')'",
  "$accept", "start", "exp1", "exp", "$@1", "$@2", "$@3", "$@4", "$@5",
  "keywords", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-63)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-11)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      14,   -63,   -63,   -63,    14,    14,    14,    14,     5,    14,
      11,     6,    81,   -63,   -63,   -63,   -63,   -18,    33,   -63,
      14,   -63,   -63,   -63,    14,    14,    14,    14,    14,    14,
      14,    14,    14,    14,    14,    14,    14,    14,    14,    14,
      32,   -63,    81,    14,    14,    14,   112,   126,   139,   150,
     150,   157,   157,   157,   157,   162,   162,   -19,   -19,   -63,
     -63,   -63,     4,    60,    36,    97,     4,     4,   -20,   -63,
     -63,    56,   -63,    14,     4,    81,   -63
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,    36,    37,    38,     0,     0,     0,     0,     0,     0,
       0,     2,     3,     7,     5,     6,     8,     9,     0,     1,
       0,    33,    31,    29,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    12,     4,     0,     0,     0,    28,    27,    26,    20,
      21,    24,    25,    22,    23,    18,    19,    16,    17,    13,
      14,    15,    39,     0,    32,    30,    39,    39,     0,    34,
      41,     0,    11,     0,    39,    35,    40
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -63,   -63,   181,    -4,   -63,   -63,   -63,   -63,   -63,   -62
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,    10,    11,    12,    40,    45,    44,    43,    73,    68
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      13,    14,    15,    16,    70,    71,    37,    38,    39,    66,
      17,    19,    76,    72,   -10,    20,    42,     1,     2,     3,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    67,     4,     5,    63,
      64,    65,    20,     6,     7,     8,     9,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    62,     0,    41,    21,    69,    75,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    21,    74,
       0,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    33,    34,
      35,    36,    37,    38,    39,    35,    36,    37,    38,    39,
      18
};

static const yytype_int8 yycheck[] =
{
       4,     5,     6,     7,    66,    67,    25,    26,    27,     5,
       5,     0,    74,    33,    32,     9,    20,     3,     4,     5,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    32,    23,    24,    43,
      44,    45,     9,    29,    30,    31,    32,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    32,    -1,    33,     7,     8,    73,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,     7,    33,
      -1,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    21,    22,
      23,    24,    25,    26,    27,    23,    24,    25,    26,    27,
       9
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     4,     5,    23,    24,    29,    30,    31,    32,
      35,    36,    37,    37,    37,    37,    37,     5,    36,     0,
       9,     7,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      38,    33,    37,    41,    40,    39,    37,    37,    37,    37,
      37,    37,    37,    37,    37,    37,    37,    37,    37,    37,
      37,    37,    32,    37,    37,    37,     5,    32,    43,     8,
      43,    43,    33,    42,    33,    37,    43
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    34,    35,    36,    36,    37,    37,    37,    37,    37,
      38,    37,    37,    37,    37,    37,    37,    37,    37,    37,
      37,    37,    37,    37,    37,    37,    37,    37,    37,    39,
      37,    40,    37,    41,    42,    37,    37,    37,    37,    43,
      43,    43
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     3,     2,     2,     2,     2,     2,
       0,     6,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     0,
       4,     0,     4,     0,     0,     7,     1,     1,     1,     0,
       4,     2
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
  case 2: /* start: exp1  */
#line 181 "./cexp.y"
                { expression_value = (yyvsp[0].integer).value; }
#line 1365 "y.tab.c"
    break;

  case 4: /* exp1: exp1 ',' exp  */
#line 187 "./cexp.y"
                        { if (pedantic)
			    pedwarn ("comma operator in operand of `#if'");
			  (yyval.integer) = (yyvsp[0].integer); }
#line 1373 "y.tab.c"
    break;

  case 5: /* exp: '-' exp  */
#line 194 "./cexp.y"
                        { (yyval.integer).value = - (yyvsp[0].integer).value;
			  if (((yyval.integer).value & (yyvsp[0].integer).value) < 0 && ! (yyvsp[0].integer).unsignedp)
			    integer_overflow ();
			  (yyval.integer).unsignedp = (yyvsp[0].integer).unsignedp; }
#line 1382 "y.tab.c"
    break;

  case 6: /* exp: '!' exp  */
#line 199 "./cexp.y"
                        { (yyval.integer).value = ! (yyvsp[0].integer).value;
			  (yyval.integer).unsignedp = 0; }
#line 1389 "y.tab.c"
    break;

  case 7: /* exp: '+' exp  */
#line 202 "./cexp.y"
                        { (yyval.integer) = (yyvsp[0].integer); }
#line 1395 "y.tab.c"
    break;

  case 8: /* exp: '~' exp  */
#line 204 "./cexp.y"
                        { (yyval.integer).value = ~ (yyvsp[0].integer).value;
			  (yyval.integer).unsignedp = (yyvsp[0].integer).unsignedp; }
#line 1402 "y.tab.c"
    break;

  case 9: /* exp: '#' NAME  */
#line 207 "./cexp.y"
                        { (yyval.integer).value = check_assertion ((yyvsp[0].name).address, (yyvsp[0].name).length,
						      0, NULL_PTR);
			  (yyval.integer).unsignedp = 0; }
#line 1410 "y.tab.c"
    break;

  case 10: /* $@1: %empty  */
#line 211 "./cexp.y"
                        { keyword_parsing = 1; }
#line 1416 "y.tab.c"
    break;

  case 11: /* exp: '#' NAME $@1 '(' keywords ')'  */
#line 213 "./cexp.y"
                        { (yyval.integer).value = check_assertion ((yyvsp[-4].name).address, (yyvsp[-4].name).length,
						      1, (yyvsp[-1].keywords));
			  keyword_parsing = 0;
			  (yyval.integer).unsignedp = 0; }
#line 1425 "y.tab.c"
    break;

  case 12: /* exp: '(' exp1 ')'  */
#line 218 "./cexp.y"
                        { (yyval.integer) = (yyvsp[-1].integer); }
#line 1431 "y.tab.c"
    break;

  case 13: /* exp: exp '*' exp  */
#line 223 "./cexp.y"
                        { (yyval.integer).unsignedp = (yyvsp[-2].integer).unsignedp || (yyvsp[0].integer).unsignedp;
			  if ((yyval.integer).unsignedp)
			    (yyval.integer).value = (unsigned long) (yyvsp[-2].integer).value * (yyvsp[0].integer).value;
			  else
			    {
			      (yyval.integer).value = (yyvsp[-2].integer).value * (yyvsp[0].integer).value;
			      if ((yyvsp[-2].integer).value
				  && ((yyval.integer).value / (yyvsp[-2].integer).value != (yyvsp[0].integer).value
				      || ((yyval.integer).value & (yyvsp[-2].integer).value & (yyvsp[0].integer).value) < 0))
				integer_overflow ();
			    } }
#line 1447 "y.tab.c"
    break;

  case 14: /* exp: exp '/' exp  */
#line 235 "./cexp.y"
                        { if ((yyvsp[0].integer).value == 0)
			    {
			      if (!skip_evaluation)
				error ("division by zero in #if");
			      (yyvsp[0].integer).value = 1;
			    }
			  (yyval.integer).unsignedp = (yyvsp[-2].integer).unsignedp || (yyvsp[0].integer).unsignedp;
			  if ((yyval.integer).unsignedp)
			    (yyval.integer).value = (unsigned long) (yyvsp[-2].integer).value / (yyvsp[0].integer).value;
			  else
			    {
			      (yyval.integer).value = (yyvsp[-2].integer).value / (yyvsp[0].integer).value;
			      if (((yyval.integer).value & (yyvsp[-2].integer).value & (yyvsp[0].integer).value) < 0)
				integer_overflow ();
			    } }
#line 1467 "y.tab.c"
    break;

  case 15: /* exp: exp '%' exp  */
#line 251 "./cexp.y"
                        { if ((yyvsp[0].integer).value == 0)
			    {
			      if (!skip_evaluation)
				error ("division by zero in #if");
			      (yyvsp[0].integer).value = 1;
			    }
			  (yyval.integer).unsignedp = (yyvsp[-2].integer).unsignedp || (yyvsp[0].integer).unsignedp;
			  if ((yyval.integer).unsignedp)
			    (yyval.integer).value = (unsigned long) (yyvsp[-2].integer).value % (yyvsp[0].integer).value;
			  else
			    (yyval.integer).value = (yyvsp[-2].integer).value % (yyvsp[0].integer).value; }
#line 1483 "y.tab.c"
    break;

  case 16: /* exp: exp '+' exp  */
#line 263 "./cexp.y"
                        { (yyval.integer).value = (yyvsp[-2].integer).value + (yyvsp[0].integer).value;
			  (yyval.integer).unsignedp = (yyvsp[-2].integer).unsignedp || (yyvsp[0].integer).unsignedp;
			  if (! (yyval.integer).unsignedp
			      && ! possible_sum_sign ((yyvsp[-2].integer).value, (yyvsp[0].integer).value,
						      (yyval.integer).value))
			    integer_overflow (); }
#line 1494 "y.tab.c"
    break;

  case 17: /* exp: exp '-' exp  */
#line 270 "./cexp.y"
                        { (yyval.integer).value = (yyvsp[-2].integer).value - (yyvsp[0].integer).value;
			  (yyval.integer).unsignedp = (yyvsp[-2].integer).unsignedp || (yyvsp[0].integer).unsignedp;
			  if (! (yyval.integer).unsignedp
			      && ! possible_sum_sign ((yyval.integer).value, (yyvsp[0].integer).value,
						      (yyvsp[-2].integer).value))
			    integer_overflow (); }
#line 1505 "y.tab.c"
    break;

  case 18: /* exp: exp LSH exp  */
#line 277 "./cexp.y"
                        { (yyval.integer).unsignedp = (yyvsp[-2].integer).unsignedp;
			  if ((yyvsp[0].integer).value < 0 && ! (yyvsp[0].integer).unsignedp)
			    (yyval.integer).value = right_shift (&(yyvsp[-2].integer), -(yyvsp[0].integer).value);
			  else
			    (yyval.integer).value = left_shift (&(yyvsp[-2].integer), (yyvsp[0].integer).value); }
#line 1515 "y.tab.c"
    break;

  case 19: /* exp: exp RSH exp  */
#line 283 "./cexp.y"
                        { (yyval.integer).unsignedp = (yyvsp[-2].integer).unsignedp;
			  if ((yyvsp[0].integer).value < 0 && ! (yyvsp[0].integer).unsignedp)
			    (yyval.integer).value = left_shift (&(yyvsp[-2].integer), -(yyvsp[0].integer).value);
			  else
			    (yyval.integer).value = right_shift (&(yyvsp[-2].integer), (yyvsp[0].integer).value); }
#line 1525 "y.tab.c"
    break;

  case 20: /* exp: exp EQUAL exp  */
#line 289 "./cexp.y"
                        { (yyval.integer).value = ((yyvsp[-2].integer).value == (yyvsp[0].integer).value);
			  (yyval.integer).unsignedp = 0; }
#line 1532 "y.tab.c"
    break;

  case 21: /* exp: exp NOTEQUAL exp  */
#line 292 "./cexp.y"
                        { (yyval.integer).value = ((yyvsp[-2].integer).value != (yyvsp[0].integer).value);
			  (yyval.integer).unsignedp = 0; }
#line 1539 "y.tab.c"
    break;

  case 22: /* exp: exp LEQ exp  */
#line 295 "./cexp.y"
                        { (yyval.integer).unsignedp = 0;
			  if ((yyvsp[-2].integer).unsignedp || (yyvsp[0].integer).unsignedp)
			    (yyval.integer).value = (unsigned long) (yyvsp[-2].integer).value <= (yyvsp[0].integer).value;
			  else
			    (yyval.integer).value = (yyvsp[-2].integer).value <= (yyvsp[0].integer).value; }
#line 1549 "y.tab.c"
    break;

  case 23: /* exp: exp GEQ exp  */
#line 301 "./cexp.y"
                        { (yyval.integer).unsignedp = 0;
			  if ((yyvsp[-2].integer).unsignedp || (yyvsp[0].integer).unsignedp)
			    (yyval.integer).value = (unsigned long) (yyvsp[-2].integer).value >= (yyvsp[0].integer).value;
			  else
			    (yyval.integer).value = (yyvsp[-2].integer).value >= (yyvsp[0].integer).value; }
#line 1559 "y.tab.c"
    break;

  case 24: /* exp: exp '<' exp  */
#line 307 "./cexp.y"
                        { (yyval.integer).unsignedp = 0;
			  if ((yyvsp[-2].integer).unsignedp || (yyvsp[0].integer).unsignedp)
			    (yyval.integer).value = (unsigned long) (yyvsp[-2].integer).value < (yyvsp[0].integer).value;
			  else
			    (yyval.integer).value = (yyvsp[-2].integer).value < (yyvsp[0].integer).value; }
#line 1569 "y.tab.c"
    break;

  case 25: /* exp: exp '>' exp  */
#line 313 "./cexp.y"
                        { (yyval.integer).unsignedp = 0;
			  if ((yyvsp[-2].integer).unsignedp || (yyvsp[0].integer).unsignedp)
			    (yyval.integer).value = (unsigned long) (yyvsp[-2].integer).value > (yyvsp[0].integer).value;
			  else
			    (yyval.integer).value = (yyvsp[-2].integer).value > (yyvsp[0].integer).value; }
#line 1579 "y.tab.c"
    break;

  case 26: /* exp: exp '&' exp  */
#line 319 "./cexp.y"
                        { (yyval.integer).value = (yyvsp[-2].integer).value & (yyvsp[0].integer).value;
			  (yyval.integer).unsignedp = (yyvsp[-2].integer).unsignedp || (yyvsp[0].integer).unsignedp; }
#line 1586 "y.tab.c"
    break;

  case 27: /* exp: exp '^' exp  */
#line 322 "./cexp.y"
                        { (yyval.integer).value = (yyvsp[-2].integer).value ^ (yyvsp[0].integer).value;
			  (yyval.integer).unsignedp = (yyvsp[-2].integer).unsignedp || (yyvsp[0].integer).unsignedp; }
#line 1593 "y.tab.c"
    break;

  case 28: /* exp: exp '|' exp  */
#line 325 "./cexp.y"
                        { (yyval.integer).value = (yyvsp[-2].integer).value | (yyvsp[0].integer).value;
			  (yyval.integer).unsignedp = (yyvsp[-2].integer).unsignedp || (yyvsp[0].integer).unsignedp; }
#line 1600 "y.tab.c"
    break;

  case 29: /* $@2: %empty  */
#line 328 "./cexp.y"
                        { skip_evaluation += !(yyvsp[-1].integer).value; }
#line 1606 "y.tab.c"
    break;

  case 30: /* exp: exp AND $@2 exp  */
#line 330 "./cexp.y"
                        { skip_evaluation -= !(yyvsp[-3].integer).value;
			  (yyval.integer).value = ((yyvsp[-3].integer).value && (yyvsp[0].integer).value);
			  (yyval.integer).unsignedp = 0; }
#line 1614 "y.tab.c"
    break;

  case 31: /* $@3: %empty  */
#line 334 "./cexp.y"
                        { skip_evaluation += !!(yyvsp[-1].integer).value; }
#line 1620 "y.tab.c"
    break;

  case 32: /* exp: exp OR $@3 exp  */
#line 336 "./cexp.y"
                        { skip_evaluation -= !!(yyvsp[-3].integer).value;
			  (yyval.integer).value = ((yyvsp[-3].integer).value || (yyvsp[0].integer).value);
			  (yyval.integer).unsignedp = 0; }
#line 1628 "y.tab.c"
    break;

  case 33: /* $@4: %empty  */
#line 340 "./cexp.y"
                        { skip_evaluation += !(yyvsp[-1].integer).value; }
#line 1634 "y.tab.c"
    break;

  case 34: /* $@5: %empty  */
#line 342 "./cexp.y"
                        { skip_evaluation += !!(yyvsp[-4].integer).value - !(yyvsp[-4].integer).value; }
#line 1640 "y.tab.c"
    break;

  case 35: /* exp: exp '?' $@4 exp ':' $@5 exp  */
#line 344 "./cexp.y"
                        { skip_evaluation -= !!(yyvsp[-6].integer).value;
			  (yyval.integer).value = (yyvsp[-6].integer).value ? (yyvsp[-3].integer).value : (yyvsp[0].integer).value;
			  (yyval.integer).unsignedp = (yyvsp[-3].integer).unsignedp || (yyvsp[0].integer).unsignedp; }
#line 1648 "y.tab.c"
    break;

  case 36: /* exp: INT  */
#line 348 "./cexp.y"
                        { (yyval.integer) = yylval.integer; }
#line 1654 "y.tab.c"
    break;

  case 37: /* exp: CHAR  */
#line 350 "./cexp.y"
                        { (yyval.integer) = yylval.integer; }
#line 1660 "y.tab.c"
    break;

  case 38: /* exp: NAME  */
#line 352 "./cexp.y"
                        { (yyval.integer).value = 0;
			  (yyval.integer).unsignedp = 0; }
#line 1667 "y.tab.c"
    break;

  case 39: /* keywords: %empty  */
#line 357 "./cexp.y"
                        { (yyval.keywords) = 0; }
#line 1673 "y.tab.c"
    break;

  case 40: /* keywords: '(' keywords ')' keywords  */
#line 359 "./cexp.y"
                        { struct arglist *temp;
			  (yyval.keywords) = (struct arglist *) xmalloc (sizeof (struct arglist));
			  (yyval.keywords)->next = (yyvsp[-2].keywords);
			  (yyval.keywords)->name = (U_CHAR *) "(";
			  (yyval.keywords)->length = 1;
			  temp = (yyval.keywords);
			  while (temp != 0 && temp->next != 0)
			    temp = temp->next;
			  temp->next = (struct arglist *) xmalloc (sizeof (struct arglist));
			  temp->next->next = (yyvsp[0].keywords);
			  temp->next->name = (U_CHAR *) ")";
			  temp->next->length = 1; }
#line 1690 "y.tab.c"
    break;

  case 41: /* keywords: NAME keywords  */
#line 372 "./cexp.y"
                        { (yyval.keywords) = (struct arglist *) xmalloc (sizeof (struct arglist));
			  (yyval.keywords)->name = (yyvsp[-1].name).address;
			  (yyval.keywords)->length = (yyvsp[-1].name).length;
			  (yyval.keywords)->next = (yyvsp[0].keywords); }
#line 1699 "y.tab.c"
    break;


#line 1703 "y.tab.c"

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

#line 377 "./cexp.y"


/* During parsing of a C expression, the pointer to the next character
   is in this variable.  */

static char *lexptr;

/* Take care of parsing a number (anything that starts with a digit).
   Set yylval and return the token type; update lexptr.
   LEN is the number of characters in it.  */

/* maybe needs to actually deal with floating point numbers */

int
parse_number (olen)
     int olen;
{
  register char *p = lexptr;
  register int c;
  register unsigned long n = 0, nd, ULONG_MAX_over_base;
  register int base = 10;
  register int len = olen;
  register int overflow = 0;
  register int digit, largest_digit = 0;
  int spec_long = 0;

  for (c = 0; c < len; c++)
    if (p[c] == '.') {
      /* It's a float since it contains a point.  */
      yyerror ("floating point numbers not allowed in #if expressions");
      return ERROR;
    }

  yylval.integer.unsignedp = 0;

  if (len >= 3 && (!strncmp (p, "0x", 2) || !strncmp (p, "0X", 2))) {
    p += 2;
    base = 16;
    len -= 2;
  }
  else if (*p == '0')
    base = 8;

  ULONG_MAX_over_base = (unsigned long) -1 / base;

  for (; len > 0; len--) {
    c = *p++;

    if (c >= '0' && c <= '9')
      digit = c - '0';
    else if (base == 16 && c >= 'a' && c <= 'f')
      digit = c - 'a' + 10;
    else if (base == 16 && c >= 'A' && c <= 'F')
      digit = c - 'A' + 10;
    else {
      /* `l' means long, and `u' means unsigned.  */
      while (1) {
	if (c == 'l' || c == 'L')
	  {
	    if (spec_long)
	      yyerror ("two `l's in integer constant");
	    spec_long = 1;
	  }
	else if (c == 'u' || c == 'U')
	  {
	    if (yylval.integer.unsignedp)
	      yyerror ("two `u's in integer constant");
	    yylval.integer.unsignedp = 1;
	  }
	else
	  break;

	if (--len == 0)
	  break;
	c = *p++;
      }
      /* Don't look for any more digits after the suffixes.  */
      break;
    }
    if (largest_digit < digit)
      largest_digit = digit;
    nd = n * base + digit;
    overflow |= (ULONG_MAX_over_base < n) | (nd < n);
    n = nd;
  }

  if (len != 0) {
    yyerror ("Invalid number in #if expression");
    return ERROR;
  }

  if (base <= largest_digit)
    warning ("integer constant contains digits beyond the radix");

  if (overflow)
    warning ("integer constant out of range");

  /* If too big to be signed, consider it unsigned.  */
  if ((long) n < 0 && ! yylval.integer.unsignedp)
    {
      if (base == 10)
	warning ("integer constant is so large that it is unsigned");
      yylval.integer.unsignedp = 1;
    }

  lexptr = p;
  yylval.integer.value = n;
  return INT;
}

struct token {
  char *operator;
  int token;
};

static struct token tokentab2[] = {
  {"&&", AND},
  {"||", OR},
  {"<<", LSH},
  {">>", RSH},
  {"==", EQUAL},
  {"!=", NOTEQUAL},
  {"<=", LEQ},
  {">=", GEQ},
  {"++", ERROR},
  {"--", ERROR},
  {NULL, ERROR}
};

/* Read one token, getting characters through lexptr.  */

int
yylex ()
{
  register int c;
  register int namelen;
  register unsigned char *tokstart;
  register struct token *toktab;
  int wide_flag;

 retry:

  tokstart = (unsigned char *) lexptr;
  c = *tokstart;
  /* See if it is a special token of length 2.  */
  if (! keyword_parsing)
    for (toktab = tokentab2; toktab->operator != NULL; toktab++)
      if (c == *toktab->operator && tokstart[1] == toktab->operator[1]) {
	lexptr += 2;
	if (toktab->token == ERROR)
	  {
	    char *buf = (char *) malloc (40);
	    sprintf (buf, "`%s' not allowed in operand of `#if'", toktab->operator);
	    yyerror (buf);
	  }
	return toktab->token;
      }

  switch (c) {
  case 0:
    return 0;
    
  case ' ':
  case '\t':
  case '\r':
  case '\n':
    lexptr++;
    goto retry;
    
  case 'L':
    /* Capital L may start a wide-string or wide-character constant.  */
    if (lexptr[1] == '\'')
      {
	lexptr++;
	wide_flag = 1;
	goto char_constant;
      }
    if (lexptr[1] == '"')
      {
	lexptr++;
	wide_flag = 1;
	goto string_constant;
      }
    break;

  case '\'':
    wide_flag = 0;
  char_constant:
    lexptr++;
    if (keyword_parsing) {
      char *start_ptr = lexptr - 1;
      while (1) {
	c = *lexptr++;
	if (c == '\\')
	  c = parse_escape (&lexptr);
	else if (c == '\'')
	  break;
      }
      yylval.name.address = tokstart;
      yylval.name.length = lexptr - start_ptr;
      return NAME;
    }

    /* This code for reading a character constant
       handles multicharacter constants and wide characters.
       It is mostly copied from c-lex.c.  */
    {
      register int result = 0;
      register num_chars = 0;
      unsigned width = MAX_CHAR_TYPE_SIZE;
      int max_chars;
      char *token_buffer = 0;

      if (wide_flag)
	{
	  width = MAX_WCHAR_TYPE_SIZE;
#ifdef MULTIBYTE_CHARS
	  max_chars = MB_CUR_MAX;
#else
	  max_chars = 1;
#endif
	}
      else
	max_chars = MAX_LONG_TYPE_SIZE / width;

      token_buffer = (char *) malloc (max_chars + 1);

      while (1)
	{
	  c = *lexptr++;

	  if (c == '\'' || c == EOF)
	    break;

	  if (c == '\\')
	    {
	      c = parse_escape (&lexptr);
	      if (width < HOST_BITS_PER_INT
		  && (unsigned) c >= (1 << width))
		pedwarn ("escape sequence out of range for character");
	    }

	  num_chars++;

	  /* Merge character into result; ignore excess chars.  */
	  if (num_chars < max_chars + 1)
	    {
	      if (width < HOST_BITS_PER_INT)
		result = (result << width) | (c & ((1 << width) - 1));
	      else
		result = c;
	      token_buffer[num_chars - 1] = c;
	    }
	}

      token_buffer[num_chars] = 0;

      if (c != '\'')
	error ("malformatted character constant");
      else if (num_chars == 0)
	error ("empty character constant");
      else if (num_chars > max_chars)
	{
	  num_chars = max_chars;
	  error ("character constant too long");
	}
      else if (num_chars != 1 && ! traditional)
	warning ("multi-character character constant");

      /* If char type is signed, sign-extend the constant.  */
      if (! wide_flag)
	{
	  int num_bits = num_chars * width;

	  if (lookup ("__CHAR_UNSIGNED__", sizeof ("__CHAR_UNSIGNED__")-1, -1)
	      || ((result >> (num_bits - 1)) & 1) == 0)
	    yylval.integer.value
	      = result & ((unsigned long) ~0 >> (HOST_BITS_PER_LONG - num_bits));
	  else
	    yylval.integer.value
	      = result | ~((unsigned long) ~0 >> (HOST_BITS_PER_LONG - num_bits));
	}
      else
	{
#ifdef MULTIBYTE_CHARS
	  /* Set the initial shift state and convert the next sequence.  */
	  result = 0;
	  /* In all locales L'\0' is zero and mbtowc will return zero,
	     so don't use it.  */
	  if (num_chars > 1
	      || (num_chars == 1 && token_buffer[0] != '\0'))
	    {
	      wchar_t wc;
	      (void) mbtowc (NULL_PTR, NULL_PTR, 0);
	      if (mbtowc (& wc, token_buffer, num_chars) == num_chars)
		result = wc;
	      else
		warning ("Ignoring invalid multibyte character");
	    }
#endif
	  yylval.integer.value = result;
	}
    	if (token_buffer != 0)
	  free(token_buffer);
    }

    /* This is always a signed type.  */
    yylval.integer.unsignedp = 0;
    
    return CHAR;

    /* some of these chars are invalid in constant expressions;
       maybe do something about them later */
  case '/':
  case '+':
  case '-':
  case '*':
  case '%':
  case '|':
  case '&':
  case '^':
  case '~':
  case '!':
  case '@':
  case '<':
  case '>':
  case '[':
  case ']':
  case '.':
  case '?':
  case ':':
  case '=':
  case '{':
  case '}':
  case ',':
  case '#':
    if (keyword_parsing)
      break;
  case '(':
  case ')':
    lexptr++;
    return c;

  case '"':
  string_constant:
    if (keyword_parsing) {
      char *start_ptr = lexptr;
      lexptr++;
      while (1) {
	c = *lexptr++;
	if (c == '\\')
	  c = parse_escape (&lexptr);
	else if (c == '"')
	  break;
      }
      yylval.name.address = tokstart;
      yylval.name.length = lexptr - start_ptr;
      return NAME;
    }
    yyerror ("string constants not allowed in #if expressions");
    return ERROR;
  }

  if (c >= '0' && c <= '9' && !keyword_parsing) {
    /* It's a number */
    for (namelen = 0;
	 c = tokstart[namelen], is_idchar[c] || c == '.'; 
	 namelen++)
      ;
    return parse_number (namelen);
  }

  /* It is a name.  See how long it is.  */

  if (keyword_parsing) {
    for (namelen = 0;; namelen++) {
      if (is_hor_space[tokstart[namelen]])
	break;
      if (tokstart[namelen] == '(' || tokstart[namelen] == ')')
	break;
      if (tokstart[namelen] == '"' || tokstart[namelen] == '\'')
	break;
    }
  } else {
    if (!is_idstart[c]) {
      yyerror ("Invalid token in expression");
      return ERROR;
    }

    for (namelen = 0; is_idchar[tokstart[namelen]]; namelen++)
      ;
  }
  
  lexptr += namelen;
  yylval.name.address = tokstart;
  yylval.name.length = namelen;
  return NAME;
}


/* Parse a C escape sequence.  STRING_PTR points to a variable
   containing a pointer to the string to parse.  That pointer
   is updated past the characters we use.  The value of the
   escape sequence is returned.

   A negative value means the sequence \ newline was seen,
   which is supposed to be equivalent to nothing at all.

   If \ is followed by a null character, we return a negative
   value and leave the string pointer pointing at the null character.

   If \ is followed by 000, we return 0 and leave the string pointer
   after the zeros.  A value of 0 does not mean end of string.  */

int
parse_escape (string_ptr)
     char **string_ptr;
{
  register int c = *(*string_ptr)++;
  switch (c)
    {
    case 'a':
      return TARGET_BELL;
    case 'b':
      return TARGET_BS;
    case 'e':
    case 'E':
      if (pedantic)
	pedwarn ("non-ANSI-standard escape sequence, `\\%c'", c);
      return 033;
    case 'f':
      return TARGET_FF;
    case 'n':
      return TARGET_NEWLINE;
    case 'r':
      return TARGET_CR;
    case 't':
      return TARGET_TAB;
    case 'v':
      return TARGET_VT;
    case '\n':
      return -2;
    case 0:
      (*string_ptr)--;
      return 0;
      
    case '0':
    case '1':
    case '2':
    case '3':
    case '4':
    case '5':
    case '6':
    case '7':
      {
	register int i = c - '0';
	register int count = 0;
	while (++count < 3)
	  {
	    c = *(*string_ptr)++;
	    if (c >= '0' && c <= '7')
	      i = (i << 3) + c - '0';
	    else
	      {
		(*string_ptr)--;
		break;
	      }
	  }
	if ((i & ~((1 << MAX_CHAR_TYPE_SIZE) - 1)) != 0)
	  {
	    i &= (1 << MAX_CHAR_TYPE_SIZE) - 1;
	    warning ("octal character constant does not fit in a byte");
	  }
	return i;
      }
    case 'x':
      {
	register unsigned i = 0, overflow = 0, digits_found = 0, digit;
	for (;;)
	  {
	    c = *(*string_ptr)++;
	    if (c >= '0' && c <= '9')
	      digit = c - '0';
	    else if (c >= 'a' && c <= 'f')
	      digit = c - 'a' + 10;
	    else if (c >= 'A' && c <= 'F')
	      digit = c - 'A' + 10;
	    else
	      {
		(*string_ptr)--;
		break;
	      }
	    overflow |= i ^ (i << 4 >> 4);
	    i = (i << 4) + digit;
	    digits_found = 1;
	  }
	if (!digits_found)
	  yyerror ("\\x used with no following hex digits");
	if (overflow | (i & ~((1 << BITS_PER_UNIT) - 1)))
	  {
	    i &= (1 << BITS_PER_UNIT) - 1;
	    warning ("hex character constant does not fit in a byte");
	  }
	return i;
      }
    default:
      return c;
    }
}

void
yyerror (s)
     char *s;
{
  error (s);
  skip_evaluation = 0;
  longjmp (parse_return_error, 1);
}

static void
integer_overflow ()
{
  if (!skip_evaluation && pedantic)
    pedwarn ("integer overflow in preprocessor expression");
}

static long
left_shift (a, b)
     struct constant *a;
     unsigned long b;
{
   /* It's unclear from the C standard whether shifts can overflow.
      The following code ignores overflow; perhaps a C standard
      interpretation ruling is needed.  */
  if (b >= HOST_BITS_PER_LONG)
    return 0;
  else if (a->unsignedp)
    return (unsigned long) a->value << b;
  else
    return a->value << b;
}

static long
right_shift (a, b)
     struct constant *a;
     unsigned long b;
{
  if (b >= HOST_BITS_PER_LONG)
    return a->unsignedp ? 0 : a->value >> (HOST_BITS_PER_LONG - 1);
  else if (a->unsignedp)
    return (unsigned long) a->value >> b;
  else
    return a->value >> b;
}

/* This page contains the entry point to this file.  */

/* Parse STRING as an expression, and complain if this fails
   to use up all of the contents of STRING.  */
/* We do not support C comments.  They should be removed before
   this function is called.  */

HOST_WIDE_INT
parse_c_expression (string)
     char *string;
{
  lexptr = string;
  
  if (lexptr == 0 || *lexptr == 0) {
    error ("empty #if expression");
    return 0;			/* don't include the #if group */
  }

  /* if there is some sort of scanning error, just return 0 and assume
     the parsing routine has printed an error message somewhere.
     there is surely a better thing to do than this.     */
  if (setjmp (parse_return_error))
    return 0;

  if (yyparse ())
    return 0;			/* actually this is never reached
				   the way things stand. */
  if (*lexptr)
    error ("Junk after end of expression.");

  return expression_value;	/* set by yyparse () */
}

#ifdef TEST_EXP_READER
extern int yydebug;

/* Main program for testing purposes.  */
int
main ()
{
  int n, c;
  char buf[1024];

/*
  yydebug = 1;
*/
  initialize_random_junk ();

  for (;;) {
    printf ("enter expression: ");
    n = 0;
    while ((buf[n] = getchar ()) != '\n' && buf[n] != EOF)
      n++;
    if (buf[n] == EOF)
      break;
    buf[n] = '\0';
    printf ("parser returned %ld\n", parse_c_expression (buf));
  }

  return 0;
}

/* table to tell if char can be part of a C identifier. */
unsigned char is_idchar[256];
/* table to tell if char can be first char of a c identifier. */
unsigned char is_idstart[256];
/* table to tell if c is horizontal space.  isspace () thinks that
   newline is space; this is not a good idea for this program. */
char is_hor_space[256];

/*
 * initialize random junk in the hash table and maybe other places
 */
initialize_random_junk ()
{
  register int i;

  /*
   * Set up is_idchar and is_idstart tables.  These should be
   * faster than saying (is_alpha (c) || c == '_'), etc.
   * Must do set up these things before calling any routines tthat
   * refer to them.
   */
  for (i = 'a'; i <= 'z'; i++) {
    ++is_idchar[i - 'a' + 'A'];
    ++is_idchar[i];
    ++is_idstart[i - 'a' + 'A'];
    ++is_idstart[i];
  }
  for (i = '0'; i <= '9'; i++)
    ++is_idchar[i];
  ++is_idchar['_'];
  ++is_idstart['_'];
#if DOLLARS_IN_IDENTIFIERS
  ++is_idchar['$'];
  ++is_idstart['$'];
#endif

  /* horizontal space table */
  ++is_hor_space[' '];
  ++is_hor_space['\t'];
}

error (msg)
{
  printf ("error: %s\n", msg);
}

warning (msg)
{
  printf ("warning: %s\n", msg);
}

struct hashnode *
lookup (name, len, hash)
     char *name;
     int len;
     int hash;
{
  return (DEFAULT_SIGNED_CHAR) ? 0 : ((struct hashnode *) -1);
}
#endif
