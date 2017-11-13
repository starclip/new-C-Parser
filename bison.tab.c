/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 3 "bison.y" /* yacc.c:339  */

#include <stdio.h>
#include "semantic_actions.c"
#define YYERROR_VERBOSE 1
// datos importantes.
extern int yylex();
extern int yyparse();
extern FILE *yyin;
 
void yyerror(const char *s);

#line 78 "bison.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif


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
    IDENTIFIER = 258,
    I_CONSTANT = 259,
    F_CONSTANT = 260,
    STRING_LITERAL = 261,
    TYPEDEF_NAME = 262,
    ENUMERATION_CONSTANT = 263,
    FUNC_NAME = 264,
    SIZEOF = 265,
    PTR_OP = 266,
    INC_OP = 267,
    DEC_OP = 268,
    LEFT_OP = 269,
    RIGHT_OP = 270,
    LE_OP = 271,
    GE_OP = 272,
    EQ_OP = 273,
    NE_OP = 274,
    AND_OP = 275,
    OR_OP = 276,
    MUL_ASSIGN = 277,
    DIV_ASSIGN = 278,
    MOD_ASSIGN = 279,
    ADD_ASSIGN = 280,
    SUB_ASSIGN = 281,
    LEFT_ASSIGN = 282,
    RIGHT_ASSIGN = 283,
    AND_ASSIGN = 284,
    XOR_ASSIGN = 285,
    OR_ASSIGN = 286,
    TYPEDEF = 287,
    EXTERN = 288,
    STATIC = 289,
    AUTO = 290,
    REGISTER = 291,
    INLINE = 292,
    CONST = 293,
    RESTRICT = 294,
    VOLATILE = 295,
    BOOL = 296,
    CHAR = 297,
    SHORT = 298,
    INT = 299,
    LONG = 300,
    SIGNED = 301,
    UNSIGNED = 302,
    FLOAT = 303,
    DOUBLE = 304,
    VOID = 305,
    COMPLEX = 306,
    IMAGINARY = 307,
    STRUCT = 308,
    UNION = 309,
    ENUM = 310,
    ELLIPSIS = 311,
    CASE = 312,
    DEFAULT = 313,
    IF = 314,
    ELSE = 315,
    SWITCH = 316,
    WHILE = 317,
    DO = 318,
    FOR = 319,
    GOTO = 320,
    CONTINUE = 321,
    BREAK = 322,
    RETURN = 323,
    ALIGNAS = 324,
    ALIGNOF = 325,
    ATOMIC = 326,
    GENERIC = 327,
    NORETURN = 328,
    STATIC_ASSERT = 329,
    THREAD_LOCAL = 330
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 15 "bison.y" /* yacc.c:355  */

	char *sval; // El valor de "una variable".

#line 195 "bison.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);



/* Copy the second part of user declarations.  */

#line 212 "bison.tab.c" /* yacc.c:358  */

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
#else
typedef signed char yytype_int8;
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
# elif ! defined YYSIZE_T
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
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
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
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
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
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  74
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   4564

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  100
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  91
/* YYNRULES -- Number of rules.  */
#define YYNRULES  330
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  590

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   330

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    91,     2,     2,     2,    93,    86,     2,
      76,    77,    87,    88,    78,    89,    82,    92,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    79,    85,
      94,    99,    95,    98,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    80,     2,    81,    96,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    83,    97,    84,    90,     2,     2,     2,
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
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    49,    49,    50,    51,    52,    53,    54,    55,    59,
      60,    61,    65,    69,    70,    74,    75,    79,    80,    81,
      85,    86,    87,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   108,   109,   113,
     114,   114,   115,   116,   117,   118,   119,   120,   124,   125,
     126,   127,   128,   129,   133,   134,   135,   136,   140,   141,
     142,   143,   144,   145,   149,   150,   151,   152,   153,   154,
     155,   159,   160,   161,   162,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   178,   179,   180,   181,   182,   186,
     187,   188,   192,   193,   194,   198,   199,   200,   204,   205,
     206,   210,   211,   212,   216,   217,   218,   222,   223,   223,
     224,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   242,   243,   244,   248,   252,   253,   254,   255,
     256,   260,   261,   262,   263,   264,   265,   266,   267,   268,
     269,   270,   274,   275,   276,   280,   281,   287,   288,   289,
     290,   291,   292,   296,   297,   298,   299,   299,   300,   301,
     302,   303,   304,   305,   306,   307,   308,   309,   310,   311,
     315,   316,   317,   321,   322,   326,   327,   331,   332,   333,
     337,   338,   339,   340,   344,   345,   349,   350,   351,   355,
     356,   357,   357,   358,   358,   359,   363,   364,   368,   369,
     373,   377,   378,   379,   380,   384,   385,   389,   390,   394,
     395,   399,   400,   401,   402,   403,   404,   405,   406,   407,
     408,   409,   410,   411,   412,   416,   417,   418,   419,   423,
     424,   429,   430,   434,   435,   439,   440,   441,   445,   446,
     446,   450,   451,   455,   456,   457,   461,   462,   463,   464,
     465,   466,   467,   468,   469,   470,   471,   472,   473,   474,
     475,   476,   477,   478,   479,   480,   481,   485,   486,   487,
     491,   492,   493,   494,   498,   502,   503,   507,   508,   512,
     516,   517,   518,   519,   520,   521,   525,   525,   526,   527,
     531,   532,   532,   536,   537,   541,   542,   546,   547,   548,
     552,   552,   553,   553,   553,   554,   558,   558,   559,   560,
     561,   562,   563,   566,   567,   571,   571,   572,   573,   574,
     575,   576,   580,   581,   585,   586,   590,   591,   592,   596,
     597
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "I_CONSTANT", "F_CONSTANT",
  "STRING_LITERAL", "TYPEDEF_NAME", "ENUMERATION_CONSTANT", "FUNC_NAME",
  "SIZEOF", "PTR_OP", "INC_OP", "DEC_OP", "LEFT_OP", "RIGHT_OP", "LE_OP",
  "GE_OP", "EQ_OP", "NE_OP", "AND_OP", "OR_OP", "MUL_ASSIGN", "DIV_ASSIGN",
  "MOD_ASSIGN", "ADD_ASSIGN", "SUB_ASSIGN", "LEFT_ASSIGN", "RIGHT_ASSIGN",
  "AND_ASSIGN", "XOR_ASSIGN", "OR_ASSIGN", "TYPEDEF", "EXTERN", "STATIC",
  "AUTO", "REGISTER", "INLINE", "CONST", "RESTRICT", "VOLATILE", "BOOL",
  "CHAR", "SHORT", "INT", "LONG", "SIGNED", "UNSIGNED", "FLOAT", "DOUBLE",
  "VOID", "COMPLEX", "IMAGINARY", "STRUCT", "UNION", "ENUM", "ELLIPSIS",
  "CASE", "DEFAULT", "IF", "ELSE", "SWITCH", "WHILE", "DO", "FOR", "GOTO",
  "CONTINUE", "BREAK", "RETURN", "ALIGNAS", "ALIGNOF", "ATOMIC", "GENERIC",
  "NORETURN", "STATIC_ASSERT", "THREAD_LOCAL", "'('", "')'", "','", "':'",
  "'['", "']'", "'.'", "'{'", "'}'", "';'", "'&'", "'*'", "'+'", "'-'",
  "'~'", "'!'", "'/'", "'%'", "'<'", "'>'", "'^'", "'|'", "'?'", "'='",
  "$accept", "primary_expression", "constant", "enumeration_constant",
  "string", "generic_selection", "generic_assoc_list",
  "generic_association", "postfix_expression", "argument_expression_list",
  "unary_expression", "$@1", "unary_operator", "cast_expression",
  "multiplicative_expression", "additive_expression", "shift_expression",
  "relational_expression", "equality_expression", "and_expression",
  "exclusive_or_expression", "inclusive_or_expression",
  "logical_and_expression", "logical_or_expression",
  "conditional_expression", "assignment_expression", "$@2",
  "assignment_operator", "expression", "constant_expression",
  "declaration", "declaration_specifiers", "init_declarator_list",
  "init_declarator", "storage_class_specifier", "type_specifier", "$@3",
  "struct_or_union_specifier", "struct_or_union",
  "struct_declaration_list", "struct_declaration",
  "specifier_qualifier_list", "struct_declarator_list",
  "struct_declarator", "enum_specifier", "$@4", "$@5", "enumerator_list",
  "enumerator", "atomic_type_specifier", "type_qualifier",
  "function_specifier", "alignment_specifier", "declarator",
  "direct_declarator", "pointer", "type_qualifier_list",
  "parameter_type_list", "parameter_list", "parameter_declaration",
  "identifier_list", "$@6", "type_name", "abstract_declarator",
  "direct_abstract_declarator", "initializer", "initializer_list",
  "designation", "designator_list", "designator",
  "static_assert_declaration", "statement", "labeled_statement", "$@7",
  "compound_statement", "$@8", "block_item_list", "block_item",
  "expression_statement", "selection_statement", "$@9", "$@10", "$@11",
  "iteration_statement", "$@12", "jump_statement", "$@13",
  "translation_unit", "external_declaration", "function_definition",
  "declaration_list", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,    40,    41,    44,    58,
      91,    93,    46,   123,   125,    59,    38,    42,    43,    45,
     126,    33,    47,    37,    60,    62,    94,   124,    63,    61
};
# endif

#define YYPACT_NINF -430

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-430)))

