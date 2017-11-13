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
#define YYLAST   4502

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  100
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  86
/* YYNRULES -- Number of rules.  */
#define YYNRULES  325
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  581

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
     114,   115,   116,   117,   118,   119,   120,   124,   125,   126,
     127,   128,   129,   133,   134,   135,   136,   140,   141,   142,
     143,   144,   145,   149,   150,   151,   152,   153,   154,   155,
     159,   160,   161,   162,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   178,   179,   180,   181,   182,   186,   187,
     188,   192,   193,   194,   198,   199,   200,   204,   205,   206,
     210,   211,   212,   216,   217,   218,   222,   223,   224,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     242,   243,   244,   248,   252,   253,   254,   255,   256,   260,
     261,   262,   263,   264,   265,   266,   267,   268,   269,   270,
     274,   275,   276,   280,   281,   287,   288,   289,   290,   291,
     292,   296,   297,   298,   299,   299,   300,   301,   302,   303,
     304,   305,   306,   307,   308,   309,   310,   311,   315,   316,
     317,   321,   322,   326,   327,   331,   332,   333,   337,   338,
     339,   340,   344,   345,   349,   350,   351,   355,   356,   357,
     357,   358,   358,   359,   363,   364,   368,   369,   373,   377,
     378,   379,   380,   384,   385,   389,   390,   394,   395,   399,
     400,   401,   402,   403,   404,   405,   406,   407,   408,   409,
     410,   411,   412,   416,   417,   418,   419,   423,   424,   429,
     430,   434,   435,   439,   440,   441,   445,   446,   446,   450,
     451,   455,   456,   457,   461,   462,   463,   464,   465,   466,
     467,   468,   469,   470,   471,   472,   473,   474,   475,   476,
     477,   478,   479,   480,   481,   485,   486,   487,   491,   492,
     493,   494,   498,   502,   503,   507,   508,   512,   516,   517,
     518,   519,   520,   521,   525,   525,   526,   527,   531,   532,
     532,   536,   537,   541,   542,   546,   547,   548,   552,   553,
     554,   558,   558,   559,   560,   561,   562,   563,   566,   567,
     571,   571,   572,   573,   574,   575,   576,   580,   581,   585,
     586,   590,   591,   592,   596,   597
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
  "unary_expression", "unary_operator", "cast_expression",
  "multiplicative_expression", "additive_expression", "shift_expression",
  "relational_expression", "equality_expression", "and_expression",
  "exclusive_or_expression", "inclusive_or_expression",
  "logical_and_expression", "logical_or_expression",
  "conditional_expression", "assignment_expression", "assignment_operator",
  "expression", "constant_expression", "declaration",
  "declaration_specifiers", "init_declarator_list", "init_declarator",
  "storage_class_specifier", "type_specifier", "$@1",
  "struct_or_union_specifier", "struct_or_union",
  "struct_declaration_list", "struct_declaration",
  "specifier_qualifier_list", "struct_declarator_list",
  "struct_declarator", "enum_specifier", "$@2", "$@3", "enumerator_list",
  "enumerator", "atomic_type_specifier", "type_qualifier",
  "function_specifier", "alignment_specifier", "declarator",
  "direct_declarator", "pointer", "type_qualifier_list",
  "parameter_type_list", "parameter_list", "parameter_declaration",
  "identifier_list", "$@4", "type_name", "abstract_declarator",
  "direct_abstract_declarator", "initializer", "initializer_list",
  "designation", "designator_list", "designator",
  "static_assert_declaration", "statement", "labeled_statement", "$@5",
  "compound_statement", "$@6", "block_item_list", "block_item",
  "expression_statement", "selection_statement", "iteration_statement",
  "$@7", "jump_statement", "$@8", "translation_unit",
  "external_declaration", "function_definition", "declaration_list", YY_NULLPTR
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

#define YYPACT_NINF -404

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-404)))

