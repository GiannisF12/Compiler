/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
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
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "2ostadio.y"

    #include <stdio.h>
    #include <stdlib.h>
    #include "extra/hashtbl.h" 

    extern FILE *yyin;
    extern int yylex();
    extern void yyerror(const char* err);
    
    

    HASHTBL *hashtbl;
    int scope = 0;

#line 85 "2ostadio.tab.c"

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

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_2OSTADIO_TAB_H_INCLUDED
# define YY_YY_2OSTADIO_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    T_EOF = 0,
    T_PROGRAM = 258,
    T_CONST = 259,
    T_TYPE = 260,
    T_ARRAY = 261,
    T_LIST = 262,
    T_SET = 263,
    T_OF = 264,
    T_RECORD = 265,
    T_VAR = 266,
    T_FUNCTION = 267,
    T_PROCEDURE = 268,
    T_INTEGER = 269,
    T_REAL = 270,
    T_BOOLEAN = 271,
    T_CHAR = 272,
    T_FORWARD = 273,
    T_LENGTH = 274,
    T_NEW = 275,
    T_BEGIN = 276,
    T_END = 277,
    T_IF = 278,
    T_THEN = 279,
    T_ELSE = 280,
    T_WHILE = 281,
    T_DO = 282,
    T_CASE = 283,
    T_OTHERWISE = 284,
    T_FOR = 285,
    T_TO = 286,
    T_DOWNTO = 287,
    T_WITH = 288,
    T_READ = 289,
    T_WRITE = 290,
    T_ID = 291,
    T_ICONST = 292,
    T_RCONST = 293,
    T_BCONST = 294,
    T_CCONST = 295,
    T_RELOP = 296,
    T_ADDOP = 297,
    T_OROP = 298,
    T_MULDIVANDOP = 299,
    T_NOTOP = 300,
    T_INOP = 301,
    T_LISTFUNC = 302,
    T_STRING = 303,
    T_LPAREN = 304,
    T_RPAREN = 305,
    T_SEMI = 306,
    T_DOT = 307,
    T_COMMA = 308,
    T_EQU = 309,
    T_COLON = 310,
    T_LBRACK = 311,
    T_RBRACK = 312,
    T_ASSIGN = 313,
    T_DOTDOT = 314,
    jekremastoelse = 315
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 18 "2ostadio.y"
                          //Union gia tous tupous ton tokens
    int     akeraiosval;
    float   pragmatikosval; 
    char    *stringval;

#line 205 "2ostadio.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_2OSTADIO_TAB_H_INCLUDED  */



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
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
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
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


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
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   373

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  61
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  59
/* YYNRULES -- Number of rules.  */
#define YYNRULES  140
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  272

#define YYUNDEFTOK  2
#define YYMAXUTOK   315


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

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
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,   104,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   157,   158,   159,   160,
     160,   160,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   200,   201,   202,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   215,   216,   216,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"End Of File\"", "error", "$undefined", "\"Program\"", "\"Const\"",
  "\"Type\"", "\"Array\"", "\"List\"", "\"Set\"", "\"Of\"", "\"Record\"",
  "\"Var\"", "\"Function\"", "\"Procedure\"", "\"Integer\"", "\"Real\"",
  "\"Boolean\"", "\"Char\"", "\"Forward\"", "\"Length\"", "\"New\"",
  "\"Begin\"", "\"End\"", "\"If\"", "\"Then\"", "\"Else\"", "\"While\"",
  "\"Do\"", "\"Case\"", "\"Otherwise\"", "\"For\"", "\"To\"", "\"Downto\"",
  "\"With\"", "\"Read\"", "\"Write\"", "\"Id\"", "\"Iconst\"",
  "\"Rconst\"", "\"Bconst\"", "\"Cconst\"", "\"> | >= | < | <= | <>\"",
  "\"+ | -\"", "\"Or\"", "\"* | / | Mod | Div | And\"", "\"Not\"",
  "\"In\"", "\"Listfunction\"", "\"String\"", "\"(\"", "\")\"", "\";\"",
  "\".\"", "\",\"", "\"=\"", "\":\"", "\"[\"", "\"]\"", "\":=\"", "\"..\"",
  "jekremastoelse", "$accept", "program", "header", "declarations",
  "constdefs", "constant_defs", "expression", "variable", "expressions",
  "constant", "setlistexpression", "typedefs", "type_defs", "type_def",
  "dims", "limits", "limit", "sign", "typename", "standard_type", "fields",
  "field", "identifiers", "vardefs", "variable_defs", "subprograms", "$@1",
  "subprogram", "sub_header", "formal_parameters", "parameter_list",
  "pass", "comp_statement", "statements", "statement", "assignment",
  "if_statement", "$@2", "if_tail", "$@3", "case_statement", "cases",
  "single_case", "label_list", "label", "case_tail", "while_statement",
  "$@4", "for_statement", "$@5", "$@6", "iter_space", "with_statement",
  "subprogram_call", "io_statement", "read_list", "read_item",
  "write_list", "write_item", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315
};
# endif