#define YYTABLE_NINF -307

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    4114,  3628,  -430,  -430,  -430,  -430,  -430,  -430,  -430,  -430,
    -430,  -430,  -430,  -430,  -430,  -430,  -430,  -430,  -430,  -430,
    -430,  -430,  -430,  -430,  -430,    31,   -26,   -24,  -430,    -3,
    -430,  -430,    54,  3292,  3348,   -17,  -430,    51,  -430,  -430,
    3404,  3460,  3516,  -430,  4059,  -430,  -430,  4225,  -430,    99,
    -430,   196,  -430,    -8,    88,    48,    94,   207,  1171,  4493,
    2144,   -43,  -430,     7,  -430,   644,  -430,  -430,  -430,   140,
    4417,  -430,  -430,  -430,  -430,  -430,   153,  -430,  -430,  -430,
     196,   149,  -430,  3948,  1375,    88,   155,   177,  -430,   185,
     119,  -430,   323,  -430,  -430,  -430,  -430,  -430,  -430,  3178,
    -430,  3200,   200,   212,  1226,  -430,  -430,  -430,  -430,  -430,
    -430,  -430,  -430,  -430,  -430,   280,  -430,  3222,  -430,   -31,
     183,   179,   171,   281,   209,   208,   214,   293,    23,  -430,
     251,  4466,    75,  4466,   258,   261,   268,  -430,    11,  -430,
    3740,  1874,  -430,    54,  -430,  3795,  4417,  3844,  -430,    74,
    -430,  -430,  -430,  -430,  -430,  1025,   272,  -430,    69,   277,
     283,  -430,   291,  1717,  -430,   294,   576,  -430,   302,  1466,
     207,   207,  2144,    42,  -430,  2235,  2235,  3222,  2257,  1281,
    -430,  3200,  1281,  -430,  4390,  2279,   201,  -430,    93,   295,
     386,  -430,  -430,   432,  2370,   390,   397,  -430,  3222,  3222,
    2392,  2414,  2505,  2257,  2527,  2549,  2640,  2662,  2684,  2775,
    2797,  2819,  2910,  2257,  2932,  2954,  3045,  -430,  -430,  3684,
    1489,   131,  -430,   206,  -430,  -430,  -430,   401,  -430,  -430,
     319,  1830,  -430,  -430,  -430,  -430,  3893,  -430,  -430,  2144,
    -430,    96,  -430,   342,   794,   351,  2144,   355,   363,   374,
    1336,    35,   449,   369,   371,  1965,  -430,   104,  -430,  -430,
    -430,  -430,   934,  -430,  -430,  -430,  -430,   395,  -430,   381,
    3572,  -430,   188,  -430,  -430,  4169,  -430,   379,  1717,  -430,
    2144,   722,  -430,  2144,  -430,   380,   382,   137,   384,  -430,
    -430,  -430,   372,   -31,   -31,   385,   169,   208,   252,   387,
    -430,   389,   392,   394,   -30,   396,  3089,  -430,  -430,  3067,
    1987,  -430,  -430,   243,  -430,   297,     5,  -430,   383,  -430,
    -430,   393,  -430,   372,   -31,   372,   -31,   183,   169,   183,
     169,   179,   169,   179,   169,   179,   169,   179,   169,   171,
     169,   171,   169,   281,   169,   209,   208,   107,   214,   323,
     293,   276,   245,  -430,   402,   403,  1717,  -430,   391,   400,
    1580,   206,  4003,  1603,   406,  2144,   483,  -430,   142,  1874,
     -11,  -430,  -430,  -430,    97,  -430,  2144,   410,   412,  1336,
    2144,   416,  2144,   434,  2009,  1116,  -430,  -430,  -430,   358,
    -430,   105,  -430,  -430,  -430,  -430,   418,   494,  -430,  -430,
    -430,   417,  -430,  -430,  -430,  -430,  -430,  -430,  -430,  -430,
    -430,  -430,  -430,  -430,  2144,   419,  -430,  -430,   207,  -430,
      63,  -430,   424,   429,   429,  -430,  -430,  4280,  4280,  1830,
    -430,   323,  -430,  -430,  1852,  -430,  -430,  2144,  -430,  -430,
    -430,  -430,  -430,  2144,  2144,  -430,  -430,   420,  1717,  -430,
    -430,  2144,  -430,   433,  -430,   439,  1717,  -430,   436,   443,
    1694,   440,   445,  -430,   551,  -430,  -430,  -430,  -430,  -430,
    -430,  1336,  1336,  -430,   450,  2144,   249,   451,   452,   727,
    2009,  2009,   447,  -430,  -430,  2144,  -430,  -430,  -430,  -430,
    -430,   455,   456,   256,  -430,   458,   266,   147,   213,   191,
    -430,  -430,  -430,  -430,   457,   459,  -430,  -430,   460,  1717,
    -430,  -430,  2144,  -430,   461,  -430,  -430,  -430,  -430,  1874,
    -430,  -430,   453,   275,  1336,  2144,  1336,   861,   466,  2235,
    2235,   468,  2100,  2122,  -430,   289,  2144,  2144,  -430,  4335,
    2144,  -430,  1830,   462,   465,  1739,  -430,  -430,  -430,  -430,
     472,   481,  -430,  -430,  1336,  1336,  -430,   314,  -430,  1336,
    1336,   337,  1336,   348,  1336,  -430,  -430,   455,  -430,  -430,
    -430,  -430,  -430,  -430,  -430,   486,  -430,   480,  -430,  -430,
    1336,  -430,  1336,  -430,  -430,  -430,  -430,  -430,  1336,  -430
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,   169,   147,   148,   149,   151,   152,   205,   201,
     202,   203,   163,   154,   155,   158,   161,   162,   159,   160,
     153,   164,   165,   173,   174,     0,     0,   204,   206,     0,
     150,   325,     0,     0,     0,     0,   167,     0,   168,   166,
       0,     0,     0,   128,     0,   322,   324,     0,   211,     0,
     129,   228,   141,     0,   210,     0,   195,     0,     0,   156,
       0,     0,   126,     0,   142,     0,   131,   133,   157,   172,
     156,   135,   137,   139,     1,   323,     0,   204,   229,   227,
     226,   291,   328,     0,     0,   209,     0,     0,    12,   199,
       0,   196,     0,     2,     9,    10,    13,    11,    14,     0,
      40,     0,     0,     0,     0,    48,    49,    50,    51,    52,
      53,    23,     3,     4,     6,    39,    54,     0,    58,    64,
      71,    75,    84,    89,    92,    95,    98,   101,   104,   125,
       0,   181,   242,   183,     0,     0,     0,   130,     0,   127,
       0,     0,   329,     0,   327,     0,   156,   156,   175,     0,
     179,   212,   230,   225,   290,     0,   238,   223,   237,     0,
     232,   233,     0,     0,   213,    49,     0,   107,     0,     0,
       0,     0,     0,     0,   189,     0,     0,     0,     0,     0,
      44,     0,     0,    42,     0,     0,     0,   122,     0,     0,
       0,    29,    30,     0,     0,     0,     0,    43,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   208,   180,     0,
       0,   244,   241,   245,   182,   207,   200,     0,   144,   143,
     146,     0,   269,   145,   330,   326,   156,   170,   176,     0,
     177,     0,   184,   188,     0,     2,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   297,     0,   295,   296,
     280,   281,     0,   293,   282,   283,   284,     0,   285,     0,
       0,   235,   244,   236,   222,     0,   224,     0,     0,   214,
       0,     0,   221,     0,   220,    49,     0,     0,     0,   198,
     190,   197,     0,    67,    68,     0,     0,    97,     0,     0,
      41,     0,     0,     0,     0,     0,     7,     8,     5,     0,
       0,    28,    25,     0,    37,     0,     0,    27,     0,    59,
      60,     0,    61,    69,    65,    70,    66,    72,    74,    73,
      82,    78,    83,    79,    80,    76,    81,    77,    87,    85,
      88,    86,    91,    90,    94,    93,    96,     0,    99,   103,
     102,     0,     0,   263,     0,     0,     0,   247,    49,     0,
       0,   243,     0,     0,     0,     0,     0,   271,     0,     0,
       0,   275,   171,   186,     0,   178,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   315,   317,   318,     0,
     319,     0,   299,   298,   292,   294,     0,     0,   231,   234,
     216,     0,   110,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   111,     0,     0,   217,   219,     0,   192,
       0,    62,     7,    45,     0,    47,    46,     0,     0,     0,
      56,   124,   123,    57,     0,    55,    26,     0,    33,    24,
      34,    63,   100,     0,     0,   264,   246,     0,     0,   248,
     254,     0,   253,     0,   265,     0,     0,   255,    49,     0,
       0,     0,     0,   278,     0,   267,   270,   274,   276,   185,
     187,     0,     0,   289,   302,     0,     0,     0,     0,     0,
       0,     0,     0,   321,   320,     0,   240,   215,   109,   218,
     194,     0,     0,     0,    17,     0,     0,     0,     0,     0,
      38,   106,   105,   250,     0,     0,   252,   266,     0,     0,
     256,   262,     0,   261,     0,   279,   277,   268,   273,     0,
     287,   288,     0,     0,     0,     0,     0,     0,   129,     0,
       0,     0,     0,     0,   316,     0,     0,     0,    16,     0,
       0,    15,     0,     0,     0,     0,    31,   249,   251,   258,
       0,     0,   259,   272,     0,     0,   305,     0,   314,     0,
       0,     0,     0,     0,     0,    22,    21,    19,    18,    20,
      35,    36,    32,   257,   260,     0,   301,     0,   313,   311,
       0,   309,     0,   307,   303,   308,   312,   310,     0,   304
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -430,  -430,  -430,  -430,  -430,  -430,   138,    28,  -430,  -430,
      41,  -430,  -430,   -33,  -171,   197,   174,   218,   357,   360,
    -153,   359,   354,  -430,   -40,    39,  -430,  -430,  -101,   -34,
     -48,   274,  -430,   442,  -430,   -57,  -430,  -430,  -430,   428,
    -126,   -27,  -430,   204,  -430,  -430,  -430,   278,  -157,  -430,
     -51,  -430,  -430,    14,   -44,   -41,   -60,   -77,  -430,   307,
     186,  -430,   -36,   -94,  -193,  -132,  -364,  -429,  -430,   215,
     -38,   -49,  -430,  -430,   -16,  -430,  -430,   324,  -344,  -430,
    -430,  -430,  -430,  -430,  -430,  -430,  -430,  -430,   543,  -430,
    -430
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   111,   112,    89,   113,   114,   493,   494,   115,   313,
     166,   181,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   167,   187,   281,   414,   257,   130,
      31,    52,    63,    64,    33,    34,    35,    36,    37,   147,
     148,   132,   241,   242,    38,    86,    87,    90,    91,    39,
      40,    41,    42,    76,    54,    55,    80,   354,   160,   161,
     162,   269,   495,   355,   223,   367,   368,   369,   370,   371,
      43,   259,   260,   377,   261,   155,   262,   263,   264,   265,
     381,   522,   588,   266,   267,   268,   482,    44,    45,    46,
     145
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      78,   131,   131,   188,   293,   294,   159,   133,   133,   233,
      79,    85,   228,   131,    48,    53,   291,   142,   129,   133,
     129,   238,   134,   135,   169,   297,   136,    68,   361,   152,
     324,   326,   150,    78,    56,   519,   384,    82,   222,   153,
     478,   481,   137,   149,   215,    88,    65,   131,   427,   144,
      58,    48,    59,   133,    69,    61,   198,    48,   175,   176,
     346,   199,   200,   177,   273,   497,    88,   178,   189,   365,
     499,   366,    48,    60,   131,    81,   131,    48,   188,   361,
     133,   188,   133,   309,   197,   138,   439,    49,   467,   131,
     131,   221,   139,   316,   307,   133,   133,   234,    51,   116,
      48,   116,    48,   278,   218,   392,   224,   258,   150,   150,
     238,   385,    78,   519,    57,   352,   519,   272,   152,   149,
     149,   216,   131,   168,    49,   131,   290,   131,   133,   235,
      49,   133,   129,   133,    70,   531,   532,   533,   289,    62,
     180,    51,   183,   299,   295,   270,   301,   490,   303,   220,
      49,   219,   230,   239,   391,   220,    51,   230,   116,   240,
     360,    51,    51,   243,    83,   319,   320,   322,    84,    78,
     308,   309,   271,    49,   374,    49,   239,  -191,   221,   131,
     232,   375,   309,   309,    51,   133,    51,   205,   206,   393,
     484,    48,   442,   203,   204,   175,   176,   173,   150,   129,
     177,   383,   277,   174,   178,   373,   129,   219,   286,   149,
      88,   220,   378,   116,   258,   418,   116,   116,   116,   116,
     464,   419,   300,   146,   305,   542,   465,   152,    85,   272,
     151,   543,   314,   154,     9,    10,    11,   466,   170,   116,
     116,   116,   116,   116,   116,   116,   116,   116,   116,   116,
     116,   116,   116,   116,   116,   116,   116,   175,   176,   359,
     171,   291,   177,   291,   270,   207,   208,    77,   220,   545,
     232,   201,   202,   430,    32,   546,   184,   435,   306,   474,
     116,   476,   362,    51,   172,   455,   363,   116,   185,   175,
     176,   190,   191,   192,   177,   211,   448,   544,   178,   209,
     210,   175,   176,   460,   212,    78,   177,    66,    67,   152,
     178,   213,    78,   214,    71,    72,    73,   401,    32,   402,
     436,   437,   415,   309,   444,   129,   524,   309,   217,   422,
     473,   462,   518,   538,   539,   225,   129,   480,   226,   143,
     175,   176,   470,   541,   539,   177,   227,   116,   432,   178,
    -239,   116,   555,   309,   274,   443,   193,   158,   293,   294,
     194,   275,   195,   196,   175,   176,   564,   309,   276,   177,
     131,   131,   310,   178,   523,   279,   133,   133,   438,   331,
     333,   335,   337,   282,   535,   175,   176,   553,   243,   311,
     177,   577,   309,   317,   178,   447,   509,   152,   318,   453,
     327,   329,   459,   501,   502,    78,   116,   364,   232,   152,
     518,   175,   176,   518,   580,   309,   177,   116,   141,   143,
     178,   376,   520,   521,   557,   582,   309,   339,   341,   143,
    -286,   561,   563,    92,   379,    93,    94,    95,    96,   380,
      97,    98,    99,   483,   100,   101,   175,   176,   287,   288,
     382,   177,   386,   488,   387,   178,   388,   396,   152,   397,
     400,   416,   420,   417,   423,   177,   424,   440,   232,   425,
     421,   426,   449,   232,   428,   556,   500,   558,   441,   445,
     446,   450,   131,   461,   116,   116,   463,   504,   133,   471,
     505,   472,   475,   158,   485,   508,   477,   156,   487,   514,
     489,   503,   102,   232,   103,   575,   576,   429,   104,   312,
     578,   579,   434,   581,   506,   583,   507,   510,   105,   106,
     107,   108,   109,   110,   511,   515,   516,   525,   309,   526,
     554,   586,   534,   587,   536,   537,   143,   540,   547,   589,
     548,   549,   552,  -297,   158,   559,   584,   570,   550,   158,
     571,   551,    92,   573,    93,    94,    95,    96,   232,    97,
      98,    99,   574,   100,   101,   585,   496,   568,   343,   350,
     116,   116,   345,   348,   236,   565,   566,   280,   469,   569,
     229,   232,   399,   486,   232,   468,   395,    75,     0,     0,
     -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,  -108,  -108,
    -108,  -108,  -108,  -108,  -108,  -108,  -108,  -108,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   102,     0,   103,     0,     0,     0,   104,     0,     0,
       0,   365,     0,   366,   231,   517,   158,   105,   106,   107,
     108,   109,   110,     0,     0,   140,     0,     0,     0,     0,
       0,     2,     0,   -54,   -54,   -54,     0,   -54,     0,   143,
     -54,   -54,   -54,   -54,   -54,   -54,     0,     0,   -54,   -54,
     -54,   -54,   -54,   -54,   -54,  -108,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,  -156,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    26,     0,    27,     0,    28,    29,    30,
       0,     0,  -146,     0,     0,     0,     0,    81,   527,  -146,
      93,    94,    95,    96,     2,    97,    98,    99,     0,   100,
     101,     0,     0,   141,   403,   404,   405,   406,   407,   408,
     409,   410,   411,   412,     0,     0,     0,     0,     0,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,  -156,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    47,    26,   102,    27,   103,
      28,     2,    30,   104,     0,     0,     0,     0,     0,     0,
       0,     0,   528,   105,   106,   529,   530,   109,   110,     0,
     177,   413,     0,     0,   178,     0,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,  -156,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    47,    26,     0,    27,     0,    28,     2,    30,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    50,
       0,     0,   175,   176,     0,     0,     0,   177,     0,     0,
       0,   178,     0,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,  -156,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      26,     0,    27,     0,    28,   244,    30,   245,    94,    95,
      96,     2,    97,    98,    99,     0,   100,   101,     0,   175,
     176,     0,     0,     0,   177,     0,     0,     0,   178,     0,
       0,     0,     0,     0,     0,     0,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,  -156,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
       0,   246,   247,   248,     0,   249,  -306,   250,   251,   252,
     253,   254,   255,    26,   102,    27,   103,    28,    29,    30,
     104,     0,     0,     0,     0,     0,     0,    81,   394,   256,
     105,   106,   107,   108,   109,   110,   244,     0,   245,    94,
      95,    96,     2,    97,    98,    99,     0,   100,   101,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,  -156,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,     0,   246,   247,   248,     0,   249,  -306,   250,   251,
     252,   253,   254,   255,    26,   102,    27,   103,    28,    29,
      30,   104,     0,     0,     0,     0,     0,     0,    81,     0,
     256,   105,   106,   107,   108,   109,   110,   479,     0,    93,
      94,    95,    96,     2,    97,    98,    99,     0,   100,   101,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
    -156,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    92,     0,    93,    94,    95,    96,     2,    97,
      98,    99,     0,   100,   101,    26,   102,    27,   103,    28,
      29,    30,   104,     0,     0,     0,     0,     0,     0,     0,
       0,   256,   105,   106,   107,   108,   109,   110,     0,     9,
      10,    11,    12,    13,    14,  -156,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,   186,     0,    93,
      94,    95,    96,     2,    97,    98,    99,     0,   100,   101,
       0,   102,    27,   103,     0,     0,     0,   104,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   105,   106,   107,
     108,   109,   110,     0,     9,    10,    11,    12,    13,    14,
    -156,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,   298,     0,    93,    94,    95,    96,     2,    97,
      98,    99,     0,   100,   101,     0,   102,    27,   103,     0,
       0,     0,   104,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   105,   106,   107,   108,   109,   110,     0,     9,
      10,    11,    12,    13,    14,  -156,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    92,     0,   245,
      94,    95,    96,     0,    97,    98,    99,     0,   100,   101,
       0,   102,    27,   103,     0,     0,     0,   104,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   105,   106,   107,
     108,   109,   110,     0,     0,     0,    92,     0,    93,    94,
      95,    96,     0,    97,    98,    99,     0,   100,   101,     0,
       0,     0,     0,   246,   247,   248,     0,   249,  -306,   250,
     251,   252,   253,   254,   255,     0,   102,     0,   103,   163,
       0,     0,   104,     9,    10,    11,     0,     0,     0,    81,
       0,   256,   105,   106,   107,   108,   109,   110,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   102,    77,   103,     0,     0,
       0,   104,     0,     0,     0,     0,   164,     0,     0,     0,
       0,   105,   165,   107,   108,   109,   110,    92,     0,    93,
      94,    95,    96,     0,    97,    98,    99,     0,   100,   101,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      92,     0,    93,    94,    95,    96,     0,    97,    98,    99,
     283,   100,   101,     0,     9,    10,    11,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   356,     0,     0,     0,     9,    10,    11,
       0,     0,     0,     0,     0,     0,   102,    77,   103,     0,
       0,     0,   104,     0,     0,     0,     0,   284,     0,     0,
       0,     0,   105,   285,   107,   108,   109,   110,     0,   102,
      77,   103,     0,     0,     0,   104,     0,     0,     0,     0,
     357,     0,     0,     0,     0,   105,   358,   107,   108,   109,
     110,    92,     0,    93,    94,    95,    96,     0,    97,    98,
      99,     0,   100,   101,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    92,     0,    93,    94,    95,    96,
       0,    97,    98,    99,   451,   100,   101,     0,     9,    10,
      11,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   456,     0,     0,
       0,     9,    10,    11,     0,     0,     0,     0,     0,     0,
     102,    77,   103,     0,     0,     0,   104,     0,     0,     0,
       0,   452,     0,     0,     0,     0,   105,   106,   107,   108,
     109,   110,     0,   102,    77,   103,     0,     0,     0,   104,
       0,     0,     0,     0,   457,     0,     0,     0,     0,   105,
     458,   107,   108,   109,   110,    92,     0,    93,    94,    95,
      96,     0,    97,    98,    99,     0,   100,   101,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    92,     0,
      93,    94,    95,    96,     0,    97,    98,    99,   512,   100,
     101,     0,     9,    10,    11,     0,     0,     0,     0,     0,
      92,     0,    93,    94,    95,    96,     0,    97,    98,    99,
       0,   100,   101,     0,     0,     9,    10,    11,     0,     0,
       0,     0,     0,     0,   102,    77,   103,     0,     0,     0,
     104,     0,     0,     0,     0,   513,     0,     0,     0,     0,
     105,   106,   107,   108,   109,   110,     0,   102,    77,   103,
       0,     0,     0,   104,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   105,   106,   107,   108,   109,   110,   102,
       0,   103,     0,     0,     0,   104,     0,     0,     0,   365,
       0,   366,   231,   572,     0,   105,   106,   107,   108,   109,
     110,    92,     0,    93,    94,    95,    96,     0,    97,    98,
      99,     0,   100,   101,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   498,     0,    93,    94,    95,    96,     0,
      97,    98,    99,     0,   100,   101,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    92,     0,    93,    94,    95,
      96,     0,    97,    98,    99,     0,   100,   101,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     102,     0,   103,     0,     0,     0,   104,     0,     0,     0,
     365,     0,   366,   231,     0,     0,   105,   106,   107,   108,
     109,   110,   102,     0,   103,     0,     0,     0,   104,     0,
       0,     0,   365,     0,   366,   231,     0,     0,   105,   106,
     107,   108,   109,   110,   102,     0,   103,     0,     0,     0,
     104,     0,     0,     0,     0,     0,     0,   231,     0,     0,
     105,   106,   107,   108,   109,   110,   389,     0,    93,    94,
      95,    96,     0,    97,    98,    99,     0,   100,   101,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   433,     0,
      93,    94,    95,    96,     0,    97,    98,    99,     0,   100,
     101,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      92,     0,    93,    94,    95,    96,     0,    97,    98,    99,
       0,   100,   101,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   102,     0,   103,     0,     0,
       0,   104,     0,     0,     0,     0,     0,     0,     0,     0,
     390,   105,   106,   107,   108,   109,   110,   102,     0,   103,
       0,     0,     0,   104,     0,     0,     0,     0,     0,     0,
     434,     0,     0,   105,   106,   107,   108,   109,   110,   102,
       0,   103,     0,     0,     0,   104,     0,     0,     0,     0,
       0,     0,     0,     0,   256,   105,   106,   107,   108,   109,
     110,    92,     0,    93,    94,    95,    96,     0,    97,    98,
      99,     0,   100,   101,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    92,     0,    93,    94,    95,    96,     0,
      97,    98,    99,     0,   100,   101,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    92,     0,    93,    94,    95,
      96,     0,    97,    98,    99,     0,   100,   101,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     102,     0,   103,     0,     0,     0,   104,   560,     0,     0,
       0,     0,     0,     0,     0,     0,   105,   106,   107,   108,
     109,   110,   102,     0,   103,     0,     0,     0,   104,   562,
       0,     0,     0,     0,     0,     0,     0,     0,   105,   106,
     107,   108,   109,   110,   102,     0,   103,     0,     0,     0,
     104,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     105,   106,   107,   108,   109,   110,   292,     0,    93,    94,
      95,    96,     0,    97,    98,    99,     0,   100,   101,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   296,     0,
      93,    94,    95,    96,     0,    97,    98,    99,     0,   100,
     101,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     304,     0,    93,    94,    95,    96,     0,    97,    98,    99,
       0,   100,   101,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   102,     0,   103,     0,     0,
       0,   104,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   105,   106,   107,   108,   109,   110,   102,     0,   103,
       0,     0,     0,   104,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   105,   106,   107,   108,   109,   110,   102,
       0,   103,     0,     0,     0,   104,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   105,   106,   107,   108,   109,
     110,   315,     0,    93,    94,    95,    96,     0,    97,    98,
      99,     0,   100,   101,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   321,     0,    93,    94,    95,    96,     0,
      97,    98,    99,     0,   100,   101,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   323,     0,    93,    94,    95,
      96,     0,    97,    98,    99,     0,   100,   101,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     102,     0,   103,     0,     0,     0,   104,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   105,   106,   107,   108,
     109,   110,   102,     0,   103,     0,     0,     0,   104,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   105,   106,
     107,   108,   109,   110,   102,     0,   103,     0,     0,     0,
     104,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     105,   106,   107,   108,   109,   110,   325,     0,    93,    94,
      95,    96,     0,    97,    98,    99,     0,   100,   101,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   328,     0,
      93,    94,    95,    96,     0,    97,    98,    99,     0,   100,
     101,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     330,     0,    93,    94,    95,    96,     0,    97,    98,    99,
       0,   100,   101,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   102,     0,   103,     0,     0,
       0,   104,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   105,   106,   107,   108,   109,   110,   102,     0,   103,
       0,     0,     0,   104,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   105,   106,   107,   108,   109,   110,   102,
       0,   103,     0,     0,     0,   104,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   105,   106,   107,   108,   109,
     110,   332,     0,    93,    94,    95,    96,     0,    97,    98,
      99,     0,   100,   101,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   334,     0,    93,    94,    95,    96,     0,
      97,    98,    99,     0,   100,   101,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   336,     0,    93,    94,    95,
      96,     0,    97,    98,    99,     0,   100,   101,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     102,     0,   103,     0,     0,     0,   104,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   105,   106,   107,   108,
     109,   110,   102,     0,   103,     0,     0,     0,   104,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   105,   106,
     107,   108,   109,   110,   102,     0,   103,     0,     0,     0,
     104,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     105,   106,   107,   108,   109,   110,   338,     0,    93,    94,
      95,    96,     0,    97,    98,    99,     0,   100,   101,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   340,     0,
      93,    94,    95,    96,     0,    97,    98,    99,     0,   100,
     101,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     342,     0,    93,    94,    95,    96,     0,    97,    98,    99,
       0,   100,   101,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   102,     0,   103,     0,     0,
       0,   104,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   105,   106,   107,   108,   109,   110,   102,     0,   103,
       0,     0,     0,   104,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   105,   106,   107,   108,   109,   110,   102,
       0,   103,     0,     0,     0,   104,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   105,   106,   107,   108,   109,
     110,   344,     0,    93,    94,    95,    96,     0,    97,    98,
      99,     0,   100,   101,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   347,     0,    93,    94,    95,    96,     0,
      97,    98,    99,     0,   100,   101,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   349,     0,    93,    94,    95,
      96,     0,    97,    98,    99,     0,   100,   101,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     102,     0,   103,     0,     0,     0,   104,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   105,   106,   107,   108,
     109,   110,   102,     0,   103,     0,     0,     0,   104,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   105,   106,
     107,   108,   109,   110,   102,     0,   103,     0,     0,     0,
     104,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     105,   106,   107,   108,   109,   110,   351,     0,    93,    94,
      95,    96,     0,    97,    98,    99,     0,   100,   101,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   431,     0,
      93,    94,    95,    96,     0,    97,    98,    99,     0,   100,
     101,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    93,    94,    95,    96,     0,    97,    98,    99,
       0,   100,   101,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   102,     0,   103,     0,     0,
       0,   104,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   105,   106,   107,   108,   109,   110,   102,     0,   103,
       0,     0,     0,   104,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   105,   106,   107,   108,   109,   110,   102,
       0,   103,     0,     0,     0,   104,     0,     0,     0,     0,
       0,     0,   429,     0,     0,   105,   106,   107,   108,   109,
     110,    93,    94,    95,    96,     0,    97,    98,    99,     0,
     100,   101,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    93,    94,    95,    96,     0,    97,    98,
      99,     0,   100,   101,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    93,    94,    95,    96,     0,
      97,    98,    99,     0,   100,   101,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   102,     0,
     103,     0,     0,     0,   179,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   105,   106,   107,   108,   109,   110,
     102,     0,   103,     0,     0,     0,   182,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   105,   106,   107,   108,
     109,   110,   102,    47,   103,  -132,     0,     0,   104,     2,
       0,     0,     0,     0,     0,     0,     0,     0,   105,   106,
     107,   108,   109,   110,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,  -156,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,     0,    47,
       0,  -134,     0,     0,     0,     2,     0,     0,     0,     0,
       0,    26,     0,    27,     0,    28,     0,    30,  -132,  -132,
    -132,     0,  -132,     0,     0,     0,     0,  -132,     0,  -132,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,  -156,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,     0,    47,     0,  -136,     0,     0,
       0,     2,     0,     0,     0,     0,     0,    26,     0,    27,
       0,    28,     0,    30,  -134,  -134,  -134,     0,  -134,     0,
       0,     0,     0,  -134,     0,  -134,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,  -156,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
       0,    47,     0,  -138,     0,     0,     0,     2,     0,     0,
       0,     0,     0,    26,     0,    27,     0,    28,     0,    30,
    -136,  -136,  -136,     0,  -136,     0,     0,     0,     0,  -136,
       0,  -136,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,  -156,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,     0,    47,     0,  -140,
       0,     0,     0,     2,     0,     0,     0,     0,     0,    26,
       0,    27,     0,    28,     0,    30,  -138,  -138,  -138,     0,
    -138,     0,     0,     0,     0,  -138,     0,  -138,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
    -156,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,     0,    47,     0,    48,     0,     0,     0,     2,
       0,     0,     0,     0,     0,    26,     0,    27,     0,    28,
       0,    30,  -140,  -140,  -140,     0,  -140,     0,     0,     0,
       0,  -140,     0,  -140,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,  -156,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,     0,    47,
       0,    48,     0,     0,     0,     2,     0,     0,     0,     0,
       0,    26,     0,    27,     0,    28,     0,    30,   270,   353,
       0,     0,   220,     0,     0,     0,     0,     0,     0,    51,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,  -156,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,     0,    47,     0,     0,     0,     0,
       0,     2,     0,     0,     0,     0,     0,    26,     0,    27,
       0,    28,     0,    30,    49,     0,     0,     0,     0,     0,
       0,     0,     0,    50,     0,    51,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,  -156,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
       0,    47,     0,     0,     0,     0,     0,     2,     0,     0,
       0,     0,     0,    26,     0,    27,     0,    28,     0,    30,
     219,   353,     0,     0,   220,     0,     0,     0,     0,     0,
       0,    51,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,  -156,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,   140,     0,     0,     0,
       0,     0,     2,     0,     0,     0,     0,     0,     0,    26,
       0,    27,     0,    28,     0,    30,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    50,     0,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,  -156,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,     2,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    26,     0,    27,     0,    28,    29,
      30,     0,     0,     0,     0,     0,     0,     0,    81,     0,
       0,     0,     9,    10,    11,    12,    13,    14,     0,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
       2,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    27,     0,     0,    29,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   237,     0,
       0,     9,    10,    11,    12,    13,    14,     0,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    47,
       0,   156,     0,     0,     0,     2,     0,     0,     0,     0,
       0,     0,     0,     0,    27,     0,     0,    29,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   372,     0,     0,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,  -156,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    47,     0,     0,     0,     0,     0,
       2,     0,     0,     0,     0,     0,     0,    26,     0,    27,
       0,    28,     0,    30,     0,   157,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,  -156,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    74,
       1,     0,     0,     0,     0,     0,     2,     0,     0,     0,
       0,     0,    26,     0,    27,     0,    28,     0,    30,     0,
     454,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,  -156,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,     1,     0,     0,     0,     0,
       0,     2,     0,     0,     0,     0,     0,     0,    26,     0,
      27,     0,    28,    29,    30,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,  -156,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      47,     0,     0,     0,     0,     0,     2,     0,     0,     0,
       0,     0,     0,    26,     0,    27,     0,    28,    29,    30,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,  -156,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,   398,    47,     0,     0,     0,
       0,     0,     2,     0,     0,     0,     0,     0,    26,     0,
      27,     0,    28,     0,    30,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,  -156,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,   491,     0,     0,     0,     0,     0,     2,     0,     0,
       0,     0,     0,     0,    26,     0,    27,     0,    28,     0,
      30,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     9,    10,
      11,    12,    13,    14,  -156,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,   567,     0,   492,     0,
       0,     0,     2,     0,     0,     0,     0,     0,     0,     0,
       0,    27,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     9,    10,    11,    12,    13,    14,  -156,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,   302,     0,   492,     0,     0,     0,     2,     0,     0,
       0,     0,     0,     0,     0,     0,    27,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     2,     0,     0,     0,     9,    10,
      11,    12,    13,    14,  -156,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     9,    10,    11,    12,    13,
      14,    27,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,     2,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    27,     0,
       0,    29,     0,     0,     0,     0,     0,     0,     0,     0,
       2,     0,     0,     0,     9,    10,    11,    12,    13,    14,
    -156,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     9,    10,    11,    12,    13,    14,    27,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    27
};

