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
#define YYERROR_VERBOSE 1
// datos importantes.
extern int yylex();
extern int yyparse();
extern FILE *yyin;
 
void yyerror(const char *s);

#line 77 "bison.tab.c" /* yacc.c:339  */

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
#line 14 "bison.y" /* yacc.c:355  */

	char *sval; // El valor de "una variable".

#line 194 "bison.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);



/* Copy the second part of user declarations.  */

#line 211 "bison.tab.c" /* yacc.c:358  */

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
#define YYFINAL  73
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   4463

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  100
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  79
/* YYNRULES -- Number of rules.  */
#define YYNRULES  318
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  571

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
       0,    48,    48,    49,    50,    51,    52,    53,    54,    58,
      59,    60,    64,    68,    69,    73,    74,    78,    79,    80,
      84,    85,    86,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   107,   108,   112,
     113,   114,   115,   116,   117,   118,   119,   123,   124,   125,
     126,   127,   128,   132,   133,   134,   135,   139,   140,   141,
     142,   143,   144,   148,   149,   150,   151,   152,   153,   154,
     158,   159,   160,   161,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   177,   178,   179,   180,   181,   185,   186,
     187,   191,   192,   193,   197,   198,   199,   203,   204,   205,
     209,   210,   211,   215,   216,   217,   221,   222,   223,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     241,   242,   243,   247,   251,   252,   253,   254,   255,   259,
     260,   261,   262,   263,   264,   265,   266,   267,   268,   269,
     273,   274,   275,   279,   280,   286,   287,   288,   289,   290,
     291,   295,   296,   297,   298,   299,   300,   301,   302,   303,
     304,   305,   306,   307,   308,   309,   310,   314,   315,   316,
     320,   321,   325,   326,   330,   331,   332,   336,   337,   338,
     339,   343,   344,   348,   349,   350,   354,   355,   356,   357,
     358,   362,   363,   367,   368,   372,   376,   377,   378,   379,
     383,   384,   388,   389,   393,   394,   398,   399,   400,   401,
     402,   403,   404,   405,   406,   407,   408,   409,   410,   411,
     415,   416,   417,   418,   422,   423,   428,   429,   433,   434,
     438,   439,   440,   444,   445,   449,   450,   454,   455,   456,
     460,   461,   462,   463,   464,   465,   466,   467,   468,   469,
     470,   471,   472,   473,   474,   475,   476,   477,   478,   479,
     480,   484,   485,   486,   490,   491,   492,   493,   497,   501,
     502,   506,   507,   511,   515,   516,   517,   518,   519,   520,
     524,   525,   526,   530,   531,   535,   536,   540,   541,   545,
     546,   547,   551,   552,   553,   557,   557,   558,   559,   560,
     561,   562,   565,   566,   570,   571,   572,   573,   574,   575,
     579,   580,   584,   585,   589,   590,   591,   595,   596
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
  "storage_class_specifier", "type_specifier", "struct_or_union_specifier",
  "struct_or_union", "struct_declaration_list", "struct_declaration",
  "specifier_qualifier_list", "struct_declarator_list",
  "struct_declarator", "enum_specifier", "enumerator_list", "enumerator",
  "atomic_type_specifier", "type_qualifier", "function_specifier",
  "alignment_specifier", "declarator", "direct_declarator", "pointer",
  "type_qualifier_list", "parameter_type_list", "parameter_list",
  "parameter_declaration", "identifier_list", "type_name",
  "abstract_declarator", "direct_abstract_declarator", "initializer",
  "initializer_list", "designation", "designator_list", "designator",
  "static_assert_declaration", "statement", "labeled_statement",
  "compound_statement", "block_item_list", "block_item",
  "expression_statement", "selection_statement", "iteration_statement",
  "$@1", "jump_statement", "translation_unit", "external_declaration",
  "function_definition", "declaration_list", YY_NULLPTR
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

#define YYPACT_NINF -298

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-298)))