#define YYPACT_NINF (-154)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-131)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       2,    22,    18,    64,   -25,  -154,    73,  -154,   116,  -154,
       3,    78,   147,   154,   198,  -154,   226,   178,   251,    26,
     163,   167,   176,    20,  -154,   190,   201,   206,  -154,  -154,
    -154,  -154,   226,   226,   221,   226,    99,   182,     7,  -154,
    -154,   207,   226,   226,   226,    33,    41,   229,   234,    54,
     149,  -154,    -5,  -154,  -154,  -154,  -154,  -154,  -154,  -154,
    -154,  -154,   211,   252,   245,   246,  -154,   212,   267,  -154,
    -154,    87,   262,   226,   226,   226,    79,   269,   226,   264,
    -154,   182,    71,   226,   226,   226,   226,   226,   226,   280,
     226,   226,     8,    56,    -1,  -154,   259,  -154,    28,    41,
     155,   226,   193,  -154,   251,    77,   274,  -154,   148,   270,
     316,   318,    20,  -154,  -154,  -154,   293,  -154,   271,   294,
     283,   303,    98,    12,   278,   292,    32,   306,  -154,   226,
    -154,   104,    79,    79,   126,   295,   104,  -154,    90,   182,
    -154,  -154,  -154,    -7,   226,   251,     7,   101,  -154,  -154,
     182,   112,  -154,   146,  -154,   182,  -154,   329,   288,  -154,
    -154,  -154,  -154,   137,    98,    98,    15,  -154,   128,  -154,
     217,  -154,   212,  -154,  -154,  -154,  -154,  -154,  -154,  -154,
    -154,   153,  -154,  -154,  -154,  -154,   182,  -154,   251,   251,
    -154,   255,   300,  -154,   205,  -154,   258,   317,  -154,  -154,
      41,  -154,   155,  -154,  -154,    57,    20,   171,   147,   286,
     223,  -154,   296,  -154,  -154,  -154,    20,    98,  -154,  -154,
      98,   328,  -154,  -154,  -154,   -15,   332,   315,   251,   226,
     226,  -154,  -154,  -154,  -154,   329,   214,  -154,  -154,  -154,
     137,   349,   217,  -154,  -154,  -154,  -154,  -154,   304,  -154,
    -154,  -154,  -154,   182,   182,   251,    20,    98,  -154,    98,
    -154,   251,   251,  -154,   256,  -154,  -154,  -154,  -154,  -154,
      98,  -154
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     6,     0,     1,     0,    75,    38,     3,
       0,     0,    73,     0,    70,     9,     0,     5,   101,     0,
       0,     0,     0,     0,     4,     0,     0,    25,    31,    32,
      33,    34,     0,     0,     0,     0,     0,     8,    18,    22,
      24,     0,     0,     0,     0,     0,     0,     0,     0,    25,
       0,   100,     0,    91,    92,    93,    94,    95,    96,    97,
      98,    99,     0,     0,     0,     0,     2,    56,    37,    68,
      67,     0,     0,     0,     0,     0,    16,    17,     0,     0,
      36,    30,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   126,     0,    25,     0,     0,
       0,     0,     0,    89,   101,    82,    84,    74,     0,     0,
       0,     0,     0,    54,    52,    51,    55,    40,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    23,     0,
      35,    10,    14,    13,    15,    12,    11,    26,     0,     7,
     106,   104,   121,    56,     0,   101,   136,     0,   135,   140,
     139,     0,   138,     0,   103,   102,    90,    88,     0,    81,
      78,    76,    75,    56,     0,     0,     0,    64,     0,    53,
      56,    50,    56,    66,    59,    60,    61,    62,    58,    72,
      57,     0,    20,    21,    19,    28,    29,    27,   101,   101,
      55,     0,   120,   112,     0,   116,     0,     0,   129,   132,
       0,   133,     0,   131,    87,     0,     0,     0,    73,    49,
       0,    47,     0,    42,    43,    44,     0,     0,    45,    39,
       0,   109,   122,   118,   117,    56,     0,    56,   101,     0,
       0,   123,   134,   137,    83,    88,     0,    80,    79,    77,
      56,     0,    56,    63,    65,    71,   107,   105,     0,   111,
     110,   115,   113,   127,   128,   101,     0,     0,    46,     0,
      48,   101,   101,   124,     0,    86,    41,   108,   119,   125,
       0,    85
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -154,  -154,  -154,   253,  -154,  -154,   -13,   -18,    21,   172,
    -154,  -154,  -154,   192,  -154,   122,  -147,  -133,  -153,   158,
    -154,   150,   -22,  -154,  -154,   208,  -154,  -154,  -154,   261,
    -154,   133,   -10,  -154,   -98,  -154,  -154,  -154,  -154,  -154,
    -154,  -154,   144,  -154,   145,  -154,  -154,  -154,  -154,  -154,
    -154,  -154,  -154,  -154,  -154,  -154,   173,  -154,   169
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     7,     8,    11,    81,    38,    82,    39,
      40,    14,    22,   117,   210,   211,   118,   119,   179,   180,
     166,   167,   168,    24,    72,    12,    19,    64,    65,   158,
     205,   206,    51,    52,    53,    54,    55,   188,   247,   261,
      56,   192,   193,   194,   195,   226,    57,   189,    58,   255,
     269,   197,    59,    60,    61,   147,   148,   151,   152
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      50,    71,    20,    37,    15,     1,   156,  -114,   143,   140,
     191,   213,   214,    69,   248,  -114,   212,   103,     5,    76,
      77,    69,    79,   218,   -69,   -69,     9,   190,    98,    92,
      93,    94,   141,   -69,    95,   190,  -114,   215,    62,    63,
      83,    84,    85,    86,  -114,    87,   104,   198,    70,    83,
      84,    85,    86,    88,    87,   145,    70,    16,     4,    89,
     124,   125,    88,    90,   244,   127,   216,   245,     6,    96,
     131,   132,   133,   134,   135,   136,  -130,    97,   139,  -130,
      89,   146,   184,   142,    90,   129,    50,   150,    34,   155,
     221,   222,   191,   212,   191,   260,   126,    83,    84,    85,
      86,   181,    87,   101,   265,  -130,   266,   234,   235,    10,
      88,   138,   174,   175,   176,   177,   186,   271,    25,    26,
      83,    13,   153,    86,   129,    87,   157,    50,   130,    17,
     252,   196,   -84,    88,   178,    27,    28,    29,    30,    31,
     121,    32,   122,   129,    33,  -131,    34,   187,    35,   160,
      87,   199,     6,    -6,   200,    36,    80,   263,  -131,    -6,
      -6,    -6,   201,   267,   268,   202,   161,    83,    18,    -6,
      50,    50,    87,   209,    25,    26,   114,   115,   237,   116,
      88,   121,   146,   217,   236,   174,   175,   176,   177,   150,
      21,    27,    28,    29,    30,    31,   203,    32,   239,   129,
      33,    89,    34,   149,    35,    90,   121,   102,   220,    23,
      50,    36,    25,    26,    41,    66,   253,   254,   109,   110,
     111,    67,   112,    83,    84,    85,    86,    68,    87,    27,
      28,    29,    30,    31,   264,    32,    88,    50,    33,    73,
      34,   154,    35,    50,    50,    25,    26,   105,   113,    36,
      74,   114,   115,   113,   116,    75,   114,   115,   227,   116,
     228,    91,    27,    28,    29,    30,    31,   121,    32,   257,
      78,    33,    18,    34,    42,    35,   240,    43,    99,    44,
     241,    45,    36,   100,    46,    47,    48,    49,   106,   229,
     230,   223,    28,    29,    30,    31,   107,   108,    34,    83,
      84,    85,    86,   120,    87,    83,    84,    85,    86,   121,
      87,   270,    88,   123,   128,    87,   137,   144,    88,    83,
      84,    85,    86,   157,    87,   164,   163,   165,   182,   169,
     170,   171,    88,    83,    84,    85,    86,   172,    87,   173,
     204,  -131,   183,   207,   231,   -54,    88,    83,    84,    85,
      86,   225,    87,   246,   250,   242,   185,   190,   259,   262,
      88,   162,   258,   224,   219,   238,   243,   159,   256,   249,
     208,   233,   251,   232
};