static const yytype_int16 yycheck[] =
{
      51,    58,    59,   104,   175,   176,    83,    58,    59,   141,
      51,    55,     1,    70,     3,     1,   173,    65,    58,    70,
      60,   147,    58,    59,    84,   178,    60,    44,   221,    80,
     201,   202,    70,    84,     3,   464,     1,    53,   132,    80,
     384,   385,    85,    70,    21,     3,    32,   104,    78,    65,
      76,     3,    76,   104,     3,     1,    87,     3,    88,    89,
     213,    92,    93,    93,   158,   429,     3,    97,   104,    80,
     434,    82,     3,    76,   131,    83,   133,     3,   179,   272,
     131,   182,   133,    78,   117,    78,    81,    76,    99,   146,
     147,   132,    85,   194,     1,   146,   147,   145,    87,    58,
       3,    60,     3,   163,   131,     1,   133,   155,   146,   147,
     236,    76,   163,   542,    83,   216,   545,   158,   169,   146,
     147,    98,   179,    84,    76,   182,    84,   184,   179,   145,
      76,   182,   172,   184,    83,   479,   480,   481,   172,    85,
      99,    87,   101,   179,   177,    76,   182,    84,   184,    80,
      76,    76,   138,    79,   255,    80,    87,   143,   117,    85,
     220,    87,    87,   149,    76,   198,   199,   200,    80,   220,
      77,    78,   158,    76,    78,    76,    79,    83,   219,   236,
     141,    85,    78,    78,    87,   236,    87,    16,    17,    85,
      85,     3,    85,    14,    15,    88,    89,    78,   236,   239,
      93,   250,   163,    84,    97,   239,   246,    76,   169,   236,
       3,    80,   246,   172,   262,    78,   175,   176,   177,   178,
      78,    84,   181,    83,   185,    78,    84,   278,   272,   270,
      77,    84,   193,    84,    38,    39,    40,   369,    83,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,    88,    89,   220,
      83,   418,    93,   420,    76,    94,    95,    71,    80,    78,
     231,    88,    89,   306,     0,    84,    76,   310,    77,   380,
     239,   382,    76,    87,    99,   362,    80,   246,    76,    88,
      89,    11,    12,    13,    93,    86,   356,    84,    97,    18,
      19,    88,    89,   363,    96,   356,    93,    33,    34,   360,
      97,    97,   363,    20,    40,    41,    42,   278,    44,   280,
      77,    78,   283,    78,    79,   365,    77,    78,    77,    77,
     379,   365,   464,    77,    78,    77,   376,   385,    77,    65,
      88,    89,   376,    77,    78,    93,    78,   306,   309,    97,
      78,   310,    77,    78,    77,    79,    76,    83,   529,   530,
      80,    78,    82,    83,    88,    89,    77,    78,    77,    93,
     427,   428,    77,    97,   475,    81,   427,   428,    81,   205,
     206,   207,   208,    81,   485,    88,    89,   519,   374,     3,
      93,    77,    78,     3,    97,   356,   456,   448,     1,   360,
     203,   204,   363,   443,   444,   456,   365,     6,   369,   460,
     542,    88,    89,   545,    77,    78,    93,   376,    99,   145,
      97,    79,   471,   472,   525,    77,    78,   209,   210,   155,
      79,   532,   533,     1,    79,     3,     4,     5,     6,    76,
       8,     9,    10,    85,    12,    13,    88,    89,   170,   171,
      76,    93,     3,   414,    85,    97,    85,    62,   509,    78,
      81,    81,    78,    81,    77,    93,    77,    84,   429,    77,
      85,    77,    81,   434,    78,   524,   437,   526,    85,    77,
      77,    81,   539,    77,   443,   444,     3,   448,   539,    79,
     451,    79,    76,   219,    76,   456,    62,     3,    81,   460,
      81,    81,    70,   464,    72,   554,   555,    83,    76,    77,
     559,   560,    83,   562,    81,   564,    77,    81,    86,    87,
      88,    89,    90,    91,    81,    85,    81,    76,    78,    77,
      77,   580,    85,   582,    79,    79,   262,    79,    81,   588,
      81,    81,    81,    77,   270,    77,    60,    85,   509,   275,
      85,   512,     1,    81,     3,     4,     5,     6,   519,     8,
       9,    10,    81,    12,    13,    85,   428,   539,   211,   215,
     529,   530,   212,   214,   146,   536,   537,     1,   374,   540,
     138,   542,   275,   397,   545,   370,   262,    44,    -1,    -1,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    70,    -1,    72,    -1,    -1,    -1,    76,    -1,    -1,
      -1,    80,    -1,    82,    83,    84,   362,    86,    87,    88,
      89,    90,    91,    -1,    -1,     1,    -1,    -1,    -1,    -1,
      -1,     7,    -1,    77,    78,    79,    -1,    81,    -1,   385,
      84,    85,    86,    87,    88,    89,    -1,    -1,    92,    93,
      94,    95,    96,    97,    98,    99,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    69,    -1,    71,    -1,    73,    74,    75,
      -1,    -1,    78,    -1,    -1,    -1,    -1,    83,     1,    85,
       3,     4,     5,     6,     7,     8,     9,    10,    -1,    12,
      13,    -1,    -1,    99,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    -1,    -1,    -1,    -1,    -1,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     1,    69,    70,    71,    72,
      73,     7,    75,    76,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    85,    86,    87,    88,    89,    90,    91,    -1,
      93,    99,    -1,    -1,    97,    -1,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     1,    69,    -1,    71,    -1,    73,     7,    75,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,
      -1,    -1,    88,    89,    -1,    -1,    -1,    93,    -1,    -1,
      -1,    97,    -1,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      69,    -1,    71,    -1,    73,     1,    75,     3,     4,     5,
       6,     7,     8,     9,    10,    -1,    12,    13,    -1,    88,
      89,    -1,    -1,    -1,    93,    -1,    -1,    -1,    97,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      -1,    57,    58,    59,    -1,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    -1,    -1,    -1,    -1,    -1,    -1,    83,    84,    85,
      86,    87,    88,    89,    90,    91,     1,    -1,     3,     4,
       5,     6,     7,     8,     9,    10,    -1,    12,    13,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    -1,    57,    58,    59,    -1,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    -1,    -1,    -1,    -1,    -1,    -1,    83,    -1,
      85,    86,    87,    88,    89,    90,    91,     1,    -1,     3,
       4,     5,     6,     7,     8,     9,    10,    -1,    12,    13,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,     1,    -1,     3,     4,     5,     6,     7,     8,
       9,    10,    -1,    12,    13,    69,    70,    71,    72,    73,
      74,    75,    76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    85,    86,    87,    88,    89,    90,    91,    -1,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,     1,    -1,     3,
       4,     5,     6,     7,     8,     9,    10,    -1,    12,    13,
      -1,    70,    71,    72,    -1,    -1,    -1,    76,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,    87,    88,
      89,    90,    91,    -1,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,     1,    -1,     3,     4,     5,     6,     7,     8,
       9,    10,    -1,    12,    13,    -1,    70,    71,    72,    -1,
      -1,    -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    86,    87,    88,    89,    90,    91,    -1,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,     1,    -1,     3,
       4,     5,     6,    -1,     8,     9,    10,    -1,    12,    13,
      -1,    70,    71,    72,    -1,    -1,    -1,    76,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,    87,    88,
      89,    90,    91,    -1,    -1,    -1,     1,    -1,     3,     4,
       5,     6,    -1,     8,     9,    10,    -1,    12,    13,    -1,
      -1,    -1,    -1,    57,    58,    59,    -1,    61,    62,    63,
      64,    65,    66,    67,    68,    -1,    70,    -1,    72,    34,
      -1,    -1,    76,    38,    39,    40,    -1,    -1,    -1,    83,
      -1,    85,    86,    87,    88,    89,    90,    91,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    70,    71,    72,    -1,    -1,
      -1,    76,    -1,    -1,    -1,    -1,    81,    -1,    -1,    -1,
      -1,    86,    87,    88,    89,    90,    91,     1,    -1,     3,
       4,     5,     6,    -1,     8,     9,    10,    -1,    12,    13,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       1,    -1,     3,     4,     5,     6,    -1,     8,     9,    10,
      34,    12,    13,    -1,    38,    39,    40,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    34,    -1,    -1,    -1,    38,    39,    40,
      -1,    -1,    -1,    -1,    -1,    -1,    70,    71,    72,    -1,
      -1,    -1,    76,    -1,    -1,    -1,    -1,    81,    -1,    -1,
      -1,    -1,    86,    87,    88,    89,    90,    91,    -1,    70,
      71,    72,    -1,    -1,    -1,    76,    -1,    -1,    -1,    -1,
      81,    -1,    -1,    -1,    -1,    86,    87,    88,    89,    90,
      91,     1,    -1,     3,     4,     5,     6,    -1,     8,     9,
      10,    -1,    12,    13,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     1,    -1,     3,     4,     5,     6,
      -1,     8,     9,    10,    34,    12,    13,    -1,    38,    39,
      40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,    -1,    -1,
      -1,    38,    39,    40,    -1,    -1,    -1,    -1,    -1,    -1,
      70,    71,    72,    -1,    -1,    -1,    76,    -1,    -1,    -1,
      -1,    81,    -1,    -1,    -1,    -1,    86,    87,    88,    89,
      90,    91,    -1,    70,    71,    72,    -1,    -1,    -1,    76,
      -1,    -1,    -1,    -1,    81,    -1,    -1,    -1,    -1,    86,
      87,    88,    89,    90,    91,     1,    -1,     3,     4,     5,
       6,    -1,     8,     9,    10,    -1,    12,    13,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,
       3,     4,     5,     6,    -1,     8,     9,    10,    34,    12,
      13,    -1,    38,    39,    40,    -1,    -1,    -1,    -1,    -1,
       1,    -1,     3,     4,     5,     6,    -1,     8,     9,    10,
      -1,    12,    13,    -1,    -1,    38,    39,    40,    -1,    -1,
      -1,    -1,    -1,    -1,    70,    71,    72,    -1,    -1,    -1,
      76,    -1,    -1,    -1,    -1,    81,    -1,    -1,    -1,    -1,
      86,    87,    88,    89,    90,    91,    -1,    70,    71,    72,
      -1,    -1,    -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    86,    87,    88,    89,    90,    91,    70,
      -1,    72,    -1,    -1,    -1,    76,    -1,    -1,    -1,    80,
      -1,    82,    83,    84,    -1,    86,    87,    88,    89,    90,
      91,     1,    -1,     3,     4,     5,     6,    -1,     8,     9,
      10,    -1,    12,    13,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     1,    -1,     3,     4,     5,     6,    -1,
       8,     9,    10,    -1,    12,    13,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     1,    -1,     3,     4,     5,
       6,    -1,     8,     9,    10,    -1,    12,    13,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      70,    -1,    72,    -1,    -1,    -1,    76,    -1,    -1,    -1,
      80,    -1,    82,    83,    -1,    -1,    86,    87,    88,    89,
      90,    91,    70,    -1,    72,    -1,    -1,    -1,    76,    -1,
      -1,    -1,    80,    -1,    82,    83,    -1,    -1,    86,    87,
      88,    89,    90,    91,    70,    -1,    72,    -1,    -1,    -1,
      76,    -1,    -1,    -1,    -1,    -1,    -1,    83,    -1,    -1,
      86,    87,    88,    89,    90,    91,     1,    -1,     3,     4,
       5,     6,    -1,     8,     9,    10,    -1,    12,    13,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,
       3,     4,     5,     6,    -1,     8,     9,    10,    -1,    12,
      13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       1,    -1,     3,     4,     5,     6,    -1,     8,     9,    10,
      -1,    12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    70,    -1,    72,    -1,    -1,
      -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      85,    86,    87,    88,    89,    90,    91,    70,    -1,    72,
      -1,    -1,    -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,
      83,    -1,    -1,    86,    87,    88,    89,    90,    91,    70,
      -1,    72,    -1,    -1,    -1,    76,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    85,    86,    87,    88,    89,    90,
      91,     1,    -1,     3,     4,     5,     6,    -1,     8,     9,
      10,    -1,    12,    13,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     1,    -1,     3,     4,     5,     6,    -1,
       8,     9,    10,    -1,    12,    13,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     1,    -1,     3,     4,     5,
       6,    -1,     8,     9,    10,    -1,    12,    13,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      70,    -1,    72,    -1,    -1,    -1,    76,    77,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    86,    87,    88,    89,
      90,    91,    70,    -1,    72,    -1,    -1,    -1,    76,    77,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,    87,
      88,    89,    90,    91,    70,    -1,    72,    -1,    -1,    -1,
      76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      86,    87,    88,    89,    90,    91,     1,    -1,     3,     4,
       5,     6,    -1,     8,     9,    10,    -1,    12,    13,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,
       3,     4,     5,     6,    -1,     8,     9,    10,    -1,    12,
      13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       1,    -1,     3,     4,     5,     6,    -1,     8,     9,    10,
      -1,    12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    70,    -1,    72,    -1,    -1,
      -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    86,    87,    88,    89,    90,    91,    70,    -1,    72,
      -1,    -1,    -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    86,    87,    88,    89,    90,    91,    70,
      -1,    72,    -1,    -1,    -1,    76,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    86,    87,    88,    89,    90,
      91,     1,    -1,     3,     4,     5,     6,    -1,     8,     9,
      10,    -1,    12,    13,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     1,    -1,     3,     4,     5,     6,    -1,
       8,     9,    10,    -1,    12,    13,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     1,    -1,     3,     4,     5,
       6,    -1,     8,     9,    10,    -1,    12,    13,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      70,    -1,    72,    -1,    -1,    -1,    76,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    86,    87,    88,    89,
      90,    91,    70,    -1,    72,    -1,    -1,    -1,    76,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,    87,
      88,    89,    90,    91,    70,    -1,    72,    -1,    -1,    -1,
      76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      86,    87,    88,    89,    90,    91,     1,    -1,     3,     4,
       5,     6,    -1,     8,     9,    10,    -1,    12,    13,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,
       3,     4,     5,     6,    -1,     8,     9,    10,    -1,    12,
      13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       1,    -1,     3,     4,     5,     6,    -1,     8,     9,    10,
      -1,    12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    70,    -1,    72,    -1,    -1,
      -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    86,    87,    88,    89,    90,    91,    70,    -1,    72,
      -1,    -1,    -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    86,    87,    88,    89,    90,    91,    70,
      -1,    72,    -1,    -1,    -1,    76,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    86,    87,    88,    89,    90,
      91,     1,    -1,     3,     4,     5,     6,    -1,     8,     9,
      10,    -1,    12,    13,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     1,    -1,     3,     4,     5,     6,    -1,
       8,     9,    10,    -1,    12,    13,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     1,    -1,     3,     4,     5,
       6,    -1,     8,     9,    10,    -1,    12,    13,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      70,    -1,    72,    -1,    -1,    -1,    76,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    86,    87,    88,    89,
      90,    91,    70,    -1,    72,    -1,    -1,    -1,    76,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,    87,
      88,    89,    90,    91,    70,    -1,    72,    -1,    -1,    -1,
      76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      86,    87,    88,    89,    90,    91,     1,    -1,     3,     4,
       5,     6,    -1,     8,     9,    10,    -1,    12,    13,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,
       3,     4,     5,     6,    -1,     8,     9,    10,    -1,    12,
      13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       1,    -1,     3,     4,     5,     6,    -1,     8,     9,    10,
      -1,    12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    70,    -1,    72,    -1,    -1,
      -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    86,    87,    88,    89,    90,    91,    70,    -1,    72,
      -1,    -1,    -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    86,    87,    88,    89,    90,    91,    70,
      -1,    72,    -1,    -1,    -1,    76,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    86,    87,    88,    89,    90,
      91,     1,    -1,     3,     4,     5,     6,    -1,     8,     9,
      10,    -1,    12,    13,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     1,    -1,     3,     4,     5,     6,    -1,
       8,     9,    10,    -1,    12,    13,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     1,    -1,     3,     4,     5,
       6,    -1,     8,     9,    10,    -1,    12,    13,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      70,    -1,    72,    -1,    -1,    -1,    76,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    86,    87,    88,    89,
      90,    91,    70,    -1,    72,    -1,    -1,    -1,    76,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,    87,
      88,    89,    90,    91,    70,    -1,    72,    -1,    -1,    -1,
      76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      86,    87,    88,    89,    90,    91,     1,    -1,     3,     4,
       5,     6,    -1,     8,     9,    10,    -1,    12,    13,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,
       3,     4,     5,     6,    -1,     8,     9,    10,    -1,    12,
      13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,     6,    -1,     8,     9,    10,
      -1,    12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    70,    -1,    72,    -1,    -1,
      -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    86,    87,    88,    89,    90,    91,    70,    -1,    72,
      -1,    -1,    -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    86,    87,    88,    89,    90,    91,    70,
      -1,    72,    -1,    -1,    -1,    76,    -1,    -1,    -1,    -1,
      -1,    -1,    83,    -1,    -1,    86,    87,    88,    89,    90,
      91,     3,     4,     5,     6,    -1,     8,     9,    10,    -1,
      12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,     6,    -1,     8,     9,
      10,    -1,    12,    13,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,    -1,
       8,     9,    10,    -1,    12,    13,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,    -1,
      72,    -1,    -1,    -1,    76,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    86,    87,    88,    89,    90,    91,
      70,    -1,    72,    -1,    -1,    -1,    76,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    86,    87,    88,    89,
      90,    91,    70,     1,    72,     3,    -1,    -1,    76,     7,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,    87,
      88,    89,    90,    91,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    -1,     1,
      -1,     3,    -1,    -1,    -1,     7,    -1,    -1,    -1,    -1,
      -1,    69,    -1,    71,    -1,    73,    -1,    75,    76,    77,
      78,    -1,    80,    -1,    -1,    -1,    -1,    85,    -1,    87,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    -1,     1,    -1,     3,    -1,    -1,
      -1,     7,    -1,    -1,    -1,    -1,    -1,    69,    -1,    71,
      -1,    73,    -1,    75,    76,    77,    78,    -1,    80,    -1,
      -1,    -1,    -1,    85,    -1,    87,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      -1,     1,    -1,     3,    -1,    -1,    -1,     7,    -1,    -1,
      -1,    -1,    -1,    69,    -1,    71,    -1,    73,    -1,    75,
      76,    77,    78,    -1,    80,    -1,    -1,    -1,    -1,    85,
      -1,    87,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    -1,     1,    -1,     3,
      -1,    -1,    -1,     7,    -1,    -1,    -1,    -1,    -1,    69,
      -1,    71,    -1,    73,    -1,    75,    76,    77,    78,    -1,
      80,    -1,    -1,    -1,    -1,    85,    -1,    87,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    -1,     1,    -1,     3,    -1,    -1,    -1,     7,
      -1,    -1,    -1,    -1,    -1,    69,    -1,    71,    -1,    73,
      -1,    75,    76,    77,    78,    -1,    80,    -1,    -1,    -1,
      -1,    85,    -1,    87,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    -1,     1,
      -1,     3,    -1,    -1,    -1,     7,    -1,    -1,    -1,    -1,
      -1,    69,    -1,    71,    -1,    73,    -1,    75,    76,    77,
      -1,    -1,    80,    -1,    -1,    -1,    -1,    -1,    -1,    87,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    -1,     1,    -1,    -1,    -1,    -1,
      -1,     7,    -1,    -1,    -1,    -1,    -1,    69,    -1,    71,
      -1,    73,    -1,    75,    76,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    85,    -1,    87,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      -1,     1,    -1,    -1,    -1,    -1,    -1,     7,    -1,    -1,
      -1,    -1,    -1,    69,    -1,    71,    -1,    73,    -1,    75,
      76,    77,    -1,    -1,    80,    -1,    -1,    -1,    -1,    -1,
      -1,    87,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,     1,    -1,    -1,    -1,
      -1,    -1,     7,    -1,    -1,    -1,    -1,    -1,    -1,    69,
      -1,    71,    -1,    73,    -1,    75,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    85,    -1,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,     7,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    69,    -1,    71,    -1,    73,    74,
      75,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    83,    -1,
      -1,    -1,    38,    39,    40,    41,    42,    43,    -1,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
       7,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    71,    -1,    -1,    74,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    84,    -1,
      -1,    38,    39,    40,    41,    42,    43,    -1,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,     1,
      -1,     3,    -1,    -1,    -1,     7,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    71,    -1,    -1,    74,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    84,    -1,    -1,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,     1,    -1,    -1,    -1,    -1,    -1,
       7,    -1,    -1,    -1,    -1,    -1,    -1,    69,    -1,    71,
      -1,    73,    -1,    75,    -1,    77,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,     0,
       1,    -1,    -1,    -1,    -1,    -1,     7,    -1,    -1,    -1,
      -1,    -1,    69,    -1,    71,    -1,    73,    -1,    75,    -1,
      77,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,     1,    -1,    -1,    -1,    -1,
      -1,     7,    -1,    -1,    -1,    -1,    -1,    -1,    69,    -1,
      71,    -1,    73,    74,    75,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
       1,    -1,    -1,    -1,    -1,    -1,     7,    -1,    -1,    -1,
      -1,    -1,    -1,    69,    -1,    71,    -1,    73,    74,    75,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,     1,    -1,    -1,    -1,
      -1,    -1,     7,    -1,    -1,    -1,    -1,    -1,    69,    -1,
      71,    -1,    73,    -1,    75,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,     1,    -1,    -1,    -1,    -1,    -1,     7,    -1,    -1,
      -1,    -1,    -1,    -1,    69,    -1,    71,    -1,    73,    -1,
      75,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,     1,    -1,    58,    -1,
      -1,    -1,     7,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    71,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,     1,    -1,    58,    -1,    -1,    -1,     7,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    71,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     7,    -1,    -1,    -1,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    38,    39,    40,    41,    42,
      43,    71,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,     7,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,    -1,
      -1,    74,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       7,    -1,    -1,    -1,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    38,    39,    40,    41,    42,    43,    71,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    71
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     7,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    69,    71,    73,    74,
      75,   130,   131,   134,   135,   136,   137,   138,   144,   149,
     150,   151,   152,   170,   187,   188,   189,     1,     3,    76,
      85,    87,   131,   153,   154,   155,     3,    83,    76,    76,
      76,     1,    85,   132,   133,   153,   131,   131,    44,     3,
      83,   131,   131,   131,     0,   188,   153,    71,   150,   155,
     156,    83,   174,    76,    80,   154,   145,   146,     3,   103,
     147,   148,     1,     3,     4,     5,     6,     8,     9,    10,
      12,    13,    70,    72,    76,    86,    87,    88,    89,    90,
      91,   101,   102,   104,   105,   108,   110,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     129,   135,   141,   150,   162,   162,   129,    85,    78,    85,
       1,    99,   130,   131,   174,   190,    83,   139,   140,   141,
     170,    77,   150,   155,    84,   175,     3,    77,   131,   157,
     158,   159,   160,    34,    81,    87,   110,   124,   125,   156,
      83,    83,    99,    78,    84,    88,    89,    93,    97,    76,
     110,   111,    76,   110,    76,    76,     1,   125,   128,   162,
      11,    12,    13,    76,    80,    82,    83,   113,    87,    92,
      93,    88,    89,    14,    15,    16,    17,    94,    95,    18,
      19,    86,    96,    97,    20,    21,    98,    77,   141,    76,
      80,   155,   163,   164,   141,    77,    77,    78,     1,   133,
     153,    83,   125,   165,   130,   174,   139,    84,   140,    79,
      85,   142,   143,   153,     1,     3,    57,    58,    59,    61,
      63,    64,    65,    66,    67,    68,    85,   128,   130,   171,
     172,   174,   176,   177,   178,   179,   183,   184,   185,   161,
      76,   153,   155,   163,    77,    78,    77,   125,   156,    81,
       1,   126,    81,    34,    81,    87,   125,   147,   147,   129,
      84,   148,     1,   114,   114,   113,     1,   120,     1,   162,
     110,   162,     1,   162,     1,   125,    77,     1,    77,    78,
      77,     3,    77,   109,   125,     1,   128,     3,     1,   113,
     113,     1,   113,     1,   114,     1,   114,   115,     1,   115,
       1,   116,     1,   116,     1,   116,     1,   116,     1,   117,
       1,   117,     1,   118,     1,   119,   120,     1,   121,     1,
     122,     1,   128,    77,   157,   163,    34,    81,    87,   125,
     156,   164,    76,    80,     6,    80,    82,   165,   166,   167,
     168,   169,    84,   129,    78,    85,    79,   173,   129,    79,
      76,   180,    76,   171,     1,    76,     3,    85,    85,     1,
      85,   128,     1,    85,    84,   177,    62,    78,    56,   159,
      81,   125,   125,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    99,   127,   125,    81,    81,    78,    84,
      78,    85,    77,    77,    77,    77,    77,    78,    78,    83,
     113,     1,   125,     1,    83,   113,    77,    78,    81,    81,
      84,    85,    85,    79,    79,    77,    77,   125,   156,    81,
      81,    34,    81,   125,    77,   157,    34,    81,    87,   125,
     156,    77,   129,     3,    78,    84,   165,    99,   169,   143,
     129,    79,    79,   171,   128,    76,   128,    62,   178,     1,
     130,   178,   186,    85,    85,    76,   160,    81,   125,    81,
      84,     1,    58,   106,   107,   162,   106,   166,     1,   166,
     125,   124,   124,    81,   125,   125,    81,    77,   125,   156,
      81,    81,    34,    81,   125,    85,    81,    84,   165,   167,
     171,   171,   181,   128,    77,    76,    77,     1,    85,    88,
      89,   178,   178,   178,    85,   128,    79,    79,    77,    78,
      79,    77,    78,    84,    84,    78,    84,    81,    81,    81,
     125,   125,    81,   165,    77,    77,   171,   128,   171,    77,
      77,   128,    77,   128,    77,   125,   125,     1,   107,   125,
      85,    85,    84,    81,    81,   171,   171,    77,   171,   171,
      77,   171,    77,   171,    60,    85,   171,   171,   182,   171
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   100,   101,   101,   101,   101,   101,   101,   101,   102,
     102,   102,   103,   104,   104,   105,   105,   106,   106,   106,
     107,   107,   107,   108,   108,   108,   108,   108,   108,   108,
     108,   108,   108,   108,   108,   108,   108,   109,   109,   110,
     111,   110,   110,   110,   110,   110,   110,   110,   112,   112,
     112,   112,   112,   112,   113,   113,   113,   113,   114,   114,
     114,   114,   114,   114,   115,   115,   115,   115,   115,   115,
     115,   116,   116,   116,   116,   117,   117,   117,   117,   117,
     117,   117,   117,   117,   118,   118,   118,   118,   118,   119,
     119,   119,   120,   120,   120,   121,   121,   121,   122,   122,
     122,   123,   123,   123,   124,   124,   124,   125,   126,   125,
     125,   127,   127,   127,   127,   127,   127,   127,   127,   127,
     127,   127,   128,   128,   128,   129,   130,   130,   130,   130,
     130,   131,   131,   131,   131,   131,   131,   131,   131,   131,
     131,   131,   132,   132,   132,   133,   133,   134,   134,   134,
     134,   134,   134,   135,   135,   135,   136,   135,   135,   135,
     135,   135,   135,   135,   135,   135,   135,   135,   135,   135,
     137,   137,   137,   138,   138,   139,   139,   140,   140,   140,
     141,   141,   141,   141,   142,   142,   143,   143,   143,   144,
     144,   145,   144,   146,   144,   144,   147,   147,   148,   148,
     149,   150,   150,   150,   150,   151,   151,   152,   152,   153,
     153,   154,   154,   154,   154,   154,   154,   154,   154,   154,
     154,   154,   154,   154,   154,   155,   155,   155,   155,   156,
     156,   157,   157,   158,   158,   159,   159,   159,   160,   161,
     160,   162,   162,   163,   163,   163,   164,   164,   164,   164,
     164,   164,   164,   164,   164,   164,   164,   164,   164,   164,
     164,   164,   164,   164,   164,   164,   164,   165,   165,   165,
     166,   166,   166,   166,   167,   168,   168,   169,   169,   170,
     171,   171,   171,   171,   171,   171,   173,   172,   172,   172,
     174,   175,   174,   176,   176,   177,   177,   178,   178,   178,
     180,   179,   181,   182,   179,   179,   184,   183,   183,   183,
     183,   183,   183,   183,   183,   186,   185,   185,   185,   185,
     185,   185,   187,   187,   188,   188,   189,   189,   189,   190,
     190
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     3,     1,     3,     3,     1,
       1,     1,     1,     1,     1,     6,     6,     1,     3,     3,
       3,     3,     3,     1,     4,     3,     4,     3,     3,     2,
       2,     6,     7,     4,     4,     7,     7,     1,     3,     1,
       0,     3,     2,     2,     2,     4,     4,     4,     1,     1,
       1,     1,     1,     1,     1,     4,     4,     4,     1,     3,
       3,     3,     4,     4,     1,     3,     3,     3,     3,     3,
       3,     1,     3,     3,     3,     1,     3,     3,     3,     3,
       3,     3,     3,     3,     1,     3,     3,     3,     3,     1,
       3,     3,     1,     3,     3,     1,     3,     3,     1,     3,
       4,     1,     3,     3,     1,     5,     5,     1,     0,     4,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     3,     1,     2,     3,     1,     2,
       3,     2,     1,     2,     1,     2,     1,     2,     1,     2,
       1,     2,     1,     3,     3,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     0,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       4,     5,     2,     1,     1,     1,     2,     2,     3,     1,
       2,     1,     2,     1,     1,     3,     2,     3,     1,     4,
       5,     0,     6,     0,     7,     2,     1,     3,     3,     1,
       4,     1,     1,     1,     1,     1,     1,     4,     4,     2,
       1,     1,     3,     3,     4,     6,     5,     5,     6,     5,
       4,     4,     4,     3,     4,     3,     2,     2,     1,     1,
       2,     3,     1,     1,     3,     2,     2,     1,     1,     0,
       4,     2,     1,     2,     1,     1,     3,     2,     3,     5,
       4,     5,     4,     3,     3,     3,     4,     6,     5,     5,
       6,     4,     4,     2,     3,     3,     4,     3,     4,     1,
       2,     1,     4,     3,     2,     1,     2,     3,     2,     7,
       1,     1,     1,     1,     1,     1,     0,     4,     4,     3,
       2,     0,     4,     1,     2,     1,     1,     1,     2,     2,
       0,     6,     0,     0,     9,     5,     0,     6,     7,     6,
       7,     6,     7,     6,     5,     0,     4,     2,     2,     2,
       3,     3,     1,     2,     1,     1,     4,     3,     3,     1,
       2
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
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
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
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

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

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
      int yyn = yypact[*yyssp];
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
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
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
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
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
          yyp++;
          yyformat++;
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
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

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
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
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
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
        case 7:
#line 54 "bison.y" /* yacc.c:1646  */
    { yyerrok; printf("ERROR\n");}
#line 2538 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 55 "bison.y" /* yacc.c:1646  */
    { yyerrok; printf("ERROR\n");}
#line 2544 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 65 "bison.y" /* yacc.c:1646  */
    {save_id_stack();}
#line 2550 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 75 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 2556 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 81 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 2562 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 87 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 2568 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 95 "bison.y" /* yacc.c:1646  */
    {save_id_stack();}
#line 2574 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 96 "bison.y" /* yacc.c:1646  */
    {save_id_stack();}
#line 2580 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 101 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 2586 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 102 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 2592 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 103 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 2598 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 104 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 2604 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 114 "bison.y" /* yacc.c:1646  */
    {printf("INC_OP: %s\n", yytext);}
#line 2610 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 120 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 2616 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 135 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 2622 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 136 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 2628 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 144 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 2634 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 145 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 2640 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 152 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 2646 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 153 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 2652 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 154 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 2658 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 155 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 2664 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 162 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 2670 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 171 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 2676 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 172 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 2682 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 173 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 2688 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 174 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 2694 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 181 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 2700 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 182 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 2706 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 188 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 2712 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 194 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 2718 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 200 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 2724 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 206 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 2730 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 212 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 2736 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 218 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 2742 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 223 "bison.y" /* yacc.c:1646  */
    {ck_decl();}
#line 2748 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 224 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 2754 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 244 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 2760 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 253 "bison.y" /* yacc.c:1646  */
    {end_decl();}
#line 2766 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 255 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 2772 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 256 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 2778 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 270 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 2784 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 276 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 2790 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 299 "bison.y" /* yacc.c:1646  */
    {save_type_stack();}
#line 2796 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 317 "bison.y" /* yacc.c:1646  */
    {save_id_stack();}
#line 2802 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 357 "bison.y" /* yacc.c:1646  */
    {save_id_stack();}
#line 2808 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 358 "bison.y" /* yacc.c:1646  */
    {save_id_stack();}
#line 2814 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 359 "bison.y" /* yacc.c:1646  */
    {save_id_stack();}
#line 2820 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 399 "bison.y" /* yacc.c:1646  */
    {save_id_stack();}
#line 2826 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 238:
#line 445 "bison.y" /* yacc.c:1646  */
    {save_id_stack();}
#line 2832 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 239:
#line 446 "bison.y" /* yacc.c:1646  */
    {save_id_stack();}
#line 2838 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 278:
#line 508 "bison.y" /* yacc.c:1646  */
    {save_id_stack();}
#line 2844 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 286:
#line 525 "bison.y" /* yacc.c:1646  */
    {save_id_stack();}
#line 2850 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 291:
#line 532 "bison.y" /* yacc.c:1646  */
    {printf("Open Scope\n"); add_new_TS(); add_new_TS();}
#line 2856 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 292:
#line 532 "bison.y" /* yacc.c:1646  */
    {printf("Close Scope\n");}
#line 2862 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 299:
#line 548 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 2868 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 300:
#line 552 "bison.y" /* yacc.c:1646  */
    {printf("INICIO_IF\n");}
#line 2874 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 301:
#line 552 "bison.y" /* yacc.c:1646  */
    {printf("FIN_IF\n");}
#line 2880 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 302:
#line 553 "bison.y" /* yacc.c:1646  */
    {begin_if();}
#line 2886 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 303:
#line 553 "bison.y" /* yacc.c:1646  */
    {printf("INICIO_ELSE\n");}
#line 2892 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 304:
#line 553 "bison.y" /* yacc.c:1646  */
    {printf("FIN_IF\n");}
#line 2898 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 306:
#line 558 "bison.y" /* yacc.c:1646  */
    {printf("INICIO_WHILE\n");}
#line 2904 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 315:
#line 571 "bison.y" /* yacc.c:1646  */
    {save_id_stack();}
#line 2910 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 328:
#line 592 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 2916 "bison.tab.c" /* yacc.c:1646  */
    break;


#line 2920 "bison.tab.c" /* yacc.c:1646  */
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

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

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
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

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
  return yyresult;
}
#line 600 "bison.y" /* yacc.c:1906  */