#define YYTABLE_NINF -296

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    3224,  3642,  -298,  -298,  -298,  -298,  -298,  -298,  -298,  -298,
    -298,  -298,  -298,  -298,  -298,  -298,  -298,  -298,  -298,  -298,
    -298,  -298,  -298,  -298,  -298,  -298,    30,   -24,    -5,  -298,
      31,  -298,  -298,    95,  3306,  3362,  -298,    34,  -298,  -298,
    3418,  3474,  3530,  -298,  4073,  -298,  -298,  4184,  -298,   101,
    -298,   300,  -298,   -64,   173,    88,    49,    47,  1072,  4392,
    2158,    62,  -298,    -9,  -298,   545,  -298,  -298,    96,  4343,
    -298,  -298,  -298,  -298,  -298,    97,  -298,  -298,  -298,   300,
     835,  -298,  3962,  1276,   173,    47,  -298,   113,   -37,  -298,
     279,  -298,  -298,  -298,  -298,  -298,  -298,  3125,  3214,  3214,
     141,   157,  1127,  -298,  -298,  -298,  -298,  -298,  -298,  -298,
    -298,  -298,  -298,   224,  -298,  3236,  -298,   115,   214,   298,
     178,   334,   138,   143,    90,   227,    42,  -298,   175,  4392,
     168,  4392,   187,   201,   188,  -298,    67,  -298,  3754,  1866,
    -298,    95,  -298,  3809,  4343,  3858,  -298,    10,  -298,  -298,
    -298,  -298,   695,   242,  2158,   244,   241,   252,  1237,    72,
     333,   256,   259,  1888,  -298,  -298,   477,  -298,  -298,    41,
    -298,  -298,  -298,  -298,   926,  -298,  -298,  -298,  -298,   286,
    -298,  -298,  -298,    23,   292,   278,  -298,   284,  1618,  -298,
     310,   321,  1367,    -3,  2158,    54,  -298,  2180,  2180,  3236,
    2271,  1182,  -298,  1182,  -298,  -298,  4294,  2293,   -33,     5,
     296,   380,  -298,  -298,  1910,  2315,   407,   411,  -298,  3236,
    3236,  2406,  2428,  2450,  2271,  2541,  2563,  2585,  2676,  2698,
    2720,  2811,  2833,  2855,  2271,  2946,  2968,  2990,  -298,  -298,
    3698,  1390,   189,  -298,   191,  -298,  -298,  -298,   420,  -298,
    -298,   318,  1753,  -298,  -298,  -298,  -298,  3907,  -298,  -298,
    2158,  -298,    91,  -298,   350,  1237,   367,  1237,  2158,  2158,
     386,  2001,  1017,   369,  -298,  -298,   346,  -298,   111,  2158,
    -298,  -298,  -298,  -298,  -298,  -298,  -298,  -298,  -298,  -298,
    -298,  2158,  -298,  3081,  -298,  -298,  -298,   382,  3586,  -298,
      59,  -298,  -298,  4128,  -298,   453,   392,  1618,  -298,  -298,
    2158,  -298,   395,   400,    58,  -298,  -298,  -298,  -298,   389,
     115,   115,   402,   116,   143,   222,   408,   412,   413,   434,
     238,   410,  3103,  -298,  -298,  2023,  -298,  -298,   288,  -298,
     339,   160,  -298,   428,  -298,  -298,   429,  -298,   389,   115,
     389,   115,   214,   116,   214,   116,   298,   116,   298,   116,
     298,   116,   298,   116,   178,   116,   178,   116,   334,   116,
     138,   143,   378,    90,   279,   227,   254,   302,  -298,   436,
     438,  1618,  -298,   435,   454,  1481,   191,  4017,  1504,   459,
    2158,   535,  -298,     1,  1866,   121,  -298,  -298,  -298,    35,
    -298,  2158,  -298,  1237,  -298,   311,   316,   463,   464,   628,
    2001,  2001,  -298,  -298,  -298,  -298,  -298,   279,  -298,  2158,
    -298,  -298,  -298,  -298,   461,   462,  -298,  -298,  -298,  -298,
     457,   465,   465,  -298,  -298,   479,   479,  1753,  -298,  -298,
    1775,  -298,  -298,  2158,  -298,  -298,  -298,  -298,  -298,  2158,
    2158,  -298,  -298,   466,  1618,  -298,  -298,  2158,  -298,   468,
    -298,   474,  1618,  -298,   472,   476,  1595,   475,   478,  -298,
    1640,  -298,  -298,  -298,  -298,  -298,  -298,  -298,  1237,  1237,
    2158,  1237,   762,   490,  2180,  2180,   524,  2045,  2136,   327,
    -298,  -298,   523,   525,   329,  -298,   526,   331,    82,   261,
     148,  -298,  -298,  -298,  -298,   522,   527,  -298,  -298,   528,
    1618,  -298,  -298,  2158,  -298,   529,  -298,  -298,  -298,  -298,
    1866,   546,  -298,   345,  -298,  1237,  1237,   347,  1237,   360,
    1237,  2158,  2158,  -298,  4239,  2158,  -298,  1753,   530,   532,
    1731,  -298,  -298,  -298,  -298,   531,   540,  -298,  -298,  1237,
     537,  -298,  -298,  1237,  -298,  1237,  -298,  -298,  -298,   523,
    -298,  -298,  -298,  -298,  -298,  -298,  -298,  -298,  -298,  -298,
    -298
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,   166,   145,   146,   147,   149,   150,   200,   196,
     197,   198,   160,   152,   153,   154,   155,   158,   159,   156,
     157,   151,   161,   162,   170,   171,     0,     0,   199,   201,
       0,   148,   313,     0,     0,     0,   164,     0,   165,   163,
       0,     0,     0,   126,     0,   310,   312,     0,   206,     0,
     127,   223,   139,     0,   205,     0,   190,     0,     0,     0,
       0,     0,   124,     0,   140,     0,   129,   131,   169,     0,
     133,   135,   137,     1,   311,     0,   199,   224,   222,   221,
       0,   316,     0,     0,   204,     0,    12,   194,     0,   191,
       0,     2,     9,    10,    13,    11,    14,     0,     0,     0,
       0,     0,     0,    47,    48,    49,    50,    51,    52,    23,
       3,     4,     6,    39,    53,     0,    57,    63,    70,    74,
      83,    88,    91,    94,    97,   100,   103,   123,     0,   178,
     236,   180,     0,     0,     0,   128,     0,   125,     0,     0,
     317,     0,   315,     0,     0,     0,   172,     0,   176,   207,
     225,   220,     0,     2,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   283,   289,     0,   106,   120,     0,
     287,   288,   274,   275,     0,   285,   276,   277,   278,     0,
     279,   233,   218,   232,     0,   227,   228,     0,     0,   208,
      48,     0,     0,     0,     0,     0,   186,     0,     0,     0,
       0,     0,    43,     0,    40,    41,     0,     0,     0,     0,
       0,     0,    29,    30,     0,     0,     0,     0,    42,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   203,   177,
       0,     0,   238,   235,   239,   179,   202,   195,     0,   142,
     141,   144,     0,   263,   143,   318,   314,     0,   167,   173,
       0,   174,     0,   181,   185,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   305,   306,     0,   307,     0,     0,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     109,     0,   291,     0,   290,   284,   286,     0,     0,   230,
     238,   231,   217,     0,   219,     0,     0,     0,   209,   216,
       0,   215,    48,     0,     0,   188,   193,   187,   192,     0,
      66,    67,     0,     0,    96,     0,     0,     0,     0,     0,
       0,     0,     7,     8,     5,     0,    28,    25,     0,    37,
       0,     0,    27,     0,    58,    59,     0,    60,    68,    64,
      69,    65,    71,    73,    72,    81,    77,    82,    78,    79,
      75,    80,    76,    86,    84,    87,    85,    90,    89,    93,
      92,    95,     0,    98,   102,   101,     0,     0,   257,     0,
       0,     0,   241,    48,     0,     0,   237,     0,     0,     0,
       0,     0,   265,     0,     0,     0,   269,   168,   183,     0,
     175,     0,   280,     0,   282,     0,     0,     0,     0,     0,
       0,     0,   304,   309,   308,   108,   107,   122,   121,     0,
     226,   229,   234,   211,     0,     0,   212,   214,   189,    61,
       7,    44,     0,    46,    45,     0,     0,     0,    55,    56,
       0,    54,    26,     0,    33,    24,    34,    62,    99,     0,
       0,   258,   240,     0,     0,   242,   248,     0,   247,     0,
     259,     0,     0,   249,    48,     0,     0,     0,     0,   272,
       0,   261,   264,   268,   270,   182,   184,   281,     0,     0,
       0,     0,     0,   127,     0,     0,     0,     0,     0,     0,
     210,   213,     0,     0,     0,    17,     0,     0,     0,     0,
       0,    38,   105,   104,   244,     0,     0,   246,   260,     0,
       0,   250,   256,     0,   255,     0,   273,   271,   262,   267,
       0,   293,   294,     0,   303,     0,     0,     0,     0,     0,
       0,     0,     0,    16,     0,     0,    15,     0,     0,     0,
       0,    31,   243,   245,   252,     0,     0,   253,   266,     0,
       0,   302,   300,     0,   298,     0,   296,    22,    21,    19,
      18,    20,    35,    36,    32,   251,   254,   292,   297,   301,
     299
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -298,  -298,  -298,  -298,  -298,  -298,   171,    77,  -298,  -298,
      60,  -298,   -90,  -187,   217,    48,   234,   381,   391,  -169,
     390,   403,  -298,   -31,   -80,  -298,   -18,   -26,   -41,   181,
    -298,   491,  -298,   -57,  -298,  -298,   482,  -136,   -39,  -298,
     243,  -298,   558,  -190,  -298,   -51,  -298,  -298,    15,   -38,
     -30,   -63,   -78,  -298,   342,  -298,   -36,  -116,  -199,  -124,
    -108,  -297,  -298,   251,   -29,   -81,  -298,    -7,  -298,   473,
    -218,  -298,  -298,  -298,  -298,  -298,   604,  -298,  -298
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   109,   110,    87,   111,   112,   494,   495,   113,   338,
     166,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   167,   168,   291,   169,   128,    32,    52,
      63,    64,    34,    35,    36,    37,   145,   146,   130,   262,
     263,    38,    88,    89,    39,    40,    41,    42,    75,    54,
      55,    79,   379,   185,   186,   187,   496,   380,   244,   392,
     393,   394,   395,   396,    43,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,    44,    45,    46,   143
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      77,   129,   129,   191,   184,   318,   333,   131,   131,   259,
     320,   321,   129,    48,   243,   254,    53,    84,   131,    80,
     192,    78,   132,   133,   140,   218,    48,   127,   150,   127,
     147,   324,    77,    56,   134,   349,   351,    68,    48,   170,
     148,   195,   292,   386,   332,   129,    81,   196,    65,   151,
      86,   131,    58,   408,   411,   197,   198,    86,   142,   253,
     199,    86,    48,   236,   200,   371,   210,   301,   249,   136,
      48,    59,   129,   271,   129,   314,   137,   270,   131,   470,
     131,   315,   334,   293,   209,   471,    49,   129,   129,   260,
     239,    48,   245,   131,   131,   261,    61,    51,    48,   298,
     242,   386,   255,   241,    48,   147,   147,    60,   306,   322,
      51,    49,   313,    57,   260,   148,   148,    69,   114,   293,
     114,   259,    51,   127,   318,   307,   294,   331,   266,   344,
     345,   347,    85,   170,   339,   298,   256,    77,   317,   241,
     237,   150,   428,    49,   129,   278,   129,   135,   272,   129,
     131,   251,   131,   300,    51,   131,   251,   202,   204,   205,
     537,   384,   264,   127,    49,   326,   538,   327,   316,   399,
     329,    49,   253,   520,   149,   114,   400,    49,   385,   144,
      62,    33,    51,   209,   402,   209,   404,   234,    51,   293,
      77,   486,   487,   488,   226,   227,   414,   341,   299,   415,
     129,   390,   219,   391,   197,   198,   131,   220,   221,   199,
     242,   416,   194,   418,   114,    66,    67,   206,   147,   377,
     473,    70,    71,    72,   232,    33,   540,   424,   148,   127,
     425,   410,   541,   207,   398,   211,   212,   213,   293,   233,
     520,   445,   438,   520,   240,   441,   141,   235,   241,    82,
     405,   406,   238,    83,   114,    51,   150,   114,   114,   114,
     114,   141,    84,   183,   246,   240,   248,   387,   300,   241,
     472,   388,   228,   229,   356,   358,   360,   362,   247,   114,
     114,   114,   114,   114,   114,   114,   114,   114,   114,   114,
     114,   114,   114,   114,   114,   114,   114,   320,   321,   430,
     214,   453,   222,   223,   215,   459,   216,   217,   465,   461,
     197,   198,   224,   225,   253,   199,   435,   268,   454,   200,
     114,   265,   477,   267,   141,   466,   197,   198,   269,   498,
      77,   199,   500,   449,   150,   200,   273,    77,     9,    10,
      11,   274,   197,   198,   275,   539,   519,   199,   297,   197,
     198,   200,   230,   231,   199,   141,   303,   253,   200,   127,
     253,   304,   305,   501,   468,   442,   443,   197,   198,   302,
     127,    76,   199,   335,   505,   476,   200,   506,   129,   129,
     293,   450,   509,   336,   131,   131,   515,    51,   478,   293,
     253,   308,   114,   479,   293,   114,   548,   521,   522,   510,
     524,   489,   309,   150,   530,   293,   533,   534,   536,   534,
     342,    77,   343,   519,   264,   150,   519,   139,   502,   503,
     444,   183,   550,   293,   553,   293,   389,   197,   198,   401,
     545,   413,   199,   546,   197,   198,   200,   555,   293,   199,
     253,   352,   354,   200,   551,   552,   403,   554,   407,   556,
     114,   557,   558,   141,   412,   561,   422,   253,   419,   150,
     253,   114,   523,   448,   364,   366,   197,   198,   567,   527,
     529,   199,   569,   423,   570,   200,   426,   129,   279,   183,
     492,   427,   199,   131,   183,   431,     2,   429,   436,   432,
     433,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   280,
     281,   282,   283,   284,   285,   286,   287,   288,   289,   114,
     114,   434,   446,   451,   447,   452,   455,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,   456,   467,   493,   469,   480,
     437,   481,   490,   491,   114,   114,   138,   504,   440,   507,
      28,   508,     2,   511,   -53,   -53,   -53,   512,   -53,   517,
     516,   -53,   -53,   -53,   -53,   -53,   -53,  -289,   183,   -53,
     -53,   -53,   -53,   -53,   -53,   -53,   290,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,   525,   531,   542,   532,   535,   549,   497,   543,   544,
     547,   560,   565,   368,    27,   562,    28,   563,    29,    30,
      31,   566,   568,  -144,   370,   373,   257,   250,    80,   482,
    -144,    91,    92,    93,    94,     2,    95,    96,    97,   375,
      98,    99,   475,   193,   139,   421,   474,   296,    74,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    47,    27,   100,    28,
     101,    29,     2,    31,   102,     0,     0,     0,     0,     0,
       0,     0,     0,   483,   103,   104,   484,   485,   107,   108,
       0,   199,     0,     0,     0,   200,     0,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    47,    27,     0,    28,     0,    29,     2,
      31,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      50,     0,     0,   197,   198,     0,     0,     0,   199,     0,
       0,     0,   200,     0,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    27,     0,    28,     0,    29,   152,    31,   153,    92,
      93,    94,     2,    95,    96,    97,     0,    98,    99,     0,
     197,   198,     0,     0,     0,   199,     0,     0,     0,   200,
       0,     0,     0,     0,     0,     0,     0,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,     0,   154,   155,   156,     0,   157,  -295,   158,   159,
     160,   161,   162,   163,    27,   100,    28,   101,    29,    30,
      31,   102,     0,     0,     0,     0,     0,     0,    80,   164,
     165,   103,   104,   105,   106,   107,   108,   152,     0,   153,
      92,    93,    94,     2,    95,    96,    97,     0,    98,    99,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,     0,   154,   155,   156,     0,   157,  -295,   158,
     159,   160,   161,   162,   163,    27,   100,    28,   101,    29,
      30,    31,   102,     0,     0,     0,     0,     0,     0,    80,
     295,   165,   103,   104,   105,   106,   107,   108,   409,     0,
      91,    92,    93,    94,     2,    95,    96,    97,     0,    98,
      99,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    90,     0,    91,    92,    93,    94,     2,
      95,    96,    97,     0,    98,    99,    27,   100,    28,   101,
      29,    30,    31,   102,     0,     0,     0,     0,     0,     0,
       0,     0,   165,   103,   104,   105,   106,   107,   108,     0,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,   208,     0,
      91,    92,    93,    94,     2,    95,    96,    97,     0,    98,
      99,     0,   100,    28,   101,     0,     0,     0,   102,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   103,   104,
     105,   106,   107,   108,     0,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,   325,     0,    91,    92,    93,    94,     2,
      95,    96,    97,     0,    98,    99,     0,   100,    28,   101,
       0,     0,     0,   102,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   103,   104,   105,   106,   107,   108,     0,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    90,     0,
     153,    92,    93,    94,     0,    95,    96,    97,     0,    98,
      99,     0,   100,    28,   101,     0,     0,     0,   102,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   103,   104,
     105,   106,   107,   108,     0,     0,     0,    90,     0,    91,
      92,    93,    94,     0,    95,    96,    97,     0,    98,    99,
       0,     0,     0,     0,   154,   155,   156,     0,   157,  -295,
     158,   159,   160,   161,   162,   163,     0,   100,     0,   101,
     188,     0,     0,   102,     9,    10,    11,     0,     0,     0,
      80,     0,   165,   103,   104,   105,   106,   107,   108,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   100,    76,   101,     0,
       0,     0,   102,     0,     0,     0,     0,   189,     0,     0,
       0,     0,   103,   190,   105,   106,   107,   108,    90,     0,
      91,    92,    93,    94,     0,    95,    96,    97,     0,    98,
      99,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    90,     0,    91,    92,    93,    94,     0,    95,    96,
      97,   310,    98,    99,     0,     9,    10,    11,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   381,     0,     0,     0,     9,    10,
      11,     0,     0,     0,     0,     0,     0,   100,    76,   101,
       0,     0,     0,   102,     0,     0,     0,     0,   311,     0,
       0,     0,     0,   103,   312,   105,   106,   107,   108,     0,
     100,    76,   101,     0,     0,     0,   102,     0,     0,     0,
       0,   382,     0,     0,     0,     0,   103,   383,   105,   106,
     107,   108,    90,     0,    91,    92,    93,    94,     0,    95,
      96,    97,     0,    98,    99,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    90,     0,    91,    92,    93,
      94,     0,    95,    96,    97,   457,    98,    99,     0,     9,
      10,    11,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   462,     0,
       0,     0,     9,    10,    11,     0,     0,     0,     0,     0,
       0,   100,    76,   101,     0,     0,     0,   102,     0,     0,
       0,     0,   458,     0,     0,     0,     0,   103,   104,   105,
     106,   107,   108,     0,   100,    76,   101,     0,     0,     0,
     102,     0,     0,     0,     0,   463,     0,     0,     0,     0,
     103,   464,   105,   106,   107,   108,    90,     0,    91,    92,
      93,    94,     0,    95,    96,    97,     0,    98,    99,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    90,
       0,    91,    92,    93,    94,     0,    95,    96,    97,   513,
      98,    99,     0,     9,    10,    11,     0,     0,     0,     0,
       0,    90,     0,    91,    92,    93,    94,     0,    95,    96,
      97,     0,    98,    99,     0,     0,     9,    10,    11,     0,
       0,     0,     0,     0,     0,   100,    76,   101,     0,     0,
       0,   102,     0,     0,     0,     0,   514,     0,     0,     0,
       0,   103,   104,   105,   106,   107,   108,     0,   100,    76,
     101,     0,     0,     0,   102,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   103,   104,   105,   106,   107,   108,
     100,     0,   101,     0,     0,     0,   102,     0,     0,     0,
     390,     0,   391,   252,   518,     0,   103,   104,   105,   106,
     107,   108,    90,     0,    91,    92,    93,    94,     0,    95,
      96,    97,     0,    98,    99,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    90,     0,    91,    92,    93,    94,
       0,    95,    96,    97,     0,    98,    99,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   499,     0,    91,    92,
      93,    94,     0,    95,    96,    97,     0,    98,    99,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   100,     0,   101,     0,     0,     0,   102,     0,     0,
       0,   390,     0,   391,   252,   564,     0,   103,   104,   105,
     106,   107,   108,   100,     0,   101,     0,     0,     0,   102,
       0,     0,     0,   390,     0,   391,   252,     0,     0,   103,
     104,   105,   106,   107,   108,   100,     0,   101,     0,     0,
       0,   102,     0,     0,     0,   390,     0,   391,   252,     0,
       0,   103,   104,   105,   106,   107,   108,    90,     0,    91,
      92,    93,    94,     0,    95,    96,    97,     0,    98,    99,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   276,
       0,    91,    92,    93,    94,     0,    95,    96,    97,     0,
      98,    99,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    90,     0,    91,    92,    93,    94,     0,    95,    96,
      97,     0,    98,    99,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   100,     0,   101,     0,
       0,     0,   102,     0,     0,     0,     0,     0,     0,   252,
       0,     0,   103,   104,   105,   106,   107,   108,   100,     0,
     101,     0,     0,     0,   102,     0,     0,     0,     0,     0,
       0,     0,     0,   277,   103,   104,   105,   106,   107,   108,
     100,     0,   101,     0,     0,     0,   102,   337,     0,     0,
       0,     0,     0,     0,     0,     0,   103,   104,   105,   106,
     107,   108,    90,     0,    91,    92,    93,    94,     0,    95,
      96,    97,     0,    98,    99,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   439,     0,    91,    92,    93,    94,
       0,    95,    96,    97,     0,    98,    99,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    90,     0,    91,    92,
      93,    94,     0,    95,    96,    97,     0,    98,    99,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   100,     0,   101,     0,     0,     0,   102,     0,     0,
       0,     0,     0,     0,     0,     0,   165,   103,   104,   105,
     106,   107,   108,   100,     0,   101,     0,     0,     0,   102,
       0,     0,     0,     0,     0,     0,   440,     0,     0,   103,
     104,   105,   106,   107,   108,   100,     0,   101,     0,     0,
       0,   102,   526,     0,     0,     0,     0,     0,     0,     0,
       0,   103,   104,   105,   106,   107,   108,    90,     0,    91,
      92,    93,    94,     0,    95,    96,    97,     0,    98,    99,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    90,
       0,    91,    92,    93,    94,     0,    95,    96,    97,     0,
      98,    99,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   319,     0,    91,    92,    93,    94,     0,    95,    96,
      97,     0,    98,    99,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   100,     0,   101,     0,
       0,     0,   102,   528,     0,     0,     0,     0,     0,     0,
       0,     0,   103,   104,   105,   106,   107,   108,   100,     0,
     101,     0,     0,     0,   102,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   103,   104,   105,   106,   107,   108,
     100,     0,   101,     0,     0,     0,   102,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   103,   104,   105,   106,
     107,   108,   323,     0,    91,    92,    93,    94,     0,    95,
      96,    97,     0,    98,    99,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   330,     0,    91,    92,    93,    94,
       0,    95,    96,    97,     0,    98,    99,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   340,     0,    91,    92,
      93,    94,     0,    95,    96,    97,     0,    98,    99,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   100,     0,   101,     0,     0,     0,   102,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   103,   104,   105,
     106,   107,   108,   100,     0,   101,     0,     0,     0,   102,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   103,
     104,   105,   106,   107,   108,   100,     0,   101,     0,     0,
       0,   102,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   103,   104,   105,   106,   107,   108,   346,     0,    91,
      92,    93,    94,     0,    95,    96,    97,     0,    98,    99,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   348,
       0,    91,    92,    93,    94,     0,    95,    96,    97,     0,
      98,    99,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   350,     0,    91,    92,    93,    94,     0,    95,    96,
      97,     0,    98,    99,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   100,     0,   101,     0,
       0,     0,   102,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   103,   104,   105,   106,   107,   108,   100,     0,
     101,     0,     0,     0,   102,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   103,   104,   105,   106,   107,   108,
     100,     0,   101,     0,     0,     0,   102,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   103,   104,   105,   106,
     107,   108,   353,     0,    91,    92,    93,    94,     0,    95,
      96,    97,     0,    98,    99,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   355,     0,    91,    92,    93,    94,
       0,    95,    96,    97,     0,    98,    99,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   357,     0,    91,    92,
      93,    94,     0,    95,    96,    97,     0,    98,    99,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   100,     0,   101,     0,     0,     0,   102,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   103,   104,   105,
     106,   107,   108,   100,     0,   101,     0,     0,     0,   102,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   103,
     104,   105,   106,   107,   108,   100,     0,   101,     0,     0,
       0,   102,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   103,   104,   105,   106,   107,   108,   359,     0,    91,
      92,    93,    94,     0,    95,    96,    97,     0,    98,    99,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   361,
       0,    91,    92,    93,    94,     0,    95,    96,    97,     0,
      98,    99,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   363,     0,    91,    92,    93,    94,     0,    95,    96,
      97,     0,    98,    99,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   100,     0,   101,     0,
       0,     0,   102,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   103,   104,   105,   106,   107,   108,   100,     0,
     101,     0,     0,     0,   102,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   103,   104,   105,   106,   107,   108,
     100,     0,   101,     0,     0,     0,   102,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   103,   104,   105,   106,
     107,   108,   365,     0,    91,    92,    93,    94,     0,    95,
      96,    97,     0,    98,    99,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   367,     0,    91,    92,    93,    94,
       0,    95,    96,    97,     0,    98,    99,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   369,     0,    91,    92,
      93,    94,     0,    95,    96,    97,     0,    98,    99,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   100,     0,   101,     0,     0,     0,   102,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   103,   104,   105,
     106,   107,   108,   100,     0,   101,     0,     0,     0,   102,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   103,
     104,   105,   106,   107,   108,   100,     0,   101,     0,     0,
       0,   102,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   103,   104,   105,   106,   107,   108,   372,     0,    91,
      92,    93,    94,     0,    95,    96,    97,     0,    98,    99,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   374,
       0,    91,    92,    93,    94,     0,    95,    96,    97,     0,
      98,    99,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   376,     0,    91,    92,    93,    94,     0,    95,    96,
      97,     0,    98,    99,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   100,     0,   101,     0,
       0,     0,   102,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   103,   104,   105,   106,   107,   108,   100,     0,
     101,     0,     0,     0,   102,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   103,   104,   105,   106,   107,   108,
     100,     0,   101,     0,     0,     0,   102,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   103,   104,   105,   106,
     107,   108,   417,     0,    91,    92,    93,    94,     0,    95,
      96,    97,     0,    98,    99,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    91,    92,    93,    94,
       0,    95,    96,    97,     0,    98,    99,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    91,    92,
      93,    94,     0,    95,    96,    97,     0,    98,    99,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   100,     0,   101,     0,     0,     0,   102,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   103,   104,   105,
     106,   107,   108,   100,     0,   101,     0,     0,     0,   102,
       0,     0,     0,     0,     0,     0,   437,     0,     0,   103,
     104,   105,   106,   107,   108,   100,     0,   101,     0,     0,
       0,   201,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   103,   104,   105,   106,   107,   108,    91,    92,    93,
      94,     0,    95,    96,    97,     1,    98,    99,     0,     0,
       0,     2,     0,     0,     0,     0,     0,     0,     0,    91,
      92,    93,    94,     0,    95,    96,    97,     0,    98,    99,
       0,     0,     0,     0,     0,     0,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
       0,     0,     0,     0,   100,     0,   101,     0,     0,     0,
     203,     0,     0,    27,     0,    28,     0,    29,    30,    31,
     103,   104,   105,   106,   107,   108,   100,    47,   101,  -130,
       0,     0,   102,     2,     0,     0,     0,     0,     0,     0,
       0,     0,   103,   104,   105,   106,   107,   108,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,     0,    47,     0,  -132,     0,     0,     0,     2,
       0,     0,     0,     0,     0,    27,     0,    28,     0,    29,
       0,    31,  -130,  -130,  -130,     0,  -130,     0,     0,     0,
       0,  -130,     0,  -130,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,     0,    47,
       0,  -134,     0,     0,     0,     2,     0,     0,     0,     0,
       0,    27,     0,    28,     0,    29,     0,    31,  -132,  -132,
    -132,     0,  -132,     0,     0,     0,     0,  -132,     0,  -132,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,     0,    47,     0,  -136,     0,     0,
       0,     2,     0,     0,     0,     0,     0,    27,     0,    28,
       0,    29,     0,    31,  -134,  -134,  -134,     0,  -134,     0,
       0,     0,     0,  -134,     0,  -134,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
       0,    47,     0,  -138,     0,     0,     0,     2,     0,     0,
       0,     0,     0,    27,     0,    28,     0,    29,     0,    31,
    -136,  -136,  -136,     0,  -136,     0,     0,     0,     0,  -136,
       0,  -136,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,     0,    47,     0,    48,
       0,     0,     0,     2,     0,     0,     0,     0,     0,    27,
       0,    28,     0,    29,     0,    31,  -138,  -138,  -138,     0,
    -138,     0,     0,     0,     0,  -138,     0,  -138,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,     0,    47,     0,    48,     0,     0,     0,     2,
       0,     0,     0,     0,     0,    27,     0,    28,     0,    29,
       0,    31,   298,   378,     0,     0,   241,     0,     0,     0,
       0,     0,     0,    51,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,     0,    47,
       0,     0,     0,     0,     0,     2,     0,     0,     0,     0,
       0,    27,     0,    28,     0,    29,     0,    31,    49,     0,
       0,     0,     0,     0,     0,     0,     0,    50,     0,    51,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,     0,    47,     0,     0,     0,     0,
       0,     2,     0,     0,     0,     0,     0,    27,     0,    28,
       0,    29,     0,    31,   240,   378,     0,     0,   241,     0,
       0,     0,     0,     0,     0,    51,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
     138,     0,     0,     0,     0,     0,     2,     0,     0,     0,
       0,     0,     0,    27,     0,    28,     0,    29,     0,    31,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    50,
       0,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,     2,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    27,     0,
      28,     0,    29,    30,    31,     0,     0,     0,     0,     0,
       0,     0,    80,     0,     0,     0,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,     2,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    28,
       0,     0,    30,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   258,     0,     0,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    47,     0,   181,     0,     0,     0,     2,
       0,     0,     0,     0,     0,     0,     0,     0,    28,     0,
       0,    30,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   397,     0,     0,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    47,     0,
       0,     0,     0,     0,     2,     0,     0,     0,     0,     0,
       0,    27,     0,    28,     0,    29,     0,    31,     0,   182,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    73,     1,     0,     0,     0,     0,     0,
       2,     0,     0,     0,     0,     0,    27,     0,    28,     0,
      29,     0,    31,     0,   460,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    47,
       0,     0,     0,     0,     0,     2,     0,     0,     0,     0,
       0,     0,    27,     0,    28,     0,    29,    30,    31,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,   420,    47,     0,     0,     0,     0,
       0,     2,     0,     0,     0,     0,     0,    27,     0,    28,
       0,    29,     0,    31,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
     559,     0,     0,     0,     0,     0,     2,     0,     0,     0,
       0,     0,     0,    27,     0,    28,     0,    29,     0,    31,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,   328,     0,   493,     0,     0,
       0,     2,     0,     0,     0,     0,     0,     0,     0,     0,
      28,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
       2,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    28,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,     2,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    28,     0,     0,    30,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    28
};