#define YYTABLE_NINF -302

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    4052,  3615,  -404,  -404,  -404,  -404,  -404,  -404,  -404,  -404,
    -404,  -404,  -404,  -404,  -404,  -404,  -404,  -404,  -404,  -404,
    -404,  -404,  -404,  -404,  -404,    23,   -48,   -39,  -404,     7,
    -404,  -404,    64,  3247,  3335,    76,  -404,    27,  -404,  -404,
    3391,  3447,  3503,  -404,  3997,  -404,  -404,  4163,  -404,    15,
    -404,   207,  -404,    71,   -31,    60,    73,   161,  1119,  4431,
    2183,    87,  -404,     0,  -404,   592,  -404,  -404,  -404,   133,
    4355,  -404,  -404,  -404,  -404,  -404,   184,  -404,  -404,  -404,
     207,   182,  -404,  3886,  1323,   -31,   159,   191,  -404,   183,
     -18,  -404,   -20,  -404,  -404,  -404,  -404,  -404,  -404,  3148,
    3170,  3170,   210,   223,  1174,  -404,  -404,  -404,  -404,  -404,
    -404,  -404,  -404,  -404,  -404,   257,  -404,  3259,  -404,   215,
     277,   364,   217,   362,   252,   197,   246,   330,    19,  -404,
     279,  4404,   143,  4404,   281,   294,   305,  -404,    38,  -404,
    3727,   322,  -404,    64,  -404,  3782,  4355,   520,  -404,   101,
    -404,  -404,  -404,  -404,  -404,   973,   312,  -404,    91,   311,
     315,  -404,   329,  1665,  -404,   335,   524,  -404,   347,  1414,
     161,   161,  2183,    45,  -404,  2205,  2205,  3259,  2227,  1229,
    -404,  1229,  -404,  -404,  4328,  2318,   174,  -404,   158,   346,
     435,  -404,  -404,  1913,  2340,   439,   443,  -404,  3259,  3259,
    2362,  2453,  2475,  2227,  2497,  2588,  2610,  2632,  2723,  2745,
    2767,  2858,  2880,  2227,  2902,  2993,  3015,  -404,  -404,  3671,
    1437,   138,  -404,   241,  -404,  -404,  -404,   450,  -404,  -404,
     366,  1800,  -404,  -404,  -404,  -404,  3831,  -404,  -404,  2183,
    -404,   165,  -404,   382,   742,   388,  2183,   403,   395,   410,
    1284,    16,   485,   405,   406,  1935,  -404,    41,  -404,  -404,
    -404,  -404,   882,  -404,  -404,  -404,  -404,   430,  -404,   415,
    3559,  -404,    59,  -404,  -404,  4107,  -404,   413,  1665,  -404,
    2183,  -404,  -404,  -404,  -404,  -404,  -404,  -404,  -404,  -404,
    -404,  -404,  2183,  -404,  2183,  -404,   414,   416,   105,   418,
    -404,  -404,  -404,   408,   215,   215,   422,   271,   197,   199,
     421,   426,   431,   432,   160,   433,  3126,  -404,  -404,  3037,
    1957,  -404,  -404,   308,  -404,   260,   178,  -404,   429,  -404,
    -404,   425,  -404,   408,   215,   408,   215,   277,   271,   277,
     271,   364,   271,   364,   271,   364,   271,   364,   271,   217,
     271,   217,   271,   362,   271,   252,   197,   348,   246,   -20,
     330,   216,   318,  -404,   437,   438,  1665,  -404,   436,   440,
    1528,   241,  3941,  1551,   441,  2183,   496,  -404,   195,   322,
     201,  -404,  -404,  -404,   108,  -404,  2183,   445,   447,  1284,
    2183,  2183,   454,  2048,  1064,  -404,  -404,  -404,   375,  -404,
     180,  -404,  -404,  -404,  -404,   444,   516,  -404,  -404,  -404,
     449,  -404,  -404,   452,  -404,  -404,   161,  -404,    69,  -404,
     448,   453,   453,  -404,  -404,  4218,  4218,  1800,  -404,   -20,
    -404,  -404,  1822,  -404,  -404,  2183,  -404,  -404,  -404,  -404,
    -404,  2183,  2183,  -404,  -404,   475,  1665,  -404,  -404,  2183,
    -404,   476,  -404,   458,  1665,  -404,   483,   495,  1642,   492,
     497,  -404,  1687,  -404,  -404,  -404,  -404,  -404,  -404,  1284,
    1284,  -404,   337,   342,   503,   504,   675,  2048,  2048,   498,
    -404,  -404,  2183,  -404,  -404,  -404,  -404,   501,   505,   344,
    -404,   506,   353,   206,   369,   258,  -404,  -404,  -404,  -404,
     507,   508,  -404,  -404,   509,  1665,  -404,  -404,  2183,  -404,
     511,  -404,  -404,  -404,  -404,   322,  -404,  -404,  1284,  1284,
    2183,  1284,   809,   510,  2205,  2205,   518,  2070,  2092,  -404,
     370,  2183,  2183,  -404,  4273,  2183,  -404,  1800,   512,   513,
    1778,  -404,  -404,  -404,  -404,   515,   519,  -404,  -404,   522,
    -404,   392,  -404,  1284,  1284,   396,  1284,   398,  1284,  -404,
    -404,   501,  -404,  -404,  -404,  -404,  -404,  -404,  -404,  1284,
     521,  -404,  -404,  1284,  -404,  1284,  -404,  -404,  -404,  -404,
    -404
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,   167,   145,   146,   147,   149,   150,   203,   199,
     200,   201,   161,   152,   153,   156,   159,   160,   157,   158,
     151,   162,   163,   171,   172,     0,     0,   202,   204,     0,
     148,   320,     0,     0,     0,     0,   165,     0,   166,   164,
       0,     0,     0,   126,     0,   317,   319,     0,   209,     0,
     127,   226,   139,     0,   208,     0,   193,     0,     0,   154,
       0,     0,   124,     0,   140,     0,   129,   131,   155,   170,
     154,   133,   135,   137,     1,   318,     0,   202,   227,   225,
     224,   289,   323,     0,     0,   207,     0,     0,    12,   197,
       0,   194,     0,     2,     9,    10,    13,    11,    14,     0,
       0,     0,     0,     0,     0,    47,    48,    49,    50,    51,
      52,    23,     3,     4,     6,    39,    53,     0,    57,    63,
      70,    74,    83,    88,    91,    94,    97,   100,   103,   123,
       0,   179,   240,   181,     0,     0,     0,   128,     0,   125,
       0,     0,   324,     0,   322,     0,   154,   154,   173,     0,
     177,   210,   228,   223,   288,     0,   236,   221,   235,     0,
     230,   231,     0,     0,   211,    48,     0,   106,     0,     0,
       0,     0,     0,     0,   187,     0,     0,     0,     0,     0,
      43,     0,    40,    41,     0,     0,     0,   120,     0,     0,
       0,    29,    30,     0,     0,     0,     0,    42,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   206,   178,     0,
       0,   242,   239,   243,   180,   205,   198,     0,   142,   141,
     144,     0,   267,   143,   325,   321,   154,   168,   174,     0,
     175,     0,   182,   186,     0,     2,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   295,     0,   293,   294,
     278,   279,     0,   291,   280,   281,   282,     0,   283,     0,
       0,   233,   242,   234,   220,     0,   222,     0,     0,   212,
       0,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   109,     0,   219,     0,   218,    48,     0,     0,     0,
     196,   188,   195,     0,    66,    67,     0,     0,    96,     0,
       0,     0,     0,     0,     0,     0,     7,     8,     5,     0,
       0,    28,    25,     0,    37,     0,     0,    27,     0,    58,
      59,     0,    60,    68,    64,    69,    65,    71,    73,    72,
      81,    77,    82,    78,    79,    75,    80,    76,    86,    84,
      87,    85,    90,    89,    93,    92,    95,     0,    98,   102,
     101,     0,     0,   261,     0,     0,     0,   245,    48,     0,
       0,   241,     0,     0,     0,     0,     0,   269,     0,     0,
       0,   273,   169,   184,     0,   176,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   310,   312,   313,     0,   314,
       0,   297,   296,   290,   292,     0,     0,   229,   232,   214,
       0,   108,   107,     0,   215,   217,     0,   190,     0,    61,
       7,    44,     0,    46,    45,     0,     0,     0,    55,   122,
     121,    56,     0,    54,    26,     0,    33,    24,    34,    62,
      99,     0,     0,   262,   244,     0,     0,   246,   252,     0,
     251,     0,   263,     0,     0,   253,    48,     0,     0,     0,
       0,   276,     0,   265,   268,   272,   274,   183,   185,     0,
       0,   287,     0,     0,     0,     0,     0,     0,     0,     0,
     316,   315,     0,   238,   213,   216,   192,     0,     0,     0,
      17,     0,     0,     0,     0,     0,    38,   105,   104,   248,
       0,     0,   250,   264,     0,     0,   254,   260,     0,   259,
       0,   277,   275,   266,   271,     0,   285,   286,     0,     0,
       0,     0,     0,   127,     0,     0,     0,     0,     0,   311,
       0,     0,     0,    16,     0,     0,    15,     0,     0,     0,
       0,    31,   247,   249,   256,     0,     0,   257,   270,   299,
     300,     0,   309,     0,     0,     0,     0,     0,     0,    22,
      21,    19,    18,    20,    35,    36,    32,   255,   258,     0,
       0,   308,   306,     0,   304,     0,   302,   298,   303,   307,
     305
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -404,  -404,  -404,  -404,  -404,  -404,   181,    52,  -404,  -404,
      -2,  -404,   -56,  -170,   222,   139,   269,   404,   402,  -156,
     434,   442,  -404,   -24,    -3,  -404,   -93,   -14,   -42,    10,
    -404,   514,  -404,   -57,  -404,  -404,  -404,   523,  -131,    93,
    -404,   265,  -404,  -404,  -404,   310,  -164,  -404,   -51,  -404,
    -404,     3,   -41,    36,   -63,   -71,  -404,   376,   244,  -404,
     -34,   -94,  -201,  -138,  -348,  -403,  -404,   273,   -15,   -69,
    -404,  -404,   -38,  -404,  -404,   393,  -285,  -404,  -404,  -404,
    -404,  -404,  -404,   610,  -404,  -404
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   111,   112,    89,   113,   114,   489,   490,   115,   323,
     166,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   167,   187,   292,   257,   130,    31,    52,
      63,    64,    33,    34,    35,    36,    37,   147,   148,   132,
     241,   242,    38,    86,    87,    90,    91,    39,    40,    41,
      42,    76,    54,    55,    80,   364,   160,   161,   162,   269,
     491,   365,   223,   377,   378,   379,   380,   381,    43,   259,
     260,   387,   261,   155,   262,   263,   264,   265,   266,   267,
     268,   479,    44,    45,    46,   145
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      78,   131,   131,   233,    53,   304,   305,   133,   133,   302,
      32,   188,   159,   131,    85,    82,   238,   393,    48,   133,
     371,   169,   308,   142,   134,   135,    56,   144,    58,   152,
      69,   334,   336,    78,   129,    65,   129,    59,   222,   228,
     215,    48,   401,    66,    67,    83,   136,   131,    88,    84,
      71,    72,    73,   133,    32,   150,   116,   356,   116,   515,
     173,   197,    48,    48,   273,    61,   174,    48,   175,   176,
     189,   371,    88,   177,   131,   143,   131,   178,   138,   493,
     133,   168,   133,    60,   495,   139,   188,    79,   188,   131,
     131,    49,   394,   158,    48,   133,   133,   180,   182,   183,
     278,   326,    51,   234,    48,   238,    57,   235,   475,   478,
      70,    48,    78,   258,    49,   116,   153,   216,   152,   319,
      68,   306,   131,   362,   131,    51,   402,   131,   133,   301,
     133,   150,   150,   133,   515,   270,    49,   515,   232,   220,
      49,   230,   329,   330,   332,   310,   230,   311,   129,    62,
     313,    51,   243,   486,    81,   143,  -189,   370,   300,   317,
     277,   271,   400,   149,    88,   143,   297,   270,   221,    78,
     116,   220,   137,   116,   116,   116,   116,    49,    51,   131,
     239,   392,   315,   416,    49,   133,   240,   239,    51,   417,
     324,   526,   527,   528,   272,    51,   116,   116,   116,   116,
     116,   116,   116,   116,   116,   116,   116,   116,   116,   116,
     116,   116,   116,   116,   219,   129,   146,   369,   220,   219,
     258,   150,   129,   220,   218,   383,   224,   152,   232,   158,
      51,    85,   388,   205,   206,   318,   319,   116,   425,   149,
     149,   464,   170,   384,   116,     9,    10,    11,   175,   176,
     385,   316,   302,   177,   302,   221,   319,   178,   319,   437,
     428,   151,   175,   176,   433,   481,   154,   177,   190,   191,
     192,   178,   143,   462,   171,   410,   420,   411,    77,   463,
     158,   375,   172,   376,   537,   158,   184,   175,   176,   412,
     538,   413,   177,   212,    51,   441,   178,   472,   473,   185,
     465,   453,   198,   446,   175,   176,   272,   199,   200,   177,
     458,   207,   208,   178,   116,    78,   430,   372,   116,   152,
     471,   373,    78,    92,   514,    93,    94,    95,    96,   149,
      97,    98,    99,   193,   100,   101,   540,   194,   211,   195,
     196,   436,   541,   213,   341,   343,   345,   347,   175,   176,
     214,   129,   477,   177,   304,   305,   217,   178,   225,   175,
     176,   460,   129,   445,   177,   201,   202,   451,   131,   131,
     457,   226,   468,   116,   133,   133,   232,   548,   203,   204,
     209,   210,   158,   227,   116,   434,   435,   243,   274,   530,
    -237,   505,   102,   275,   103,   152,   319,   442,   104,   514,
     516,   517,   514,    78,   143,   231,   276,   152,   105,   106,
     107,   108,   109,   110,   518,   319,   279,   497,   498,   519,
     319,   533,   534,   320,   232,   337,   339,   551,   293,   232,
     536,   534,   496,   440,   555,   557,   175,   176,   321,   116,
     116,   177,   327,   500,   328,   178,   501,   558,   319,   549,
     550,   504,   552,   539,   152,   510,   374,   175,   176,   232,
     480,   386,   177,   175,   176,   141,   178,  -284,   177,   570,
     319,   390,   178,   573,   319,   575,   319,   131,   349,   351,
     298,   299,   389,   133,   571,   572,   391,   574,   395,   576,
     396,   397,   405,   406,   409,   414,   418,   415,   421,   461,
     577,   177,   545,   422,   579,   546,   580,   419,   423,   424,
     439,   426,   232,   438,   443,   444,   474,   447,   459,   156,
     482,   448,   116,   116,   469,   280,   470,     2,   559,   560,
     484,   427,   563,   485,   232,   503,   432,   232,   -53,   -53,
     -53,   -53,   -53,   -53,   -53,   -53,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   499,   502,     9,    10,
      11,    12,    13,    14,   506,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,   507,   511,   512,   520,
     531,   521,   569,   529,   532,   535,   562,  -295,   542,   543,
     544,    27,   547,   140,    29,   553,   567,   564,   565,     2,
     568,   -53,   -53,   -53,   237,   -53,   578,   492,   -53,   -53,
     -53,   -53,   -53,   -53,   355,   353,   -53,   -53,   -53,   -53,
     -53,   -53,   -53,   291,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,  -154,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,   358,   467,
     483,   408,   229,   466,    75,   404,     0,   360,     0,     0,
       0,    26,     0,    27,     0,    28,    29,    30,     0,   236,
    -144,     0,     0,     0,     0,    81,   522,  -144,    93,    94,
      95,    96,     2,    97,    98,    99,     0,   100,   101,     0,
       0,   141,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,  -154,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    47,    26,   102,    27,   103,    28,     2,
      30,   104,     0,     0,     0,     0,     0,     0,     0,     0,
     523,   105,   106,   524,   525,   109,   110,     0,   177,     0,
       0,     0,   178,     0,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,  -154,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      47,    26,     0,    27,     0,    28,     2,    30,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    50,     0,     0,
     175,   176,     0,     0,     0,   177,     0,     0,     0,   178,
       0,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,  -154,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    26,     0,
      27,     0,    28,   244,    30,   245,    94,    95,    96,     2,
      97,    98,    99,     0,   100,   101,     0,   175,   176,     0,
       0,     0,   177,     0,     0,     0,   178,     0,     0,     0,
       0,     0,     0,     0,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,  -154,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,     0,   246,
     247,   248,     0,   249,  -301,   250,   251,   252,   253,   254,
     255,    26,   102,    27,   103,    28,    29,    30,   104,     0,
       0,     0,     0,     0,     0,    81,   403,   256,   105,   106,
     107,   108,   109,   110,   244,     0,   245,    94,    95,    96,
       2,    97,    98,    99,     0,   100,   101,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,  -154,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,     0,
     246,   247,   248,     0,   249,  -301,   250,   251,   252,   253,
     254,   255,    26,   102,    27,   103,    28,    29,    30,   104,
       0,     0,     0,     0,     0,     0,    81,     0,   256,   105,
     106,   107,   108,   109,   110,   476,     0,    93,    94,    95,
      96,     2,    97,    98,    99,     0,   100,   101,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,  -154,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      92,     0,    93,    94,    95,    96,     2,    97,    98,    99,
       0,   100,   101,    26,   102,    27,   103,    28,    29,    30,
     104,     0,     0,     0,     0,     0,     0,     0,     0,   256,
     105,   106,   107,   108,   109,   110,     0,     9,    10,    11,
      12,    13,    14,  -154,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,   186,     0,    93,    94,    95,
      96,     2,    97,    98,    99,     0,   100,   101,     0,   102,
      27,   103,     0,     0,     0,   104,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   105,   106,   107,   108,   109,
     110,     0,     9,    10,    11,    12,    13,    14,  -154,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
     309,     0,    93,    94,    95,    96,     2,    97,    98,    99,
       0,   100,   101,     0,   102,    27,   103,     0,     0,     0,
     104,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     105,   106,   107,   108,   109,   110,     0,     9,    10,    11,
      12,    13,    14,  -154,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    92,     0,   245,    94,    95,
      96,     0,    97,    98,    99,     0,   100,   101,     0,   102,
      27,   103,     0,     0,     0,   104,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   105,   106,   107,   108,   109,
     110,     0,     0,     0,    92,     0,    93,    94,    95,    96,
       0,    97,    98,    99,     0,   100,   101,     0,     0,     0,
       0,   246,   247,   248,     0,   249,  -301,   250,   251,   252,
     253,   254,   255,     0,   102,     0,   103,   163,     0,     0,
     104,     9,    10,    11,     0,     0,     0,    81,     0,   256,
     105,   106,   107,   108,   109,   110,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   102,    77,   103,     0,     0,     0,   104,
       0,     0,     0,     0,   164,     0,     0,     0,     0,   105,
     165,   107,   108,   109,   110,    92,     0,    93,    94,    95,
      96,     0,    97,    98,    99,     0,   100,   101,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    92,     0,
      93,    94,    95,    96,     0,    97,    98,    99,   294,   100,
     101,     0,     9,    10,    11,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   366,     0,     0,     0,     9,    10,    11,     0,     0,
       0,     0,     0,     0,   102,    77,   103,     0,     0,     0,
     104,     0,     0,     0,     0,   295,     0,     0,     0,     0,
     105,   296,   107,   108,   109,   110,     0,   102,    77,   103,
       0,     0,     0,   104,     0,     0,     0,     0,   367,     0,
       0,     0,     0,   105,   368,   107,   108,   109,   110,    92,
       0,    93,    94,    95,    96,     0,    97,    98,    99,     0,
     100,   101,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    92,     0,    93,    94,    95,    96,     0,    97,
      98,    99,   449,   100,   101,     0,     9,    10,    11,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   454,     0,     0,     0,     9,
      10,    11,     0,     0,     0,     0,     0,     0,   102,    77,
     103,     0,     0,     0,   104,     0,     0,     0,     0,   450,
       0,     0,     0,     0,   105,   106,   107,   108,   109,   110,
       0,   102,    77,   103,     0,     0,     0,   104,     0,     0,
       0,     0,   455,     0,     0,     0,     0,   105,   456,   107,
     108,   109,   110,    92,     0,    93,    94,    95,    96,     0,
      97,    98,    99,     0,   100,   101,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    92,     0,    93,    94,
      95,    96,     0,    97,    98,    99,   508,   100,   101,     0,
       9,    10,    11,     0,     0,     0,     0,     0,    92,     0,
      93,    94,    95,    96,     0,    97,    98,    99,     0,   100,
     101,     0,     0,     9,    10,    11,     0,     0,     0,     0,
       0,     0,   102,    77,   103,     0,     0,     0,   104,     0,
       0,     0,     0,   509,     0,     0,     0,     0,   105,   106,
     107,   108,   109,   110,     0,   102,    77,   103,     0,     0,
       0,   104,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   105,   106,   107,   108,   109,   110,   102,     0,   103,
       0,     0,     0,   104,     0,     0,     0,   375,     0,   376,
     231,   513,     0,   105,   106,   107,   108,   109,   110,    92,
       0,    93,    94,    95,    96,     0,    97,    98,    99,     0,
     100,   101,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    92,     0,    93,    94,    95,    96,     0,    97,    98,
      99,     0,   100,   101,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   494,     0,    93,    94,    95,    96,     0,
      97,    98,    99,     0,   100,   101,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   102,     0,
     103,     0,     0,     0,   104,     0,     0,     0,   375,     0,
     376,   231,   566,     0,   105,   106,   107,   108,   109,   110,
     102,     0,   103,     0,     0,     0,   104,     0,     0,     0,
     375,     0,   376,   231,     0,     0,   105,   106,   107,   108,
     109,   110,   102,     0,   103,     0,     0,     0,   104,     0,
       0,     0,   375,     0,   376,   231,     0,     0,   105,   106,
     107,   108,   109,   110,    92,     0,    93,    94,    95,    96,
       0,    97,    98,    99,     0,   100,   101,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   398,     0,    93,    94,
      95,    96,     0,    97,    98,    99,     0,   100,   101,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   431,     0,
      93,    94,    95,    96,     0,    97,    98,    99,     0,   100,
     101,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   102,     0,   103,     0,     0,     0,   104,
     322,     0,     0,     0,     0,     0,     0,     0,     0,   105,
     106,   107,   108,   109,   110,   102,     0,   103,     0,     0,
       0,   104,     0,     0,     0,     0,     0,     0,     0,     0,
     399,   105,   106,   107,   108,   109,   110,   102,     0,   103,
       0,     0,     0,   104,     0,     0,     0,     0,     0,     0,
     432,     0,     0,   105,   106,   107,   108,   109,   110,    92,
       0,    93,    94,    95,    96,     0,    97,    98,    99,     0,
     100,   101,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    92,     0,    93,    94,    95,    96,     0,    97,    98,
      99,     0,   100,   101,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    92,     0,    93,    94,    95,    96,     0,
      97,    98,    99,     0,   100,   101,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   102,     0,
     103,     0,     0,     0,   104,     0,     0,     0,     0,     0,
       0,     0,     0,   256,   105,   106,   107,   108,   109,   110,
     102,     0,   103,     0,     0,     0,   104,   554,     0,     0,
       0,     0,     0,     0,     0,     0,   105,   106,   107,   108,
     109,   110,   102,     0,   103,     0,     0,     0,   104,   556,
       0,     0,     0,     0,     0,     0,     0,     0,   105,   106,
     107,   108,   109,   110,    92,     0,    93,    94,    95,    96,
       0,    97,    98,    99,     0,   100,   101,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   303,     0,    93,    94,
      95,    96,     0,    97,    98,    99,     0,   100,   101,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   307,     0,
      93,    94,    95,    96,     0,    97,    98,    99,     0,   100,
     101,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   102,     0,   103,     0,     0,     0,   104,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   105,
     106,   107,   108,   109,   110,   102,     0,   103,     0,     0,
       0,   104,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   105,   106,   107,   108,   109,   110,   102,     0,   103,
       0,     0,     0,   104,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   105,   106,   107,   108,   109,   110,   314,
       0,    93,    94,    95,    96,     0,    97,    98,    99,     0,
     100,   101,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   325,     0,    93,    94,    95,    96,     0,    97,    98,
      99,     0,   100,   101,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   331,     0,    93,    94,    95,    96,     0,
      97,    98,    99,     0,   100,   101,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   102,     0,
     103,     0,     0,     0,   104,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   105,   106,   107,   108,   109,   110,
     102,     0,   103,     0,     0,     0,   104,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   105,   106,   107,   108,
     109,   110,   102,     0,   103,     0,     0,     0,   104,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   105,   106,
     107,   108,   109,   110,   333,     0,    93,    94,    95,    96,
       0,    97,    98,    99,     0,   100,   101,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   335,     0,    93,    94,
      95,    96,     0,    97,    98,    99,     0,   100,   101,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   338,     0,
      93,    94,    95,    96,     0,    97,    98,    99,     0,   100,
     101,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   102,     0,   103,     0,     0,     0,   104,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   105,
     106,   107,   108,   109,   110,   102,     0,   103,     0,     0,
       0,   104,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   105,   106,   107,   108,   109,   110,   102,     0,   103,
       0,     0,     0,   104,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   105,   106,   107,   108,   109,   110,   340,
       0,    93,    94,    95,    96,     0,    97,    98,    99,     0,
     100,   101,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   342,     0,    93,    94,    95,    96,     0,    97,    98,
      99,     0,   100,   101,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   344,     0,    93,    94,    95,    96,     0,
      97,    98,    99,     0,   100,   101,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   102,     0,
     103,     0,     0,     0,   104,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   105,   106,   107,   108,   109,   110,
     102,     0,   103,     0,     0,     0,   104,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   105,   106,   107,   108,
     109,   110,   102,     0,   103,     0,     0,     0,   104,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   105,   106,
     107,   108,   109,   110,   346,     0,    93,    94,    95,    96,
       0,    97,    98,    99,     0,   100,   101,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   348,     0,    93,    94,
      95,    96,     0,    97,    98,    99,     0,   100,   101,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   350,     0,
      93,    94,    95,    96,     0,    97,    98,    99,     0,   100,
     101,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   102,     0,   103,     0,     0,     0,   104,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   105,
     106,   107,   108,   109,   110,   102,     0,   103,     0,     0,
       0,   104,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   105,   106,   107,   108,   109,   110,   102,     0,   103,
       0,     0,     0,   104,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   105,   106,   107,   108,   109,   110,   352,
       0,    93,    94,    95,    96,     0,    97,    98,    99,     0,
     100,   101,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   354,     0,    93,    94,    95,    96,     0,    97,    98,
      99,     0,   100,   101,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   357,     0,    93,    94,    95,    96,     0,
      97,    98,    99,     0,   100,   101,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   102,     0,
     103,     0,     0,     0,   104,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   105,   106,   107,   108,   109,   110,
     102,     0,   103,     0,     0,     0,   104,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   105,   106,   107,   108,
     109,   110,   102,     0,   103,     0,     0,     0,   104,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   105,   106,
     107,   108,   109,   110,   359,     0,    93,    94,    95,    96,
       0,    97,    98,    99,     0,   100,   101,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   361,     0,    93,    94,
      95,    96,     0,    97,    98,    99,     0,   100,   101,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   429,     0,
      93,    94,    95,    96,     0,    97,    98,    99,     0,   100,
     101,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   102,     0,   103,     0,     0,     0,   104,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   105,
     106,   107,   108,   109,   110,   102,     0,   103,     0,     0,
       0,   104,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   105,   106,   107,   108,   109,   110,   102,     0,   103,
       0,     0,     0,   104,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   105,   106,   107,   108,   109,   110,    93,
      94,    95,    96,     0,    97,    98,    99,     0,   100,   101,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    93,    94,    95,    96,     0,    97,    98,    99,     0,
     100,   101,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    93,    94,    95,    96,     0,    97,    98,
      99,     0,   100,   101,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   102,     0,   103,     0,
       0,     0,   104,     0,     0,     0,     0,     0,     0,   427,
       0,     0,   105,   106,   107,   108,   109,   110,   102,     0,
     103,     0,     0,     0,   179,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   105,   106,   107,   108,   109,   110,
     102,     0,   103,     0,     0,     0,   181,     0,    47,     0,
    -130,     0,     0,     0,     2,     0,   105,   106,   107,   108,
     109,   110,    93,    94,    95,    96,     0,    97,    98,    99,
       0,   100,   101,     0,     0,     0,     0,     0,     0,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,  -154,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    26,     0,    27,     0,
      28,     0,    30,  -130,  -130,  -130,     0,  -130,     0,   102,
       0,   103,  -130,     0,  -130,   104,    47,     0,  -132,     0,
       0,     0,     2,     0,     0,   105,   106,   107,   108,   109,
     110,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,  -154,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,     0,    47,     0,  -134,     0,     0,     0,     2,     0,
       0,     0,     0,     0,    26,     0,    27,     0,    28,     0,
      30,  -132,  -132,  -132,     0,  -132,     0,     0,     0,     0,
    -132,     0,  -132,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,  -154,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,     0,    47,     0,
    -136,     0,     0,     0,     2,     0,     0,     0,     0,     0,
      26,     0,    27,     0,    28,     0,    30,  -134,  -134,  -134,
       0,  -134,     0,     0,     0,     0,  -134,     0,  -134,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,  -154,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,     0,    47,     0,  -138,     0,     0,     0,
       2,     0,     0,     0,     0,     0,    26,     0,    27,     0,
      28,     0,    30,  -136,  -136,  -136,     0,  -136,     0,     0,
       0,     0,  -136,     0,  -136,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,  -154,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,     0,
      47,     0,    48,     0,     0,     0,     2,     0,     0,     0,
       0,     0,    26,     0,    27,     0,    28,     0,    30,  -138,
    -138,  -138,     0,  -138,     0,     0,     0,     0,  -138,     0,
    -138,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,  -154,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,     0,    47,     0,    48,     0,
       0,     0,     2,     0,     0,     0,     0,     0,    26,     0,
      27,     0,    28,     0,    30,   270,   363,     0,     0,   220,
       0,     0,     0,     0,     0,     0,    51,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,  -154,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,     0,    47,     0,     0,     0,     0,     0,     2,     0,
       0,     0,     0,     0,    26,     0,    27,     0,    28,     0,
      30,    49,     0,     0,     0,     0,     0,     0,     0,     0,
      50,     0,    51,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,  -154,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,     0,    47,     0,
       0,     0,     0,     0,     2,     0,     0,     0,     0,     0,
      26,     0,    27,     0,    28,     0,    30,   219,   363,     0,
       0,   220,     0,     0,     0,     0,     0,     0,    51,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,  -154,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,   140,     0,     0,     0,     0,     0,     2,
       0,     0,     0,     0,     0,     0,    26,     0,    27,     0,
      28,     0,    30,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    50,     0,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,  -154,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,     2,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    26,     0,    27,     0,    28,    29,    30,     0,     0,
       0,     0,     0,     0,     0,    81,     0,     0,     0,     9,
      10,    11,    12,    13,    14,     0,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    47,     0,   156,
       0,     0,     0,     2,     0,     0,     0,     0,     0,     0,
       0,     0,    27,     0,     0,    29,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   382,     0,     0,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
    -154,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    47,     0,     0,     0,     0,     0,     2,     0,
       0,     0,     0,     0,     0,    26,     0,    27,     0,    28,
       0,    30,     0,   157,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,  -154,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    74,     1,     0,
       0,     0,     0,     0,     2,     0,     0,     0,     0,     0,
      26,     0,    27,     0,    28,     0,    30,     0,   452,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,  -154,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,     1,     0,     0,     0,     0,     0,     2,
       0,     0,     0,     0,     0,     0,    26,     0,    27,     0,
      28,    29,    30,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,  -154,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    47,     0,
       0,     0,     0,     0,     2,     0,     0,     0,     0,     0,
       0,    26,     0,    27,     0,    28,    29,    30,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,  -154,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,   407,    47,     0,     0,     0,     0,     0,
       2,     0,     0,     0,     0,     0,    26,     0,    27,     0,
      28,     0,    30,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,  -154,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,   487,
       0,     0,     0,     0,     0,     2,     0,     0,     0,     0,
       0,     0,    26,     0,    27,     0,    28,     0,    30,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     9,    10,    11,    12,
      13,    14,  -154,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,   561,     0,   488,     0,     0,     0,
       2,     0,     0,     0,     0,     0,     0,     0,     0,    27,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     9,    10,    11,    12,    13,    14,  -154,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,   312,
       0,   488,     0,     0,     0,     2,     0,     0,     0,     0,
       0,     0,     0,     0,    27,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     2,     0,     0,     0,     9,    10,    11,    12,
      13,    14,  -154,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     9,    10,    11,    12,    13,    14,    27,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,     2,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    27,     0,     0,    29,
       0,     0,     0,     0,     0,     0,     0,     0,     2,     0,
       0,     0,     9,    10,    11,    12,    13,    14,  -154,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     9,
      10,    11,    12,    13,    14,    27,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    27
};