static const yytype_int16 yycheck[] =
{
      18,    23,    12,    16,     1,     3,   104,    22,     9,     1,
     143,   164,   165,     1,    29,    22,   163,    22,     0,    32,
      33,     1,    35,   170,    12,    13,    51,    42,    46,    42,
      43,    44,    24,    21,     1,    42,    51,    22,    12,    13,
      41,    42,    43,    44,    51,    46,    51,   145,    36,    41,
      42,    43,    44,    54,    46,    27,    36,    54,    36,    52,
      73,    74,    54,    56,   217,    78,    51,   220,     4,    36,
      83,    84,    85,    86,    87,    88,    22,    36,    91,    25,
      52,    99,    50,    27,    56,    53,   104,   100,    47,   102,
     188,   189,   225,   240,   227,   242,    75,    41,    42,    43,
      44,   123,    46,    49,   257,    51,   259,    50,    51,    36,
      54,    90,    14,    15,    16,    17,   129,   270,    19,    20,
      41,     5,   101,    44,    53,    46,    49,   145,    57,    51,
     228,   144,    55,    54,    36,    36,    37,    38,    39,    40,
      53,    42,    55,    53,    45,    41,    47,    57,    49,     1,
      46,    50,     4,     5,    53,    56,    57,   255,    54,    11,
      12,    13,    50,   261,   262,    53,    18,    41,    21,    21,
     188,   189,    46,    36,    19,    20,    39,    40,     7,    42,
      54,    53,   200,    55,   206,    14,    15,    16,    17,   202,
      36,    36,    37,    38,    39,    40,    50,    42,   208,    53,
      45,    52,    47,    48,    49,    56,    53,    58,    55,    11,
     228,    56,    19,    20,    36,    52,   229,   230,     6,     7,
       8,    54,    10,    41,    42,    43,    44,    51,    46,    36,
      37,    38,    39,    40,   256,    42,    54,   255,    45,    49,
      47,    48,    49,   261,   262,    19,    20,    36,    36,    56,
      49,    39,    40,    36,    42,    49,    39,    40,    53,    42,
      55,    54,    36,    37,    38,    39,    40,    53,    42,    55,
      49,    45,    21,    47,    23,    49,    53,    26,    49,    28,
      57,    30,    56,    49,    33,    34,    35,    36,    36,    31,
      32,    36,    37,    38,    39,    40,    51,    51,    47,    41,
      42,    43,    44,    36,    46,    41,    42,    43,    44,    53,
      46,    55,    54,    51,    50,    46,    36,    58,    54,    41,
      42,    43,    44,    49,    46,     9,    56,     9,    50,    36,
      59,    37,    54,    41,    42,    43,    44,    54,    46,    36,
      11,    46,    50,    55,    27,    59,    54,    41,    42,    43,
      44,    51,    46,    25,    22,    59,    50,    42,     9,    55,
      54,   108,   240,   191,   172,   207,   216,   106,   235,   225,
     162,   202,   227,   200
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,    62,    63,    36,     0,     4,    64,    65,    51,
      36,    66,    86,     5,    72,     1,    54,    51,    21,    87,
      93,    36,    73,    11,    84,    19,    20,    36,    37,    38,
      39,    40,    42,    45,    47,    49,    56,    67,    68,    70,
      71,    36,    23,    26,    28,    30,    33,    34,    35,    36,
      68,    93,    94,    95,    96,    97,   101,   107,   109,   113,
     114,   115,    12,    13,    88,    89,    52,    54,    51,     1,
      36,    83,    85,    49,    49,    49,    67,    67,    49,    67,
      57,    67,    69,    41,    42,    43,    44,    46,    54,    52,
      56,    54,    67,    67,    67,     1,    36,    36,    68,    49,
      49,    49,    58,    22,    51,    36,    36,    51,    51,     6,
       7,     8,    10,    36,    39,    40,    42,    74,    77,    78,
      36,    53,    55,    51,    67,    67,    69,    67,    50,    53,
      57,    67,    67,    67,    67,    67,    67,    36,    69,    67,
       1,    24,    27,     9,    58,    27,    68,   116,   117,    48,
      67,   118,   119,    69,    48,    67,    95,    49,    90,    90,
       1,    18,    64,    56,     9,     9,    81,    82,    83,    36,
      59,    37,    54,    36,    14,    15,    16,    17,    36,    79,
      80,    83,    50,    50,    50,    50,    67,    57,    98,   108,
      42,    78,   102,   103,   104,   105,    67,   112,    95,    50,
      53,    50,    53,    50,    11,    91,    92,    55,    86,    36,
      75,    76,    77,    79,    79,    22,    51,    55,    77,    74,
      55,    95,    95,    36,    70,    51,   106,    53,    55,    31,
      32,    27,   117,   119,    50,    51,    83,     7,    80,    93,
      53,    57,    59,    82,    79,    79,    25,    99,    29,   103,
      22,   105,    95,    67,    67,   110,    92,    55,    76,     9,
      77,   100,    55,    95,    83,    79,    79,    95,    95,   111,
      55,    79
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    61,    62,    63,    64,    65,    65,    66,    66,    66,
      67,    67,    67,    67,    67,    67,    67,    67,    67,    67,
      67,    67,    67,    67,    67,    68,    68,    68,    68,    69,
      69,    70,    70,    70,    70,    71,    71,    72,    72,    73,
      73,    74,    74,    74,    74,    74,    75,    75,    76,    76,
      77,    77,    77,    77,    77,    78,    78,    79,    79,    80,
      80,    80,    80,    81,    81,    82,    83,    83,    83,    84,
      84,    85,    85,    87,    86,    86,    88,    88,    88,    89,
      89,    89,    89,    90,    90,    91,    91,    92,    92,    93,
      94,    94,    95,    95,    95,    95,    95,    95,    95,    95,
      95,    95,    96,    96,    98,    97,    97,   100,    99,    99,
     101,   102,   102,   103,   103,   104,   104,   105,   105,   106,
     106,   108,   107,   110,   111,   109,   109,   112,   112,   113,
     114,   114,   115,   115,   116,   116,   117,   118,   118,   119,
     119
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     5,     3,     3,     3,     0,     5,     3,     2,
       3,     3,     3,     3,     3,     3,     2,     2,     1,     4,
       4,     4,     1,     3,     1,     1,     3,     4,     4,     3,
       1,     1,     1,     1,     1,     3,     2,     3,     0,     5,
       3,     6,     3,     3,     3,     3,     3,     1,     3,     1,
       2,     1,     1,     2,     1,     1,     0,     1,     1,     1,
       1,     1,     1,     3,     1,     3,     3,     1,     1,     3,
       0,     5,     3,     0,     4,     0,     3,     5,     3,     5,
       5,     3,     2,     3,     0,     6,     4,     1,     0,     3,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     0,     3,     3,     0,     6,     3,     0,     3,     0,
       6,     3,     1,     3,     0,     3,     1,     2,     2,     4,
       0,     0,     5,     0,     0,     8,     2,     3,     3,     4,
       1,     4,     4,     4,     3,     1,     1,     3,     1,     1,
       1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


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

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



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

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
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
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
                                              );
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
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
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


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
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
            else
              goto append;

          append:
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

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
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
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
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

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
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
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
# undef YYSTACK_RELOCATE
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

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
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
  case 2:
#line 104 "2ostadio.y"
                                                               {hashtbl_get(hashtbl, scope);scope--;}
#line 1607 "2ostadio.tab.c"
    break;

  case 3:
#line 105 "2ostadio.y"
                                {hashtbl_insert(hashtbl, (yyvsp[-1].stringval), NULL, scope);}
#line 1613 "2ostadio.tab.c"
    break;

  case 6:
#line 108 "2ostadio.y"
            { }
#line 1619 "2ostadio.tab.c"
    break;

  case 7:
#line 109 "2ostadio.y"
                                                          {hashtbl_insert(hashtbl, (yyvsp[-2].stringval), NULL, scope);}
#line 1625 "2ostadio.tab.c"
    break;

  case 8:
#line 110 "2ostadio.y"
                            {hashtbl_insert(hashtbl, (yyvsp[-2].stringval), NULL, scope);}
#line 1631 "2ostadio.tab.c"
    break;

  case 9:
#line 111 "2ostadio.y"
                                                        { ("Wrong use in constant definition"); yyerrok;}
#line 1637 "2ostadio.tab.c"
    break;

  case 19:
#line 121 "2ostadio.y"
                                     {hashtbl_insert(hashtbl, (yyvsp[-3].stringval), NULL, scope);}
#line 1643 "2ostadio.tab.c"
    break;

  case 25:
#line 127 "2ostadio.y"
               {hashtbl_insert(hashtbl, (yyvsp[0].stringval), NULL, scope);}
#line 1649 "2ostadio.tab.c"
    break;

  case 26:
#line 128 "2ostadio.y"
                      {hashtbl_insert(hashtbl, (yyvsp[-1].stringval), NULL, scope);}
#line 1655 "2ostadio.tab.c"
    break;

  case 38:
#line 140 "2ostadio.y"
            { }
#line 1661 "2ostadio.tab.c"
    break;

  case 39:
#line 141 "2ostadio.y"
                                                {hashtbl_insert(hashtbl, (yyvsp[-2].stringval), NULL, scope);}
#line 1667 "2ostadio.tab.c"
    break;

  case 40:
#line 142 "2ostadio.y"
                      {hashtbl_insert(hashtbl, (yyvsp[-2].stringval), NULL, scope);}
#line 1673 "2ostadio.tab.c"
    break;

  case 49:
#line 151 "2ostadio.y"
       {hashtbl_insert(hashtbl, (yyvsp[0].stringval), NULL, scope);}
#line 1679 "2ostadio.tab.c"
    break;

  case 53:
#line 155 "2ostadio.y"
               {hashtbl_insert(hashtbl, (yyvsp[0].stringval), NULL, scope);}