static const yytype_int16 yycheck[] =
{
      51,    58,    59,    83,    82,   195,     1,    58,    59,   145,
     197,   198,    69,     3,   130,   139,     1,    55,    69,    83,
      83,    51,    58,    59,    65,   115,     3,    58,    79,    60,
      69,   200,    83,     3,    60,   222,   223,     3,     3,    80,
      69,    78,     1,   242,    77,   102,    53,    84,    33,    79,
       3,   102,    76,   271,   272,    88,    89,     3,    65,   139,
      93,     3,     3,    21,    97,   234,   102,   183,     1,    78,
       3,    76,   129,     1,   131,    78,    85,   158,   129,    78,
     131,    84,    77,    78,   102,    84,    76,   144,   145,    79,
     129,     3,   131,   144,   145,    85,     1,    87,     3,    76,
     130,   300,   143,    80,     3,   144,   145,    76,   188,   199,
      87,    76,   192,    83,    79,   144,   145,    83,    58,    78,
      60,   257,    87,   154,   314,   188,    85,   207,   154,   219,
     220,   221,    83,   174,   214,    76,   143,   188,    84,    80,
      98,   192,    84,    76,   201,   163,   203,    85,    76,   206,
     201,   136,   203,   183,    87,   206,   141,    97,    98,    99,
      78,   241,   147,   194,    76,   201,    84,   203,   194,    78,
     206,    76,   252,   470,    77,   115,    85,    76,   241,    83,
      85,     0,    87,   201,   265,   203,   267,    97,    87,    78,
     241,   409,   410,   411,    16,    17,    85,   215,   183,   279,
     257,    80,    87,    82,    88,    89,   257,    92,    93,    93,
     240,   291,    99,   293,   154,    34,    35,    76,   257,   237,
      99,    40,    41,    42,    86,    44,    78,   307,   257,   260,
     310,   272,    84,    76,   260,    11,    12,    13,    78,    96,
     537,    81,   332,   540,    76,   335,    65,    20,    80,    76,
     268,   269,    77,    80,   194,    87,   307,   197,   198,   199,
     200,    80,   300,    82,    77,    76,    78,    76,   298,    80,
     394,    80,    94,    95,   226,   227,   228,   229,    77,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   484,   485,    77,
      76,   381,    88,    89,    80,   385,    82,    83,   388,   387,
      88,    89,    14,    15,   394,    93,    78,    76,   381,    97,
     260,    79,   403,    79,   143,   388,    88,    89,    76,   437,
     381,    93,   440,    79,   385,    97,     3,   388,    38,    39,
      40,    85,    88,    89,    85,    84,   470,    93,    62,    88,
      89,    97,    18,    19,    93,   174,    78,   437,    97,   390,
     440,    77,    78,   443,   390,    77,    78,    88,    89,    77,
     401,    71,    93,    77,   454,   401,    97,   457,   435,   436,
      78,    79,   462,     3,   435,   436,   466,    87,    77,    78,
     470,    81,   332,    77,    78,   335,   520,   478,   479,   462,
     481,   419,    81,   454,    77,    78,    77,    78,    77,    78,
       3,   462,     1,   537,   399,   466,   540,    99,   449,   450,
      81,   240,    77,    78,    77,    78,     6,    88,    89,    79,
     510,    85,    93,   513,    88,    89,    97,    77,    78,    93,
     520,   224,   225,    97,   525,   526,    79,   528,    62,   530,
     390,   531,   532,   272,    85,   535,     3,   537,    76,   510,
     540,   401,   480,    85,   230,   231,    88,    89,   549,   487,
     488,    93,   553,    81,   555,    97,    81,   534,     1,   298,
       1,    81,    93,   534,   303,    77,     7,    85,    78,    77,
      77,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,   449,
     450,    77,    84,    77,    85,    77,    81,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    81,    77,    58,     3,    76,
      83,    77,    81,    81,   484,   485,     1,    81,    83,    81,
      71,    77,     7,    81,    77,    78,    79,    81,    81,    81,
      85,    84,    85,    86,    87,    88,    89,    77,   387,    92,
      93,    94,    95,    96,    97,    98,    99,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    77,    79,    81,    79,    79,    60,   436,    81,    81,
      81,   534,    81,   232,    69,    85,    71,    85,    73,    74,
      75,    81,    85,    78,   233,   235,   144,   136,    83,     1,
      85,     3,     4,     5,     6,     7,     8,     9,    10,   236,
      12,    13,   399,    85,    99,   303,   395,   174,    44,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     1,    69,    70,    71,
      72,    73,     7,    75,    76,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    85,    86,    87,    88,    89,    90,    91,
      -1,    93,    -1,    -1,    -1,    97,    -1,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     1,    69,    -1,    71,    -1,    73,     7,
      75,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      85,    -1,    -1,    88,    89,    -1,    -1,    -1,    93,    -1,
      -1,    -1,    97,    -1,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    69,    -1,    71,    -1,    73,     1,    75,     3,     4,
       5,     6,     7,     8,     9,    10,    -1,    12,    13,    -1,
      88,    89,    -1,    -1,    -1,    93,    -1,    -1,    -1,    97,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    -1,    57,    58,    59,    -1,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    -1,    -1,    -1,    -1,    -1,    -1,    83,    84,
      85,    86,    87,    88,    89,    90,    91,     1,    -1,     3,
       4,     5,     6,     7,     8,     9,    10,    -1,    12,    13,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    -1,    57,    58,    59,    -1,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    -1,    -1,    -1,    -1,    -1,    -1,    83,
      84,    85,    86,    87,    88,    89,    90,    91,     1,    -1,
       3,     4,     5,     6,     7,     8,     9,    10,    -1,    12,
      13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,     1,    -1,     3,     4,     5,     6,     7,
       8,     9,    10,    -1,    12,    13,    69,    70,    71,    72,
      73,    74,    75,    76,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    85,    86,    87,    88,    89,    90,    91,    -1,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,     1,    -1,
       3,     4,     5,     6,     7,     8,     9,    10,    -1,    12,
      13,    -1,    70,    71,    72,    -1,    -1,    -1,    76,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,    87,
      88,    89,    90,    91,    -1,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,     1,    -1,     3,     4,     5,     6,     7,
       8,     9,    10,    -1,    12,    13,    -1,    70,    71,    72,
      -1,    -1,    -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    86,    87,    88,    89,    90,    91,    -1,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,     1,    -1,
       3,     4,     5,     6,    -1,     8,     9,    10,    -1,    12,
      13,    -1,    70,    71,    72,    -1,    -1,    -1,    76,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,    87,
      88,    89,    90,    91,    -1,    -1,    -1,     1,    -1,     3,
       4,     5,     6,    -1,     8,     9,    10,    -1,    12,    13,
      -1,    -1,    -1,    -1,    57,    58,    59,    -1,    61,    62,
      63,    64,    65,    66,    67,    68,    -1,    70,    -1,    72,
      34,    -1,    -1,    76,    38,    39,    40,    -1,    -1,    -1,
      83,    -1,    85,    86,    87,    88,    89,    90,    91,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    70,    71,    72,    -1,
      -1,    -1,    76,    -1,    -1,    -1,    -1,    81,    -1,    -1,
      -1,    -1,    86,    87,    88,    89,    90,    91,     1,    -1,
       3,     4,     5,     6,    -1,     8,     9,    10,    -1,    12,
      13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     1,    -1,     3,     4,     5,     6,    -1,     8,     9,
      10,    34,    12,    13,    -1,    38,    39,    40,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    34,    -1,    -1,    -1,    38,    39,
      40,    -1,    -1,    -1,    -1,    -1,    -1,    70,    71,    72,
      -1,    -1,    -1,    76,    -1,    -1,    -1,    -1,    81,    -1,
      -1,    -1,    -1,    86,    87,    88,    89,    90,    91,    -1,
      70,    71,    72,    -1,    -1,    -1,    76,    -1,    -1,    -1,
      -1,    81,    -1,    -1,    -1,    -1,    86,    87,    88,    89,
      90,    91,     1,    -1,     3,     4,     5,     6,    -1,     8,
       9,    10,    -1,    12,    13,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     1,    -1,     3,     4,     5,
       6,    -1,     8,     9,    10,    34,    12,    13,    -1,    38,
      39,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,    -1,
      -1,    -1,    38,    39,    40,    -1,    -1,    -1,    -1,    -1,
      -1,    70,    71,    72,    -1,    -1,    -1,    76,    -1,    -1,
      -1,    -1,    81,    -1,    -1,    -1,    -1,    86,    87,    88,
      89,    90,    91,    -1,    70,    71,    72,    -1,    -1,    -1,
      76,    -1,    -1,    -1,    -1,    81,    -1,    -1,    -1,    -1,
      86,    87,    88,    89,    90,    91,     1,    -1,     3,     4,
       5,     6,    -1,     8,     9,    10,    -1,    12,    13,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,
      -1,     3,     4,     5,     6,    -1,     8,     9,    10,    34,
      12,    13,    -1,    38,    39,    40,    -1,    -1,    -1,    -1,
      -1,     1,    -1,     3,     4,     5,     6,    -1,     8,     9,
      10,    -1,    12,    13,    -1,    -1,    38,    39,    40,    -1,
      -1,    -1,    -1,    -1,    -1,    70,    71,    72,    -1,    -1,
      -1,    76,    -1,    -1,    -1,    -1,    81,    -1,    -1,    -1,
      -1,    86,    87,    88,    89,    90,    91,    -1,    70,    71,
      72,    -1,    -1,    -1,    76,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    86,    87,    88,    89,    90,    91,
      70,    -1,    72,    -1,    -1,    -1,    76,    -1,    -1,    -1,
      80,    -1,    82,    83,    84,    -1,    86,    87,    88,    89,
      90,    91,     1,    -1,     3,     4,     5,     6,    -1,     8,
       9,    10,    -1,    12,    13,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     1,    -1,     3,     4,     5,     6,
      -1,     8,     9,    10,    -1,    12,    13,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,     3,     4,
       5,     6,    -1,     8,     9,    10,    -1,    12,    13,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    70,    -1,    72,    -1,    -1,    -1,    76,    -1,    -1,
      -1,    80,    -1,    82,    83,    84,    -1,    86,    87,    88,
      89,    90,    91,    70,    -1,    72,    -1,    -1,    -1,    76,
      -1,    -1,    -1,    80,    -1,    82,    83,    -1,    -1,    86,
      87,    88,    89,    90,    91,    70,    -1,    72,    -1,    -1,
      -1,    76,    -1,    -1,    -1,    80,    -1,    82,    83,    -1,
      -1,    86,    87,    88,    89,    90,    91,     1,    -1,     3,
       4,     5,     6,    -1,     8,     9,    10,    -1,    12,    13,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,
      -1,     3,     4,     5,     6,    -1,     8,     9,    10,    -1,
      12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     1,    -1,     3,     4,     5,     6,    -1,     8,     9,
      10,    -1,    12,    13,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    70,    -1,    72,    -1,
      -1,    -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,    83,
      -1,    -1,    86,    87,    88,    89,    90,    91,    70,    -1,
      72,    -1,    -1,    -1,    76,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    85,    86,    87,    88,    89,    90,    91,
      70,    -1,    72,    -1,    -1,    -1,    76,    77,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    86,    87,    88,    89,
      90,    91,     1,    -1,     3,     4,     5,     6,    -1,     8,
       9,    10,    -1,    12,    13,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     1,    -1,     3,     4,     5,     6,
      -1,     8,     9,    10,    -1,    12,    13,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,     3,     4,
       5,     6,    -1,     8,     9,    10,    -1,    12,    13,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    70,    -1,    72,    -1,    -1,    -1,    76,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    85,    86,    87,    88,
      89,    90,    91,    70,    -1,    72,    -1,    -1,    -1,    76,
      -1,    -1,    -1,    -1,    -1,    -1,    83,    -1,    -1,    86,
      87,    88,    89,    90,    91,    70,    -1,    72,    -1,    -1,
      -1,    76,    77,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    86,    87,    88,    89,    90,    91,     1,    -1,     3,
       4,     5,     6,    -1,     8,     9,    10,    -1,    12,    13,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,
      -1,     3,     4,     5,     6,    -1,     8,     9,    10,    -1,
      12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     1,    -1,     3,     4,     5,     6,    -1,     8,     9,
      10,    -1,    12,    13,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    70,    -1,    72,    -1,
      -1,    -1,    76,    77,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    86,    87,    88,    89,    90,    91,    70,    -1,
      72,    -1,    -1,    -1,    76,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    86,    87,    88,    89,    90,    91,
      70,    -1,    72,    -1,    -1,    -1,    76,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    86,    87,    88,    89,
      90,    91,     1,    -1,     3,     4,     5,     6,    -1,     8,
       9,    10,    -1,    12,    13,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     1,    -1,     3,     4,     5,     6,
      -1,     8,     9,    10,    -1,    12,    13,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,     3,     4,
       5,     6,    -1,     8,     9,    10,    -1,    12,    13,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    70,    -1,    72,    -1,    -1,    -1,    76,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,    87,    88,
      89,    90,    91,    70,    -1,    72,    -1,    -1,    -1,    76,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,
      87,    88,    89,    90,    91,    70,    -1,    72,    -1,    -1,
      -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    86,    87,    88,    89,    90,    91,     1,    -1,     3,
       4,     5,     6,    -1,     8,     9,    10,    -1,    12,    13,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,
      -1,     3,     4,     5,     6,    -1,     8,     9,    10,    -1,
      12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     1,    -1,     3,     4,     5,     6,    -1,     8,     9,
      10,    -1,    12,    13,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    70,    -1,    72,    -1,
      -1,    -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    86,    87,    88,    89,    90,    91,    70,    -1,
      72,    -1,    -1,    -1,    76,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    86,    87,    88,    89,    90,    91,
      70,    -1,    72,    -1,    -1,    -1,    76,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    86,    87,    88,    89,
      90,    91,     1,    -1,     3,     4,     5,     6,    -1,     8,
       9,    10,    -1,    12,    13,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     1,    -1,     3,     4,     5,     6,
      -1,     8,     9,    10,    -1,    12,    13,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,     3,     4,
       5,     6,    -1,     8,     9,    10,    -1,    12,    13,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    70,    -1,    72,    -1,    -1,    -1,    76,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,    87,    88,
      89,    90,    91,    70,    -1,    72,    -1,    -1,    -1,    76,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,
      87,    88,    89,    90,    91,    70,    -1,    72,    -1,    -1,
      -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    86,    87,    88,    89,    90,    91,     1,    -1,     3,
       4,     5,     6,    -1,     8,     9,    10,    -1,    12,    13,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,
      -1,     3,     4,     5,     6,    -1,     8,     9,    10,    -1,
      12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     1,    -1,     3,     4,     5,     6,    -1,     8,     9,
      10,    -1,    12,    13,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    70,    -1,    72,    -1,
      -1,    -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    86,    87,    88,    89,    90,    91,    70,    -1,
      72,    -1,    -1,    -1,    76,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    86,    87,    88,    89,    90,    91,
      70,    -1,    72,    -1,    -1,    -1,    76,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    86,    87,    88,    89,
      90,    91,     1,    -1,     3,     4,     5,     6,    -1,     8,
       9,    10,    -1,    12,    13,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     1,    -1,     3,     4,     5,     6,
      -1,     8,     9,    10,    -1,    12,    13,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,     3,     4,
       5,     6,    -1,     8,     9,    10,    -1,    12,    13,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    70,    -1,    72,    -1,    -1,    -1,    76,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,    87,    88,
      89,    90,    91,    70,    -1,    72,    -1,    -1,    -1,    76,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,
      87,    88,    89,    90,    91,    70,    -1,    72,    -1,    -1,
      -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    86,    87,    88,    89,    90,    91,     1,    -1,     3,
       4,     5,     6,    -1,     8,     9,    10,    -1,    12,    13,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,
      -1,     3,     4,     5,     6,    -1,     8,     9,    10,    -1,
      12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     1,    -1,     3,     4,     5,     6,    -1,     8,     9,
      10,    -1,    12,    13,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    70,    -1,    72,    -1,
      -1,    -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    86,    87,    88,    89,    90,    91,    70,    -1,
      72,    -1,    -1,    -1,    76,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    86,    87,    88,    89,    90,    91,
      70,    -1,    72,    -1,    -1,    -1,    76,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    86,    87,    88,    89,
      90,    91,     1,    -1,     3,     4,     5,     6,    -1,     8,
       9,    10,    -1,    12,    13,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,
      -1,     8,     9,    10,    -1,    12,    13,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,    -1,     8,     9,    10,    -1,    12,    13,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    70,    -1,    72,    -1,    -1,    -1,    76,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,    87,    88,
      89,    90,    91,    70,    -1,    72,    -1,    -1,    -1,    76,
      -1,    -1,    -1,    -1,    -1,    -1,    83,    -1,    -1,    86,
      87,    88,    89,    90,    91,    70,    -1,    72,    -1,    -1,
      -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    86,    87,    88,    89,    90,    91,     3,     4,     5,
       6,    -1,     8,     9,    10,     1,    12,    13,    -1,    -1,
      -1,     7,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,    -1,     8,     9,    10,    -1,    12,    13,
      -1,    -1,    -1,    -1,    -1,    -1,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      -1,    -1,    -1,    -1,    70,    -1,    72,    -1,    -1,    -1,
      76,    -1,    -1,    69,    -1,    71,    -1,    73,    74,    75,
      86,    87,    88,    89,    90,    91,    70,     1,    72,     3,
      -1,    -1,    76,     7,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    86,    87,    88,    89,    90,    91,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    33,
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
      -1,    75,    76,    77,    -1,    -1,    80,    -1,    -1,    -1,
      -1,    -1,    -1,    87,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    -1,     1,
      -1,    -1,    -1,    -1,    -1,     7,    -1,    -1,    -1,    -1,
      -1,    69,    -1,    71,    -1,    73,    -1,    75,    76,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,    -1,    87,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    -1,     1,    -1,    -1,    -1,    -1,
      -1,     7,    -1,    -1,    -1,    -1,    -1,    69,    -1,    71,
      -1,    73,    -1,    75,    76,    77,    -1,    -1,    80,    -1,
      -1,    -1,    -1,    -1,    -1,    87,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
       1,    -1,    -1,    -1,    -1,    -1,     7,    -1,    -1,    -1,
      -1,    -1,    -1,    69,    -1,    71,    -1,    73,    -1,    75,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,
      -1,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,     7,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,    -1,
      71,    -1,    73,    74,    75,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    83,    -1,    -1,    -1,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,     7,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,
      -1,    -1,    74,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    84,    -1,    -1,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,     1,    -1,     3,    -1,    -1,    -1,     7,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,    -1,
      -1,    74,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    84,    -1,    -1,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,     1,    -1,
      -1,    -1,    -1,    -1,     7,    -1,    -1,    -1,    -1,    -1,
      -1,    69,    -1,    71,    -1,    73,    -1,    75,    -1,    77,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,     0,     1,    -1,    -1,    -1,    -1,    -1,
       7,    -1,    -1,    -1,    -1,    -1,    69,    -1,    71,    -1,
      73,    -1,    75,    -1,    77,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,     1,
      -1,    -1,    -1,    -1,    -1,     7,    -1,    -1,    -1,    -1,
      -1,    -1,    69,    -1,    71,    -1,    73,    74,    75,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,     1,    -1,    -1,    -1,    -1,
      -1,     7,    -1,    -1,    -1,    -1,    -1,    69,    -1,    71,
      -1,    73,    -1,    75,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
       1,    -1,    -1,    -1,    -1,    -1,     7,    -1,    -1,    -1,
      -1,    -1,    -1,    69,    -1,    71,    -1,    73,    -1,    75,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,     1,    -1,    58,    -1,    -1,
      -1,     7,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      71,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
       7,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    71,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,     7,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    71,    -1,    -1,    74,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    71
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     7,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    69,    71,    73,
      74,    75,   128,   129,   132,   133,   134,   135,   141,   144,
     145,   146,   147,   164,   175,   176,   177,     1,     3,    76,
      85,    87,   129,   148,   149,   150,     3,    83,    76,    76,
      76,     1,    85,   130,   131,   148,   129,   129,     3,    83,
     129,   129,   129,     0,   176,   148,    71,   145,   150,   151,
      83,   167,    76,    80,   149,    83,     3,   103,   142,   143,
       1,     3,     4,     5,     6,     8,     9,    10,    12,    13,
      70,    72,    76,    86,    87,    88,    89,    90,    91,   101,
     102,   104,   105,   108,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   127,   133,
     138,   145,   156,   156,   127,    85,    78,    85,     1,    99,
     128,   129,   167,   178,    83,   136,   137,   138,   164,    77,
     145,   150,     1,     3,    57,    58,    59,    61,    63,    64,
      65,    66,    67,    68,    84,    85,   110,   123,   124,   126,
     128,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,     3,    77,   129,   152,   153,   154,   155,    34,    81,
      87,   124,   151,   142,    99,    78,    84,    88,    89,    93,
      97,    76,   110,    76,   110,   110,    76,    76,     1,   126,
     156,    11,    12,    13,    76,    80,    82,    83,   112,    87,
      92,    93,    88,    89,    14,    15,    16,    17,    94,    95,
      18,    19,    86,    96,    97,    20,    21,    98,    77,   138,
      76,    80,   150,   157,   158,   138,    77,    77,    78,     1,
     131,   148,    83,   124,   159,   128,   167,   136,    84,   137,
      79,    85,   139,   140,   148,    79,   127,    79,    76,    76,
     165,     1,    76,     3,    85,    85,     1,    85,   126,     1,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      99,   125,     1,    78,    85,    84,   169,    62,    76,   148,
     150,   157,    77,    78,    77,    78,   124,   151,    81,    81,
      34,    81,    87,   124,    78,    84,   127,    84,   143,     1,
     113,   113,   112,     1,   119,     1,   156,   156,     1,   156,
       1,   124,    77,     1,    77,    77,     3,    77,   109,   124,
       1,   126,     3,     1,   112,   112,     1,   112,     1,   113,
       1,   113,   114,     1,   114,     1,   115,     1,   115,     1,
     115,     1,   115,     1,   116,     1,   116,     1,   117,     1,
     118,   119,     1,   120,     1,   121,     1,   126,    77,   152,
     157,    34,    81,    87,   124,   151,   158,    76,    80,     6,
      80,    82,   159,   160,   161,   162,   163,    84,   127,    78,
      85,    79,   165,    79,   165,   126,   126,    62,   170,     1,
     128,   170,    85,    85,    85,   124,   124,     1,   124,    76,
      56,   154,     3,    81,   124,   124,    81,    81,    84,    85,
      77,    77,    77,    77,    77,    78,    78,    83,   112,     1,
      83,   112,    77,    78,    81,    81,    84,    85,    85,    79,
      79,    77,    77,   124,   151,    81,    81,    34,    81,   124,
      77,   152,    34,    81,    87,   124,   151,    77,   127,     3,
      78,    84,   159,    99,   163,   140,   127,   165,    77,    77,
      76,    77,     1,    85,    88,    89,   170,   170,   170,   126,
      81,    81,     1,    58,   106,   107,   156,   106,   160,     1,
     160,   124,   123,   123,    81,   124,   124,    81,    77,   124,
     151,    81,    81,    34,    81,   124,    85,    81,    84,   159,
     161,   165,   165,   126,   165,    77,    77,   126,    77,   126,
      77,    79,    79,    77,    78,    79,    77,    78,    84,    84,
      78,    84,    81,    81,    81,   124,   124,    81,   159,    60,
      77,   165,   165,    77,   165,    77,   165,   124,   124,     1,
     107,   124,    85,    85,    84,    81,    81,   165,    85,   165,
     165
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
     132,   133,   133,   133,   133,   133,   133,   133,   133,   133,
     133,   133,   133,   133,   133,   133,   133,   134,   134,   134,
     135,   135,   136,   136,   137,   137,   137,   138,   138,   138,
     138,   139,   139,   140,   140,   140,   141,   141,   141,   141,
     141,   142,   142,   143,   143,   144,   145,   145,   145,   145,
     146,   146,   147,   147,   148,   148,   149,   149,   149,   149,
     149,   149,   149,   149,   149,   149,   149,   149,   149,   149,
     150,   150,   150,   150,   151,   151,   152,   152,   153,   153,
     154,   154,   154,   155,   155,   156,   156,   157,   157,   157,
     158,   158,   158,   158,   158,   158,   158,   158,   158,   158,
     158,   158,   158,   158,   158,   158,   158,   158,   158,   158,
     158,   159,   159,   159,   160,   160,   160,   160,   161,   162,
     162,   163,   163,   164,   165,   165,   165,   165,   165,   165,
     166,   166,   166,   167,   167,   168,   168,   169,   169,   170,
     170,   170,   171,   171,   171,   173,   172,   172,   172,   172,
     172,   172,   172,   172,   174,   174,   174,   174,   174,   174,
     175,   175,   176,   176,   177,   177,   177,   178,   178
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
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     4,     5,     2,
       1,     1,     1,     2,     2,     3,     1,     2,     1,     2,
       1,     1,     3,     2,     3,     1,     4,     5,     5,     6,
       2,     1,     3,     3,     1,     4,     1,     1,     1,     1,
       1,     1,     4,     4,     2,     1,     1,     3,     3,     4,
       6,     5,     5,     6,     5,     4,     4,     4,     3,     4,
       3,     2,     2,     1,     1,     2,     3,     1,     1,     3,
       2,     2,     1,     1,     3,     2,     1,     2,     1,     1,
       3,     2,     3,     5,     4,     5,     4,     3,     3,     3,
       4,     6,     5,     5,     6,     4,     4,     2,     3,     3,
       4,     3,     4,     1,     2,     1,     4,     3,     2,     1,
       2,     3,     2,     7,     1,     1,     1,     1,     1,     1,
       3,     4,     3,     2,     3,     1,     2,     1,     1,     1,
       2,     2,     7,     5,     5,     0,     6,     7,     6,     7,
       6,     7,     6,     5,     3,     2,     2,     2,     3,     3,
       1,     2,     1,     1,     4,     3,     3,     1,     2
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
#line 53 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 2501 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 54 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 2507 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 74 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 2513 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 80 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 2519 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 86 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 2525 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 100 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 2531 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 101 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 2537 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 102 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 2543 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 103 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 2549 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 119 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 2555 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 134 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 2561 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 135 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 2567 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 143 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 2573 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 144 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 2579 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 151 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 2585 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 152 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 2591 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 153 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 2597 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 154 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 2603 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 161 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 2609 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 170 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 2615 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 171 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 2621 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 172 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 2627 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 173 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 2633 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 180 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 2639 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 181 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 2645 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 187 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 2651 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 193 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 2657 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 199 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 2663 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 205 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 2669 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 211 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 2675 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 217 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 2681 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 223 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 2687 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 243 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 2693 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 254 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 2699 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 255 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 2705 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 269 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 2711 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 275 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 2717 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 291:
#line 547 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 2723 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 295:
#line 557 "bison.y" /* yacc.c:1646  */
    {print_hola();}
#line 2729 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 316:
#line 591 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 2735 "bison.tab.c" /* yacc.c:1646  */
    break;


#line 2739 "bison.tab.c" /* yacc.c:1646  */
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
#line 599 "bison.y" /* yacc.c:1906  */

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
	printf("HOLA HOLA HOLA\n");
}
/*
inicio_while(){
	Crear RS “while”
	begin_Label = nueva etiqueta();
	exit_label = nueva etiqueta();
	push(while)
	generate_code(begin_label);
}*/