static const yytype_int16 yycheck[] =
{
      51,    58,    59,   141,     1,   175,   176,    58,    59,   173,
       0,   104,    83,    70,    55,    53,   147,     1,     3,    70,
     221,    84,   178,    65,    58,    59,     3,    65,    76,    80,
       3,   201,   202,    84,    58,    32,    60,    76,   132,     1,
      21,     3,     1,    33,    34,    76,    60,   104,     3,    80,
      40,    41,    42,   104,    44,    70,    58,   213,    60,   462,
      78,   117,     3,     3,   158,     1,    84,     3,    88,    89,
     104,   272,     3,    93,   131,    65,   133,    97,    78,   427,
     131,    84,   133,    76,   432,    85,   179,    51,   181,   146,
     147,    76,    76,    83,     3,   146,   147,    99,   100,   101,
     163,   194,    87,   145,     3,   236,    83,   145,   393,   394,
      83,     3,   163,   155,    76,   117,    80,    98,   169,    78,
      44,   177,   179,   216,   181,    87,    85,   184,   179,    84,
     181,   146,   147,   184,   537,    76,    76,   540,   141,    80,
      76,   138,   198,   199,   200,   179,   143,   181,   172,    85,
     184,    87,   149,    84,    83,   145,    83,   220,   172,     1,
     163,   158,   255,    70,     3,   155,   169,    76,   132,   220,
     172,    80,    85,   175,   176,   177,   178,    76,    87,   236,
      79,   250,   185,    78,    76,   236,    85,    79,    87,    84,
     193,   476,   477,   478,   158,    87,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   215,    76,   239,    83,   220,    80,    76,
     262,   236,   246,    80,   131,   239,   133,   278,   231,   219,
      87,   272,   246,    16,    17,    77,    78,   239,    78,   146,
     147,   379,    83,    78,   246,    38,    39,    40,    88,    89,
      85,    77,   416,    93,   418,   219,    78,    97,    78,    81,
     316,    77,    88,    89,   320,    85,    84,    93,    11,    12,
      13,    97,   262,    78,    83,   278,    77,   280,    71,    84,
     270,    80,    99,    82,    78,   275,    76,    88,    89,   292,
      84,   294,    93,    96,    87,    79,    97,   390,   391,    76,
      99,   372,    87,   366,    88,    89,   270,    92,    93,    93,
     373,    94,    95,    97,   316,   366,   319,    76,   320,   370,
     389,    80,   373,     1,   462,     3,     4,     5,     6,   236,
       8,     9,    10,    76,    12,    13,    78,    80,    86,    82,
      83,    81,    84,    97,   205,   206,   207,   208,    88,    89,
      20,   375,   394,    93,   524,   525,    77,    97,    77,    88,
      89,   375,   386,   366,    93,    88,    89,   370,   425,   426,
     373,    77,   386,   375,   425,   426,   379,   515,    14,    15,
      18,    19,   372,    78,   386,    77,    78,   384,    77,   482,
      78,   454,    70,    78,    72,   446,    78,    79,    76,   537,
     469,   470,   540,   454,   394,    83,    77,   458,    86,    87,
      88,    89,    90,    91,    77,    78,    81,   441,   442,    77,
      78,    77,    78,    77,   427,   203,   204,   520,    81,   432,
      77,    78,   435,    85,   527,   528,    88,    89,     3,   441,
     442,    93,     3,   446,     1,    97,   449,    77,    78,   518,
     519,   454,   521,    84,   505,   458,     6,    88,    89,   462,
      85,    79,    93,    88,    89,    99,    97,    79,    93,    77,
      78,    76,    97,    77,    78,    77,    78,   534,   209,   210,
     170,   171,    79,   534,   553,   554,    76,   556,     3,   558,
      85,    85,    62,    78,    81,    81,    78,    81,    77,     3,
     569,    93,   505,    77,   573,   508,   575,    85,    77,    77,
      85,    78,   515,    84,    77,    77,    62,    81,    77,     3,
      76,    81,   524,   525,    79,     1,    79,     7,   531,   532,
      81,    83,   535,    81,   537,    77,    83,   540,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    81,    81,    38,    39,
      40,    41,    42,    43,    81,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    81,    85,    81,    76,
      79,    77,    60,    85,    79,    79,   534,    77,    81,    81,
      81,    71,    81,     1,    74,    77,    81,    85,    85,     7,
      81,    77,    78,    79,    84,    81,    85,   426,    84,    85,
      86,    87,    88,    89,   212,   211,    92,    93,    94,    95,
      96,    97,    98,    99,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,   214,   384,
     406,   275,   138,   380,    44,   262,    -1,   215,    -1,    -1,
      -1,    69,    -1,    71,    -1,    73,    74,    75,    -1,   146,
      78,    -1,    -1,    -1,    -1,    83,     1,    85,     3,     4,
       5,     6,     7,     8,     9,    10,    -1,    12,    13,    -1,
      -1,    99,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     1,    69,    70,    71,    72,    73,     7,
      75,    76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      85,    86,    87,    88,    89,    90,    91,    -1,    93,    -1,
      -1,    -1,    97,    -1,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       1,    69,    -1,    71,    -1,    73,     7,    75,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,    -1,    -1,
      88,    89,    -1,    -1,    -1,    93,    -1,    -1,    -1,    97,
      -1,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,    -1,
      71,    -1,    73,     1,    75,     3,     4,     5,     6,     7,
       8,     9,    10,    -1,    12,    13,    -1,    88,    89,    -1,
      -1,    -1,    93,    -1,    -1,    -1,    97,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    -1,    57,
      58,    59,    -1,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    -1,
      -1,    -1,    -1,    -1,    -1,    83,    84,    85,    86,    87,
      88,    89,    90,    91,     1,    -1,     3,     4,     5,     6,
       7,     8,     9,    10,    -1,    12,    13,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    -1,
      57,    58,    59,    -1,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      -1,    -1,    -1,    -1,    -1,    -1,    83,    -1,    85,    86,
      87,    88,    89,    90,    91,     1,    -1,     3,     4,     5,
       6,     7,     8,     9,    10,    -1,    12,    13,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
       1,    -1,     3,     4,     5,     6,     7,     8,     9,    10,
      -1,    12,    13,    69,    70,    71,    72,    73,    74,    75,
      76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,
      86,    87,    88,    89,    90,    91,    -1,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,     1,    -1,     3,     4,     5,
       6,     7,     8,     9,    10,    -1,    12,    13,    -1,    70,
      71,    72,    -1,    -1,    -1,    76,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    86,    87,    88,    89,    90,
      91,    -1,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
       1,    -1,     3,     4,     5,     6,     7,     8,     9,    10,
      -1,    12,    13,    -1,    70,    71,    72,    -1,    -1,    -1,
      76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      86,    87,    88,    89,    90,    91,    -1,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,     1,    -1,     3,     4,     5,
       6,    -1,     8,     9,    10,    -1,    12,    13,    -1,    70,
      71,    72,    -1,    -1,    -1,    76,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    86,    87,    88,    89,    90,
      91,    -1,    -1,    -1,     1,    -1,     3,     4,     5,     6,
      -1,     8,     9,    10,    -1,    12,    13,    -1,    -1,    -1,
      -1,    57,    58,    59,    -1,    61,    62,    63,    64,    65,
      66,    67,    68,    -1,    70,    -1,    72,    34,    -1,    -1,
      76,    38,    39,    40,    -1,    -1,    -1,    83,    -1,    85,
      86,    87,    88,    89,    90,    91,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    70,    71,    72,    -1,    -1,    -1,    76,
      -1,    -1,    -1,    -1,    81,    -1,    -1,    -1,    -1,    86,
      87,    88,    89,    90,    91,     1,    -1,     3,     4,     5,
       6,    -1,     8,     9,    10,    -1,    12,    13,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,
       3,     4,     5,     6,    -1,     8,     9,    10,    34,    12,
      13,    -1,    38,    39,    40,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    34,    -1,    -1,    -1,    38,    39,    40,    -1,    -1,
      -1,    -1,    -1,    -1,    70,    71,    72,    -1,    -1,    -1,
      76,    -1,    -1,    -1,    -1,    81,    -1,    -1,    -1,    -1,
      86,    87,    88,    89,    90,    91,    -1,    70,    71,    72,
      -1,    -1,    -1,    76,    -1,    -1,    -1,    -1,    81,    -1,
      -1,    -1,    -1,    86,    87,    88,    89,    90,    91,     1,
      -1,     3,     4,     5,     6,    -1,     8,     9,    10,    -1,
      12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     1,    -1,     3,     4,     5,     6,    -1,     8,
       9,    10,    34,    12,    13,    -1,    38,    39,    40,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    34,    -1,    -1,    -1,    38,
      39,    40,    -1,    -1,    -1,    -1,    -1,    -1,    70,    71,
      72,    -1,    -1,    -1,    76,    -1,    -1,    -1,    -1,    81,
      -1,    -1,    -1,    -1,    86,    87,    88,    89,    90,    91,
      -1,    70,    71,    72,    -1,    -1,    -1,    76,    -1,    -1,
      -1,    -1,    81,    -1,    -1,    -1,    -1,    86,    87,    88,
      89,    90,    91,     1,    -1,     3,     4,     5,     6,    -1,
       8,     9,    10,    -1,    12,    13,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,     3,     4,
       5,     6,    -1,     8,     9,    10,    34,    12,    13,    -1,
      38,    39,    40,    -1,    -1,    -1,    -1,    -1,     1,    -1,
       3,     4,     5,     6,    -1,     8,     9,    10,    -1,    12,
      13,    -1,    -1,    38,    39,    40,    -1,    -1,    -1,    -1,
      -1,    -1,    70,    71,    72,    -1,    -1,    -1,    76,    -1,
      -1,    -1,    -1,    81,    -1,    -1,    -1,    -1,    86,    87,
      88,    89,    90,    91,    -1,    70,    71,    72,    -1,    -1,
      -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    86,    87,    88,    89,    90,    91,    70,    -1,    72,
      -1,    -1,    -1,    76,    -1,    -1,    -1,    80,    -1,    82,
      83,    84,    -1,    86,    87,    88,    89,    90,    91,     1,
      -1,     3,     4,     5,     6,    -1,     8,     9,    10,    -1,
      12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     1,    -1,     3,     4,     5,     6,    -1,     8,     9,
      10,    -1,    12,    13,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     1,    -1,     3,     4,     5,     6,    -1,
       8,     9,    10,    -1,    12,    13,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,    -1,
      72,    -1,    -1,    -1,    76,    -1,    -1,    -1,    80,    -1,
      82,    83,    84,    -1,    86,    87,    88,    89,    90,    91,
      70,    -1,    72,    -1,    -1,    -1,    76,    -1,    -1,    -1,
      80,    -1,    82,    83,    -1,    -1,    86,    87,    88,    89,
      90,    91,    70,    -1,    72,    -1,    -1,    -1,    76,    -1,
      -1,    -1,    80,    -1,    82,    83,    -1,    -1,    86,    87,
      88,    89,    90,    91,     1,    -1,     3,     4,     5,     6,
      -1,     8,     9,    10,    -1,    12,    13,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,     3,     4,
       5,     6,    -1,     8,     9,    10,    -1,    12,    13,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,
       3,     4,     5,     6,    -1,     8,     9,    10,    -1,    12,
      13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    70,    -1,    72,    -1,    -1,    -1,    76,
      77,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,
      87,    88,    89,    90,    91,    70,    -1,    72,    -1,    -1,
      -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      85,    86,    87,    88,    89,    90,    91,    70,    -1,    72,
      -1,    -1,    -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,
      83,    -1,    -1,    86,    87,    88,    89,    90,    91,     1,
      -1,     3,     4,     5,     6,    -1,     8,     9,    10,    -1,
      12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     1,    -1,     3,     4,     5,     6,    -1,     8,     9,
      10,    -1,    12,    13,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     1,    -1,     3,     4,     5,     6,    -1,
       8,     9,    10,    -1,    12,    13,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,    -1,
      72,    -1,    -1,    -1,    76,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    85,    86,    87,    88,    89,    90,    91,
      70,    -1,    72,    -1,    -1,    -1,    76,    77,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    86,    87,    88,    89,
      90,    91,    70,    -1,    72,    -1,    -1,    -1,    76,    77,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,    87,
      88,    89,    90,    91,     1,    -1,     3,     4,     5,     6,
      -1,     8,     9,    10,    -1,    12,    13,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,     3,     4,
       5,     6,    -1,     8,     9,    10,    -1,    12,    13,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,
       3,     4,     5,     6,    -1,     8,     9,    10,    -1,    12,
      13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    70,    -1,    72,    -1,    -1,    -1,    76,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,
      87,    88,    89,    90,    91,    70,    -1,    72,    -1,    -1,
      -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    86,    87,    88,    89,    90,    91,    70,    -1,    72,
      -1,    -1,    -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    86,    87,    88,    89,    90,    91,     1,
      -1,     3,     4,     5,     6,    -1,     8,     9,    10,    -1,
      12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     1,    -1,     3,     4,     5,     6,    -1,     8,     9,
      10,    -1,    12,    13,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     1,    -1,     3,     4,     5,     6,    -1,
       8,     9,    10,    -1,    12,    13,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,    -1,
      72,    -1,    -1,    -1,    76,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    86,    87,    88,    89,    90,    91,
      70,    -1,    72,    -1,    -1,    -1,    76,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    86,    87,    88,    89,
      90,    91,    70,    -1,    72,    -1,    -1,    -1,    76,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,    87,
      88,    89,    90,    91,     1,    -1,     3,     4,     5,     6,
      -1,     8,     9,    10,    -1,    12,    13,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,     3,     4,
       5,     6,    -1,     8,     9,    10,    -1,    12,    13,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,
       3,     4,     5,     6,    -1,     8,     9,    10,    -1,    12,
      13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    70,    -1,    72,    -1,    -1,    -1,    76,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,
      87,    88,    89,    90,    91,    70,    -1,    72,    -1,    -1,
      -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    86,    87,    88,    89,    90,    91,    70,    -1,    72,
      -1,    -1,    -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    86,    87,    88,    89,    90,    91,     1,
      -1,     3,     4,     5,     6,    -1,     8,     9,    10,    -1,
      12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     1,    -1,     3,     4,     5,     6,    -1,     8,     9,
      10,    -1,    12,    13,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     1,    -1,     3,     4,     5,     6,    -1,
       8,     9,    10,    -1,    12,    13,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,    -1,
      72,    -1,    -1,    -1,    76,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    86,    87,    88,    89,    90,    91,
      70,    -1,    72,    -1,    -1,    -1,    76,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    86,    87,    88,    89,
      90,    91,    70,    -1,    72,    -1,    -1,    -1,    76,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,    87,
      88,    89,    90,    91,     1,    -1,     3,     4,     5,     6,
      -1,     8,     9,    10,    -1,    12,    13,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,     3,     4,
       5,     6,    -1,     8,     9,    10,    -1,    12,    13,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,
       3,     4,     5,     6,    -1,     8,     9,    10,    -1,    12,
      13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    70,    -1,    72,    -1,    -1,    -1,    76,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,
      87,    88,    89,    90,    91,    70,    -1,    72,    -1,    -1,
      -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    86,    87,    88,    89,    90,    91,    70,    -1,    72,
      -1,    -1,    -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    86,    87,    88,    89,    90,    91,     1,
      -1,     3,     4,     5,     6,    -1,     8,     9,    10,    -1,
      12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     1,    -1,     3,     4,     5,     6,    -1,     8,     9,
      10,    -1,    12,    13,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     1,    -1,     3,     4,     5,     6,    -1,
       8,     9,    10,    -1,    12,    13,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,    -1,
      72,    -1,    -1,    -1,    76,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    86,    87,    88,    89,    90,    91,
      70,    -1,    72,    -1,    -1,    -1,    76,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    86,    87,    88,    89,
      90,    91,    70,    -1,    72,    -1,    -1,    -1,    76,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,    87,
      88,    89,    90,    91,     1,    -1,     3,     4,     5,     6,
      -1,     8,     9,    10,    -1,    12,    13,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,     3,     4,
       5,     6,    -1,     8,     9,    10,    -1,    12,    13,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,
       3,     4,     5,     6,    -1,     8,     9,    10,    -1,    12,
      13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    70,    -1,    72,    -1,    -1,    -1,    76,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,
      87,    88,    89,    90,    91,    70,    -1,    72,    -1,    -1,
      -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    86,    87,    88,    89,    90,    91,    70,    -1,    72,
      -1,    -1,    -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    86,    87,    88,    89,    90,    91,     3,
       4,     5,     6,    -1,     8,     9,    10,    -1,    12,    13,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,     6,    -1,     8,     9,    10,    -1,
      12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,     6,    -1,     8,     9,
      10,    -1,    12,    13,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    70,    -1,    72,    -1,
      -1,    -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,    83,
      -1,    -1,    86,    87,    88,    89,    90,    91,    70,    -1,
      72,    -1,    -1,    -1,    76,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    86,    87,    88,    89,    90,    91,
      70,    -1,    72,    -1,    -1,    -1,    76,    -1,     1,    -1,
       3,    -1,    -1,    -1,     7,    -1,    86,    87,    88,    89,
      90,    91,     3,     4,     5,     6,    -1,     8,     9,    10,
      -1,    12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    69,    -1,    71,    -1,
      73,    -1,    75,    76,    77,    78,    -1,    80,    -1,    70,
      -1,    72,    85,    -1,    87,    76,     1,    -1,     3,    -1,
      -1,    -1,     7,    -1,    -1,    86,    87,    88,    89,    90,
      91,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    -1,     1,    -1,     3,    -1,    -1,    -1,     7,    -1,
      -1,    -1,    -1,    -1,    69,    -1,    71,    -1,    73,    -1,
      75,    76,    77,    78,    -1,    80,    -1,    -1,    -1,    -1,
      85,    -1,    87,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    -1,     1,    -1,
       3,    -1,    -1,    -1,     7,    -1,    -1,    -1,    -1,    -1,
      69,    -1,    71,    -1,    73,    -1,    75,    76,    77,    78,
      -1,    80,    -1,    -1,    -1,    -1,    85,    -1,    87,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    -1,     1,    -1,     3,    -1,    -1,    -1,
       7,    -1,    -1,    -1,    -1,    -1,    69,    -1,    71,    -1,
      73,    -1,    75,    76,    77,    78,    -1,    80,    -1,    -1,
      -1,    -1,    85,    -1,    87,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    -1,
       1,    -1,     3,    -1,    -1,    -1,     7,    -1,    -1,    -1,
      -1,    -1,    69,    -1,    71,    -1,    73,    -1,    75,    76,
      77,    78,    -1,    80,    -1,    -1,    -1,    -1,    85,    -1,
      87,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    -1,     1,    -1,     3,    -1,
      -1,    -1,     7,    -1,    -1,    -1,    -1,    -1,    69,    -1,
      71,    -1,    73,    -1,    75,    76,    77,    -1,    -1,    80,
      -1,    -1,    -1,    -1,    -1,    -1,    87,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    -1,     1,    -1,    -1,    -1,    -1,    -1,     7,    -1,
      -1,    -1,    -1,    -1,    69,    -1,    71,    -1,    73,    -1,
      75,    76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      85,    -1,    87,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    -1,     1,    -1,
      -1,    -1,    -1,    -1,     7,    -1,    -1,    -1,    -1,    -1,
      69,    -1,    71,    -1,    73,    -1,    75,    76,    77,    -1,
      -1,    80,    -1,    -1,    -1,    -1,    -1,    -1,    87,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,     1,    -1,    -1,    -1,    -1,    -1,     7,
      -1,    -1,    -1,    -1,    -1,    -1,    69,    -1,    71,    -1,
      73,    -1,    75,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    85,    -1,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,     7,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    69,    -1,    71,    -1,    73,    74,    75,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    83,    -1,    -1,    -1,    38,
      39,    40,    41,    42,    43,    -1,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,     1,    -1,     3,
      -1,    -1,    -1,     7,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    71,    -1,    -1,    74,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    84,    -1,    -1,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,     1,    -1,    -1,    -1,    -1,    -1,     7,    -1,
      -1,    -1,    -1,    -1,    -1,    69,    -1,    71,    -1,    73,
      -1,    75,    -1,    77,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,     0,     1,    -1,
      -1,    -1,    -1,    -1,     7,    -1,    -1,    -1,    -1,    -1,
      69,    -1,    71,    -1,    73,    -1,    75,    -1,    77,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,     1,    -1,    -1,    -1,    -1,    -1,     7,
      -1,    -1,    -1,    -1,    -1,    -1,    69,    -1,    71,    -1,
      73,    74,    75,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,     1,    -1,
      -1,    -1,    -1,    -1,     7,    -1,    -1,    -1,    -1,    -1,
      -1,    69,    -1,    71,    -1,    73,    74,    75,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,     1,    -1,    -1,    -1,    -1,    -1,
       7,    -1,    -1,    -1,    -1,    -1,    69,    -1,    71,    -1,
      73,    -1,    75,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,     1,
      -1,    -1,    -1,    -1,    -1,     7,    -1,    -1,    -1,    -1,
      -1,    -1,    69,    -1,    71,    -1,    73,    -1,    75,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,     1,    -1,    58,    -1,    -1,    -1,
       7,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,     1,
      -1,    58,    -1,    -1,    -1,     7,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    71,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     7,    -1,    -1,    -1,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    38,    39,    40,    41,    42,    43,    71,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,     7,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    71,    -1,    -1,    74,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     7,    -1,
      -1,    -1,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,
      39,    40,    41,    42,    43,    71,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    71
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     7,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    69,    71,    73,    74,
      75,   128,   129,   132,   133,   134,   135,   136,   142,   147,
     148,   149,   150,   168,   182,   183,   184,     1,     3,    76,
      85,    87,   129,   151,   152,   153,     3,    83,    76,    76,
      76,     1,    85,   130,   131,   151,   129,   129,    44,     3,
      83,   129,   129,   129,     0,   183,   151,    71,   148,   153,
     154,    83,   172,    76,    80,   152,   143,   144,     3,   103,
     145,   146,     1,     3,     4,     5,     6,     8,     9,    10,
      12,    13,    70,    72,    76,    86,    87,    88,    89,    90,
      91,   101,   102,   104,   105,   108,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     127,   133,   139,   148,   160,   160,   127,    85,    78,    85,
       1,    99,   128,   129,   172,   185,    83,   137,   138,   139,
     168,    77,   148,   153,    84,   173,     3,    77,   129,   155,
     156,   157,   158,    34,    81,    87,   110,   123,   124,   154,
      83,    83,    99,    78,    84,    88,    89,    93,    97,    76,
     110,    76,   110,   110,    76,    76,     1,   124,   126,   160,
      11,    12,    13,    76,    80,    82,    83,   112,    87,    92,
      93,    88,    89,    14,    15,    16,    17,    94,    95,    18,
      19,    86,    96,    97,    20,    21,    98,    77,   139,    76,
      80,   153,   161,   162,   139,    77,    77,    78,     1,   131,
     151,    83,   124,   163,   128,   172,   137,    84,   138,    79,
      85,   140,   141,   151,     1,     3,    57,    58,    59,    61,
      63,    64,    65,    66,    67,    68,    85,   126,   128,   169,
     170,   172,   174,   175,   176,   177,   178,   179,   180,   159,
      76,   151,   153,   161,    77,    78,    77,   124,   154,    81,
       1,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    99,   125,    81,    34,    81,    87,   124,   145,   145,
     127,    84,   146,     1,   113,   113,   112,     1,   119,     1,
     160,   160,     1,   160,     1,   124,    77,     1,    77,    78,
      77,     3,    77,   109,   124,     1,   126,     3,     1,   112,
     112,     1,   112,     1,   113,     1,   113,   114,     1,   114,
       1,   115,     1,   115,     1,   115,     1,   115,     1,   116,
       1,   116,     1,   117,     1,   118,   119,     1,   120,     1,
     121,     1,   126,    77,   155,   161,    34,    81,    87,   124,
     154,   162,    76,    80,     6,    80,    82,   163,   164,   165,
     166,   167,    84,   127,    78,    85,    79,   171,   127,    79,
      76,    76,   169,     1,    76,     3,    85,    85,     1,    85,
     126,     1,    85,    84,   175,    62,    78,    56,   157,    81,
     124,   124,   124,   124,    81,    81,    78,    84,    78,    85,
      77,    77,    77,    77,    77,    78,    78,    83,   112,     1,
     124,     1,    83,   112,    77,    78,    81,    81,    84,    85,
      85,    79,    79,    77,    77,   124,   154,    81,    81,    34,
      81,   124,    77,   155,    34,    81,    87,   124,   154,    77,
     127,     3,    78,    84,   163,    99,   167,   141,   127,    79,
      79,   169,   126,   126,    62,   176,     1,   128,   176,   181,
      85,    85,    76,   158,    81,    81,    84,     1,    58,   106,
     107,   160,   106,   164,     1,   164,   124,   123,   123,    81,
     124,   124,    81,    77,   124,   154,    81,    81,    34,    81,
     124,    85,    81,    84,   163,   165,   169,   169,    77,    77,
      76,    77,     1,    85,    88,    89,   176,   176,   176,    85,
     126,    79,    79,    77,    78,    79,    77,    78,    84,    84,
      78,    84,    81,    81,    81,   124,   124,    81,   163,   169,
     169,   126,   169,    77,    77,   126,    77,   126,    77,   124,
     124,     1,   107,   124,    85,    85,    84,    81,    81,    60,
      77,   169,   169,    77,   169,    77,   169,   169,    85,   169,
     169
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   100,   101,   101,   101,   101,   101,   101,   101,   102,
     102,   102,   103,   104,   104,   105,   105,   106,   106,   106,
     107,   107,   107,   108,   108,   108,   108,   108,   108,   108,
     108,   108,   108,   108,   108,   108,   108,   109,   109,   110,
     110,   110,   110,   110,   110,   110,   110,   111,   111,   111,
     111,   111,   111,   112,   112,   112,   112,   113,   113,   113,
     113,   113,   113,   114,   114,   114,   114,   114,   114,   114,
     115,   115,   115,   115,   116,   116,   116,   116,   116,   116,
     116,   116,   116,   117,   117,   117,   117,   117,   118,   118,
     118,   119,   119,   119,   120,   120,   120,   121,   121,   121,
     122,   122,   122,   123,   123,   123,   124,   124,   124,   125,
     125,   125,   125,   125,   125,   125,   125,   125,   125,   125,
     126,   126,   126,   127,   128,   128,   128,   128,   128,   129,
     129,   129,   129,   129,   129,   129,   129,   129,   129,   129,
     130,   130,   130,   131,   131,   132,   132,   132,   132,   132,
     132,   133,   133,   133,   134,   133,   133,   133,   133,   133,
     133,   133,   133,   133,   133,   133,   133,   133,   135,   135,
     135,   136,   136,   137,   137,   138,   138,   138,   139,   139,
     139,   139,   140,   140,   141,   141,   141,   142,   142,   143,
     142,   144,   142,   142,   145,   145,   146,   146,   147,   148,
     148,   148,   148,   149,   149,   150,   150,   151,   151,   152,
     152,   152,   152,   152,   152,   152,   152,   152,   152,   152,
     152,   152,   152,   153,   153,   153,   153,   154,   154,   155,
     155,   156,   156,   157,   157,   157,   158,   159,   158,   160,
     160,   161,   161,   161,   162,   162,   162,   162,   162,   162,
     162,   162,   162,   162,   162,   162,   162,   162,   162,   162,
     162,   162,   162,   162,   162,   163,   163,   163,   164,   164,
     164,   164,   165,   166,   166,   167,   167,   168,   169,   169,
     169,   169,   169,   169,   171,   170,   170,   170,   172,   173,
     172,   174,   174,   175,   175,   176,   176,   176,   177,   177,
     177,   179,   178,   178,   178,   178,   178,   178,   178,   178,
     181,   180,   180,   180,   180,   180,   180,   182,   182,   183,
     183,   184,   184,   184,   185,   185
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     3,     1,     3,     3,     1,
       1,     1,     1,     1,     1,     6,     6,     1,     3,     3,
       3,     3,     3,     1,     4,     3,     4,     3,     3,     2,
       2,     6,     7,     4,     4,     7,     7,     1,     3,     1,
       2,     2,     2,     2,     4,     4,     4,     1,     1,     1,
       1,     1,     1,     1,     4,     4,     4,     1,     3,     3,
       3,     4,     4,     1,     3,     3,     3,     3,     3,     3,
       1,     3,     3,     3,     1,     3,     3,     3,     3,     3,
       3,     3,     3,     1,     3,     3,     3,     3,     1,     3,
       3,     1,     3,     3,     1,     3,     3,     1,     3,     4,
       1,     3,     3,     1,     5,     5,     1,     3,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     3,     1,     2,     3,     1,     2,     3,     2,
       1,     2,     1,     2,     1,     2,     1,     2,     1,     2,
       1,     3,     3,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     0,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     4,     5,
       2,     1,     1,     1,     2,     2,     3,     1,     2,     1,
       2,     1,     1,     3,     2,     3,     1,     4,     5,     0,
       6,     0,     7,     2,     1,     3,     3,     1,     4,     1,
       1,     1,     1,     1,     1,     4,     4,     2,     1,     1,
       3,     3,     4,     6,     5,     5,     6,     5,     4,     4,
       4,     3,     4,     3,     2,     2,     1,     1,     2,     3,
       1,     1,     3,     2,     2,     1,     1,     0,     4,     2,
       1,     2,     1,     1,     3,     2,     3,     5,     4,     5,
       4,     3,     3,     3,     4,     6,     5,     5,     6,     4,
       4,     2,     3,     3,     4,     3,     4,     1,     2,     1,
       4,     3,     2,     1,     2,     3,     2,     7,     1,     1,
       1,     1,     1,     1,     0,     4,     4,     3,     2,     0,
       4,     1,     2,     1,     1,     1,     2,     2,     7,     5,
       5,     0,     6,     7,     6,     7,     6,     7,     6,     5,
       0,     4,     2,     2,     2,     3,     3,     1,     2,     1,
       1,     4,     3,     3,     1,     2
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
        case 2:
#line 49 "bison.y" /* yacc.c:1646  */
    {ck_decl();}
#line 2520 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 54 "bison.y" /* yacc.c:1646  */
    { yyerrok; printf("ERROR\n");}
#line 2526 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 55 "bison.y" /* yacc.c:1646  */
    { yyerrok; printf("ERROR\n");}
#line 2532 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 65 "bison.y" /* yacc.c:1646  */
    {save_id_stack();}
#line 2538 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 75 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 2544 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 81 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 2550 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 87 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 2556 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 95 "bison.y" /* yacc.c:1646  */
    {save_id_stack();}
#line 2562 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 96 "bison.y" /* yacc.c:1646  */
    {save_id_stack();}
#line 2568 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 101 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 2574 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 102 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 2580 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 103 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 2586 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 104 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 2592 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 120 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 2598 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 135 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 2604 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 136 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 2610 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 144 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 2616 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 145 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 2622 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 152 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 2628 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 153 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 2634 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 154 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 2640 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 155 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 2646 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 162 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 2652 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 171 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 2658 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 172 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 2664 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 173 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 2670 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 174 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 2676 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 181 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 2682 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 182 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 2688 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 188 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 2694 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 194 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 2700 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 200 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 2706 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 206 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 2712 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 212 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 2718 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 218 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 2724 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 224 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 2730 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 244 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 2736 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 253 "bison.y" /* yacc.c:1646  */
    {end_decl();}
#line 2742 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 255 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 2748 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 256 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 2754 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 270 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 2760 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 276 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 2766 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 299 "bison.y" /* yacc.c:1646  */
    {save_type_stack();}
#line 2772 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 317 "bison.y" /* yacc.c:1646  */
    {save_id_stack();}
#line 2778 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 357 "bison.y" /* yacc.c:1646  */
    {save_id_stack();}
#line 2784 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 358 "bison.y" /* yacc.c:1646  */
    {save_id_stack();}
#line 2790 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 359 "bison.y" /* yacc.c:1646  */
    {save_id_stack();}
#line 2796 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 209:
#line 399 "bison.y" /* yacc.c:1646  */
    {save_id_stack();}
#line 2802 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 236:
#line 445 "bison.y" /* yacc.c:1646  */
    {save_id_stack();}
#line 2808 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 237:
#line 446 "bison.y" /* yacc.c:1646  */
    {save_id_stack();}
#line 2814 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 276:
#line 508 "bison.y" /* yacc.c:1646  */
    {save_id_stack();}
#line 2820 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 284:
#line 525 "bison.y" /* yacc.c:1646  */
    {save_id_stack();}
#line 2826 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 289:
#line 532 "bison.y" /* yacc.c:1646  */
    {printf("Open Scope\n");}
#line 2832 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 290:
#line 532 "bison.y" /* yacc.c:1646  */
    {printf("Close Scope\n");}
#line 2838 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 297:
#line 548 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 2844 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 301:
#line 558 "bison.y" /* yacc.c:1646  */
    {print_hola();}
#line 2850 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 310:
#line 571 "bison.y" /* yacc.c:1646  */
    {save_id_stack();}
#line 2856 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 323:
#line 592 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 2862 "bison.tab.c" /* yacc.c:1646  */
    break;


#line 2866 "bison.tab.c" /* yacc.c:1646  */
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

print_hola(){
	printf("WHILE\n");
}
/*
inicio_while(){
	Crear RS “while”
	begin_Label = nueva etiqueta();
	exit_label = nueva etiqueta();
	push(while)
	generate_code(begin_label);
}*/