#line 1685 "2ostadio.tab.c"
    break;

  case 54:
#line 156 "2ostadio.y"
       {hashtbl_insert(hashtbl, (yyvsp[0].stringval), NULL, scope);}
#line 1691 "2ostadio.tab.c"
    break;

  case 56:
#line 157 "2ostadio.y"
                          { }
#line 1697 "2ostadio.tab.c"
    break;

  case 66:
#line 164 "2ostadio.y"
                                      {hashtbl_insert(hashtbl, (yyvsp[0].stringval), NULL, scope);}
#line 1703 "2ostadio.tab.c"
    break;

  case 67:
#line 165 "2ostadio.y"
        {hashtbl_insert(hashtbl, (yyvsp[0].stringval), NULL, scope);}
#line 1709 "2ostadio.tab.c"
    break;

  case 68:
#line 166 "2ostadio.y"
                                                         {yyerror ("Wrong use in identifiers"); yyerrok;}
#line 1715 "2ostadio.tab.c"
    break;

  case 70:
#line 168 "2ostadio.y"
            { }
#line 1721 "2ostadio.tab.c"
    break;

  case 73:
#line 171 "2ostadio.y"
                         {scope++;}
#line 1727 "2ostadio.tab.c"
    break;

  case 75:
#line 172 "2ostadio.y"
            { }
#line 1733 "2ostadio.tab.c"
    break;

  case 76:
#line 173 "2ostadio.y"
                                                            {hashtbl_get(hashtbl,scope); scope--;}
#line 1739 "2ostadio.tab.c"
    break;

  case 77:
#line 174 "2ostadio.y"
                                                            {hashtbl_get(hashtbl,scope); scope--;}
#line 1745 "2ostadio.tab.c"
    break;

  case 78:
#line 175 "2ostadio.y"
                                                         {yyerror ("Wrong use in subprogram"); yyerrok;}
#line 1751 "2ostadio.tab.c"
    break;

  case 79:
#line 176 "2ostadio.y"
                                                                    {hashtbl_insert(hashtbl, (yyvsp[-3].stringval), NULL, scope);}
#line 1757 "2ostadio.tab.c"
    break;

  case 80:
#line 177 "2ostadio.y"
                                                   {hashtbl_insert(hashtbl, (yyvsp[-3].stringval), NULL, scope);}
#line 1763 "2ostadio.tab.c"
    break;

  case 81:
#line 178 "2ostadio.y"
                                     {hashtbl_insert(hashtbl, (yyvsp[-1].stringval), NULL, scope);}