#include <stdio.h>
#include <string.h>
extern int row;
extern int column;
char *messageOne;
char *messageTwo;
char *messageThree;

void writeInString(const char *s, int start, int end, int numLines){
	int MAXIDLEN = end - start;
	int i=0;
	char message[200], ch;
	while(start < end){
		ch = s[start];
		message[i] = ch;
		start++;
		i++;
	}
	message[i] = '\0';
	switch(numLines){
		case 1:
			messageOne =  malloc(MAXIDLEN);
			strcpy(messageOne, message);
			break;
		case 2:
			messageTwo = malloc(MAXIDLEN);
			strcpy(messageTwo, message);
			break;
		default:
			messageThree = malloc(MAXIDLEN);
			strcpy(messageThree, message);
	}
}

int messageAnalise(const char *s){
	int numLines = 0;
	int start = 0;
	int k=0;
	for(k; k < strlen(s); k++){
		if (s[k] == ',' && k < strlen(s)-1){
			if (s[k + 1] == ' '){
				numLines++;
				writeInString(s, start, k, numLines);
				start = k + 1;
			}
		}
	}
	numLines++;
	writeInString(s, start, k, numLines);
	numLines--;
	return numLines;
}

void lookLines(int lineError, int columnPar){
	char messageLine[MAX_LINE_PRINT];
	char messageRepresent[MAX_LINE_PRINT];
	for (int i=0; i < MAX_LINE_PRINT; i++){
		messageRepresent[i] ='\0';
	}
	int exactlyPlace = columnPar;
	int count;
	int tabs = 0;
	fseek(myfile, 0, SEEK_SET);
	int c;
	int countColumn = 0;
	int countLines = 1;
	while (countLines <= lineError){
		c = fgetc(myfile);
		if( feof(myfile)){
			break;
		}
		if (c == '\n'){
			countLines++;
		}else if (countLines == lineError && c != '\t'){
			messageLine[countColumn] = c;
			countColumn++;
		}else if (countLines == lineError && c == '\t'){
			tabs++;
		}
	}
	exactlyPlace = columnPar - (tabs * 4) + tabs;
	messageLine[countColumn] = '\0';
	countColumn = 0;
	while(countColumn < exactlyPlace){
		messageRepresent[countColumn] = ' ';
		countColumn++;
	}
	messageRepresent[countColumn - 1] = '^';
	messageRepresent[countColumn] = '\0';
	fprintf(stderr, " %s\n", messageLine);
	fprintf(stderr, " %s%s%s\n", COLOR_GREEN, messageRepresent, COLOR_RESET);
}