#line 1769 "2ostadio.tab.c"
    break;

  case 82:
#line 179 "2ostadio.y"
                  {hashtbl_insert(hashtbl, (yyvsp[0].stringval), NULL, scope);}
#line 1775 "2ostadio.tab.c"
    break;

  case 84:
#line 181 "2ostadio.y"
            { }
#line 1781 "2ostadio.tab.c"
    break;

  case 88:
#line 184 "2ostadio.y"
                        { }
#line 1787 "2ostadio.tab.c"
    break;

  case 101:
#line 197 "2ostadio.y"
            { }
#line 1793 "2ostadio.tab.c"
    break;

  case 104:
#line 200 "2ostadio.y"
                                     {scope++;}
#line 1799 "2ostadio.tab.c"
    break;

  case 105:
#line 200 "2ostadio.y"
                                                                  {hashtbl_get(hashtbl,scope); scope--;}
#line 1805 "2ostadio.tab.c"
    break;

  case 106:
#line 201 "2ostadio.y"
                                                        {yyerror ("Wrong use in If statement"); yyerrok;}
#line 1811 "2ostadio.tab.c"
    break;

  case 107:
#line 202 "2ostadio.y"
                {scope++;}
#line 1817 "2ostadio.tab.c"
    break;

  case 108:
#line 202 "2ostadio.y"
                                                                   {hashtbl_get(hashtbl,scope); scope--;}
#line 1823 "2ostadio.tab.c"
    break;

  case 109:
#line 203 "2ostadio.y"
                               {}
#line 1829 "2ostadio.tab.c"
    break;

  case 114:
#line 208 "2ostadio.y"
            { }
#line 1835 "2ostadio.tab.c"
    break;

  case 118:
#line 212 "2ostadio.y"
            {hashtbl_insert(hashtbl, (yyvsp[0].stringval), NULL, scope);}
#line 1841 "2ostadio.tab.c"
    break;

  case 120:
#line 214 "2ostadio.y"
            { }
#line 1847 "2ostadio.tab.c"
    break;

  case 121:
#line 215 "2ostadio.y"
                                         {scope++;}
#line 1853 "2ostadio.tab.c"
    break;

  case 122:
#line 215 "2ostadio.y"
                                                                   {hashtbl_get(hashtbl,scope); scope--;}
#line 1859 "2ostadio.tab.c"
    break;

  case 123:
#line 216 "2ostadio.y"
                                                   {scope++;}
#line 1865 "2ostadio.tab.c"
    break;

  case 124:
#line 216 "2ostadio.y"
                                                                        {hashtbl_insert(hashtbl, (yyvsp[-5].stringval), NULL, scope);}
#line 1871 "2ostadio.tab.c"
    break;

  case 125:
#line 216 "2ostadio.y"
                                                                                                                      {hashtbl_get(hashtbl,scope); scope--;}
#line 1877 "2ostadio.tab.c"
    break;

  case 126:
#line 217 "2ostadio.y"
                                                        {yyerror ("Wrong use in For statement"); yyerrok;}
#line 1883 "2ostadio.tab.c"
    break;

  case 130:
#line 221 "2ostadio.y"
                      {hashtbl_insert(hashtbl, (yyvsp[0].stringval), NULL, scope);}
#line 1889 "2ostadio.tab.c"
    break;

  case 131:
#line 222 "2ostadio.y"
                                     {hashtbl_insert(hashtbl, (yyvsp[-3].stringval), NULL, scope);}
#line 1895 "2ostadio.tab.c"
    break;


#line 1899 "2ostadio.tab.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

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
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
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

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
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

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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


#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
yyreturn:
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
                  yystos[+*yyssp], yyvsp);
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
  return yyresult;
}
#line 232 "2ostadio.y"







//Main apo lektiko
int main(int argc, char *argv[]){
	int token;        

    
    if(!(hashtbl = hashtbl_create(10, NULL))){
        puts("Error, failed to initialize");
        return EXIT_FAILURE;
    }
	/* Διάβασε αρχείο */
	if(argc > 1){       
		yyin = fopen(argv[1], "r");
		if (yyin == NULL){
			perror ("[ERROR] Could not open file"); 
			return EXIT_FAILURE;
		}
	}        

	yyparse();

	fclose(yyin);
    hashtbl_destroy(hashtbl);
    return 0;
}