void yyerror(const char *s){
	fflush(stdout);
	counter++;
	int x = messageAnalise(s);
	int i;
	for (i = 0; yytext[i] != '\0'; i++){ }
	int columnPar = column - i;
	if (x == 0){
		fprintf(stderr, "%s%s:%d:%d: %s%s: %s'%s' \n", COLOR_BLUE, yyout, row, columnPar, COLOR_RED, messageOne, COLOR_YELLOW, yytext);
		free(messageOne);
	}else if(x == 1){
		fprintf(stderr, "%s%s:%d:%d: %s%s: %s'%s' %s%s \n", COLOR_BLUE, yyout, row, columnPar, COLOR_RED, messageOne, COLOR_YELLOW, yytext, COLOR_RESET, messageTwo);
		free(messageOne);
		free(messageTwo);
	}else if(x == 2){
		fprintf(stderr, "%s%s:%d:%d: %s%s: %s'%s' %s%s%s \n", COLOR_BLUE, yyout, row, columnPar, COLOR_RED, messageOne, COLOR_YELLOW, yytext, COLOR_RESET, messageTwo, messageThree);
		free(messageOne);
		free(messageTwo);
		free(messageThree);
	}else{
		fprintf(stderr, "No funcionó %s" , "l");
	}
	lookLines(row, columnPar);
}
