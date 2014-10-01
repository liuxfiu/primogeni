/* A Bison parser, made by GNU Bison 2.5.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2011 Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.5"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 268 of yacc.c  */
#line 1 "/home/obaida/Desktop/pgc2vega/primex/netsim/tools/ssfnet-xlate/generator.y"

#include <stdio.h>
#include <code_generator.h>
#include <string.h>
void yyerror(const char *str);
extern "C"
{
    int yyparse(void);
    int yylex(void);  
	int lex_setup(const char* file);
	void lex_teardown();
    int yywrap()
        {
                return 1;
        }

}
extern int yydebug; 
struct config_type   * cur_ctype;
struct config_var    * cur_cvar;
struct config_child  * cur_cchild;


/* Line 268 of yacc.c  */
#line 95 "y.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
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


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     STATE_CFG = 258,
     SHARED = 259,
     CONFIGURABLE = 260,
     CHILD_TYPE = 261,
     UNSIGNED = 262,
     SIGNED = 263,
     DOUBLE = 264,
     SHORT = 265,
     FLOAT = 266,
     VOID = 267,
     CHAR = 268,
     LONG_LONG = 269,
     LONG_INT = 270,
     LONG = 271,
     INT = 272,
     IDENTIFIER = 273,
     CONSTANT = 274,
     STRING_LITERAL = 275,
     LCURL = 276,
     RCURL = 277,
     LANGLE = 278,
     RANGLE = 279,
     SEMI = 280,
     EQ = 281,
     COMMA = 282,
     STAR = 283,
     AMPR = 284,
     COLONS = 285,
     T1 = 286,
     T2 = 287,
     T1_TPL = 288,
     T2_TPL = 289,
     TYPEID = 290,
     FILENAME = 291,
     ALIAS = 292,
     EMPTY = 293,
     DEFAULT_VALUE = 294,
     DOC_STR = 295,
     TYPE = 296,
     UNSERIALIZE_FCT = 297,
     SERIALIZE_FCT = 298,
     VISUALZIED = 299,
     STATISTIC = 300,
     MIN_COUNT = 301,
     MAX_COUNT = 302,
     IS_ALIASED = 303
   };
#endif
/* Tokens.  */
#define STATE_CFG 258
#define SHARED 259
#define CONFIGURABLE 260
#define CHILD_TYPE 261
#define UNSIGNED 262
#define SIGNED 263
#define DOUBLE 264
#define SHORT 265
#define FLOAT 266
#define VOID 267
#define CHAR 268
#define LONG_LONG 269
#define LONG_INT 270
#define LONG 271
#define INT 272
#define IDENTIFIER 273
#define CONSTANT 274
#define STRING_LITERAL 275
#define LCURL 276
#define RCURL 277
#define LANGLE 278
#define RANGLE 279
#define SEMI 280
#define EQ 281
#define COMMA 282
#define STAR 283
#define AMPR 284
#define COLONS 285
#define T1 286
#define T2 287
#define T1_TPL 288
#define T2_TPL 289
#define TYPEID 290
#define FILENAME 291
#define ALIAS 292
#define EMPTY 293
#define DEFAULT_VALUE 294
#define DOC_STR 295
#define TYPE 296
#define UNSERIALIZE_FCT 297
#define SERIALIZE_FCT 298
#define VISUALZIED 299
#define STATISTIC 300
#define MIN_COUNT 301
#define MAX_COUNT 302
#define IS_ALIASED 303




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 293 of yacc.c  */
#line 23 "/home/obaida/Desktop/pgc2vega/primex/netsim/tools/ssfnet-xlate/generator.y"

	char                 * str;
	struct config_type   * ctype_ptr;
	struct config_var    * var_ptr;
	struct config_child  * child_ptr;



/* Line 293 of yacc.c  */
#line 236 "y.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 343 of yacc.c  */
#line 248 "y.tab.c"

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
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
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
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
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
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
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
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   330

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  49
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  25
/* YYNRULES -- Number of rules.  */
#define YYNRULES  93
/* YYNRULES -- Number of states.  */
#define YYNSTATES  224

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   303

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
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     7,    10,    11,    24,    29,    34,    39,
      44,    49,    54,    59,    62,    65,    68,    72,    76,    78,
      80,    82,    84,    86,    88,    90,    92,    94,    99,   102,
     105,   109,   111,   113,   116,   119,   122,   125,   128,   131,
     134,   137,   140,   143,   146,   149,   151,   153,   155,   157,
     159,   161,   163,   165,   167,   171,   173,   177,   179,   181,
     183,   185,   190,   195,   199,   203,   206,   207,   213,   217,
     219,   224,   229,   234,   239,   244,   249,   254,   260,   266,
     272,   278,   284,   290,   296,   297,   307,   312,   317,   322,
     327,   333,   339,   345
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      50,     0,    -1,    51,    25,    50,    -1,    51,    25,    -1,
      -1,     3,    21,    53,    54,    55,    56,    58,    59,    57,
      52,    60,    22,    -1,    31,    26,    20,    25,    -1,    32,
      26,    20,    25,    -1,    33,    26,    20,    25,    -1,    34,
      26,    20,    25,    -1,    36,    26,    20,    25,    -1,    35,
      26,    20,    25,    -1,    37,    26,    20,    25,    -1,    68,
      25,    -1,    71,    25,    -1,    38,    25,    -1,    60,    68,
      25,    -1,    60,    71,    25,    -1,    18,    -1,    39,    -1,
      40,    -1,    41,    -1,    42,    -1,    43,    -1,    46,    -1,
      47,    -1,    48,    -1,    61,    23,    62,    24,    -1,    61,
      28,    -1,    61,    29,    -1,    64,    27,    62,    -1,    64,
      -1,    61,    -1,     7,    14,    -1,     7,    15,    -1,     7,
      16,    -1,     7,    10,    -1,     7,    13,    -1,     7,    17,
      -1,     8,    14,    -1,     8,    15,    -1,     8,    16,    -1,
       8,    10,    -1,     8,    13,    -1,     8,    17,    -1,    14,
      -1,    15,    -1,    16,    -1,     9,    -1,    10,    -1,    11,
      -1,    12,    -1,    13,    -1,    17,    -1,    64,    30,    61,
      -1,    61,    -1,    65,    30,    63,    -1,    63,    -1,    64,
      -1,    19,    -1,    20,    -1,     5,     4,    65,    61,    -1,
       4,     5,    65,    61,    -1,     5,    65,    61,    -1,     4,
      65,    61,    -1,    65,    61,    -1,    -1,    67,    21,    69,
      70,    22,    -1,    67,    26,    66,    -1,    67,    -1,    39,
      26,    66,    25,    -1,    40,    26,    20,    25,    -1,    41,
      26,    18,    25,    -1,    42,    26,    64,    25,    -1,    43,
      26,    64,    25,    -1,    44,    26,    19,    25,    -1,    45,
      26,    19,    25,    -1,    70,    39,    26,    66,    25,    -1,
      70,    40,    26,    20,    25,    -1,    70,    41,    26,    18,
      25,    -1,    70,    42,    26,    64,    25,    -1,    70,    43,
      26,    64,    25,    -1,    70,    44,    26,    19,    25,    -1,
      70,    45,    26,    19,    25,    -1,    -1,     6,    23,    64,
      24,    18,    21,    72,    73,    22,    -1,    46,    26,    19,
      25,    -1,    47,    26,    19,    25,    -1,    48,    26,    66,
      25,    -1,    40,    26,    20,    25,    -1,    73,    46,    26,
      19,    25,    -1,    73,    47,    26,    19,    25,    -1,    73,
      48,    26,    66,    25,    -1,    73,    40,    26,    20,    25,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,   107,   107,   108,   112,   111,   115,   117,   119,   121,
     123,   125,   127,   129,   130,   131,   132,   133,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     149,   150,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   177,   178,   181,   182,   185,   185,
     185,   187,   188,   189,   190,   191,   193,   193,   200,   208,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   233,   232,   236,   237,   238,   245,
     246,   247,   248,   255
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "STATE_CFG", "SHARED", "CONFIGURABLE",
  "CHILD_TYPE", "UNSIGNED", "SIGNED", "DOUBLE", "SHORT", "FLOAT", "VOID",
  "CHAR", "LONG_LONG", "LONG_INT", "LONG", "INT", "IDENTIFIER", "CONSTANT",
  "STRING_LITERAL", "LCURL", "RCURL", "LANGLE", "RANGLE", "SEMI", "EQ",
  "COMMA", "STAR", "AMPR", "COLONS", "T1", "T2", "T1_TPL", "T2_TPL",
  "TYPEID", "FILENAME", "ALIAS", "EMPTY", "DEFAULT_VALUE", "DOC_STR",
  "TYPE", "UNSERIALIZE_FCT", "SERIALIZE_FCT", "VISUALZIED", "STATISTIC",
  "MIN_COUNT", "MAX_COUNT", "IS_ALIASED", "$accept", "state_configs",
  "state_config", "$@1", "class_name", "extends_name", "class_tpl",
  "extends_tpl", "file_name", "type_id", "alias", "state_config_inner",
  "identifier", "tplparams", "type", "scopped_identifier", "scopped_type",
  "value", "var_prefix", "variable", "$@2", "variable_inner", "child_type",
  "$@3", "child_type_inner", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    49,    50,    50,    52,    51,    53,    54,    55,    56,
      57,    58,    59,    60,    60,    60,    60,    60,    61,    61,
      61,    61,    61,    61,    61,    61,    61,    61,    61,    61,
      62,    62,    63,    63,    63,    63,    63,    63,    63,    63,
      63,    63,    63,    63,    63,    63,    63,    63,    63,    63,
      63,    63,    63,    63,    64,    64,    65,    65,    66,    66,
      66,    67,    67,    67,    67,    67,    69,    68,    68,    68,
      70,    70,    70,    70,    70,    70,    70,    70,    70,    70,
      70,    70,    70,    70,    72,    71,    73,    73,    73,    73,
      73,    73,    73,    73
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     2,     0,    12,     4,     4,     4,     4,
       4,     4,     4,     2,     2,     2,     3,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     4,     2,     2,
       3,     1,     1,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     1,     3,     1,     1,     1,
       1,     4,     4,     3,     3,     2,     0,     5,     3,     1,
       4,     4,     4,     4,     4,     4,     4,     5,     5,     5,
       5,     5,     5,     5,     0,     9,     4,     4,     4,     4,
       5,     5,     5,     5
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     1,     3,     0,     0,     2,
       0,     0,     0,     0,     0,     0,     0,     6,     0,     0,
       0,     0,     7,     0,     0,     0,     0,     8,     0,     0,
       0,     0,     9,     0,     0,     0,     4,    11,     0,     0,
       0,    12,     0,     0,     0,     0,     0,     0,    48,    49,
      50,    51,    52,    45,    46,    47,    53,    18,     0,    19,
      20,    21,    22,    23,    24,    25,    26,     0,    32,    57,
       0,    69,     0,     0,    10,     0,     0,     0,     0,     0,
      36,    37,    33,    34,    35,    38,    42,    43,    39,    40,
      41,    44,    15,     5,     0,     0,     0,    28,    29,     0,
      65,    66,     0,    13,    14,     0,    64,     0,    63,    55,
       0,    16,    17,     0,    31,    56,     0,    59,    60,    58,
      68,    62,    61,     0,     0,    27,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    54,    30,     0,     0,
       0,     0,     0,     0,     0,    67,     0,     0,     0,     0,
       0,     0,     0,    84,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    70,
      71,    72,    73,    74,    75,    76,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    77,    78,
      79,    80,    81,    82,    83,     0,     0,     0,     0,    85,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    89,    86,    87,    88,     0,     0,     0,     0,
      93,    90,    91,    92
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,    40,     8,    12,    16,    21,    36,    26,
      31,    67,   109,   113,    69,   119,    70,   120,    71,    72,
     116,   134,    73,   168,   187
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -138
static const yytype_int16 yypact[] =
{
       3,   -14,    14,     8,   -15,  -138,     3,    18,    13,  -138,
      26,    34,    47,    42,    49,    55,    53,  -138,    63,   100,
      95,    87,  -138,   112,   118,   113,   108,  -138,   127,   159,
     140,   144,  -138,   156,   162,   157,  -138,  -138,   165,   164,
      86,  -138,   166,   160,   146,   172,     5,   249,  -138,  -138,
    -138,  -138,  -138,  -138,  -138,  -138,  -138,  -138,   171,  -138,
    -138,  -138,  -138,  -138,  -138,  -138,  -138,   101,    30,  -138,
      36,     4,   173,   180,  -138,   202,    36,   202,    36,   186,
    -138,  -138,  -138,  -138,  -138,  -138,  -138,  -138,  -138,  -138,
    -138,  -138,  -138,  -138,   196,   197,   186,  -138,  -138,   202,
      30,  -138,     9,  -138,  -138,    36,    30,    36,    30,    30,
      41,  -138,  -138,   199,    -4,  -138,   228,  -138,  -138,   167,
    -138,    30,    30,   206,   186,  -138,   186,   204,   205,   210,
     211,   212,   214,   220,   213,   218,    30,  -138,     9,   227,
     233,   186,   186,   241,   242,  -138,   248,   250,   251,   252,
     253,   254,   255,  -138,   257,   258,   259,    43,   105,   260,
     261,     9,   267,   270,   186,   186,   256,   271,   -36,  -138,
    -138,  -138,  -138,  -138,  -138,  -138,   264,   266,   268,   106,
     121,   269,   272,   273,   274,   275,   276,    -9,  -138,  -138,
    -138,  -138,  -138,  -138,  -138,   278,   277,   284,     9,  -138,
     279,   280,   281,   282,   285,   286,   287,   288,   289,   295,
     296,     9,  -138,  -138,  -138,  -138,   291,   292,   293,   294,
    -138,  -138,  -138,  -138
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -138,   298,  -138,  -138,  -138,  -138,  -138,  -138,  -138,  -138,
    -138,  -138,   -35,   169,   193,   -79,   -41,  -137,  -138,   262,
    -138,  -138,   263,  -138,  -138
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
     110,   154,    76,    78,   183,    68,     1,     4,    68,    68,
     184,   185,   186,   199,     5,    80,     7,   114,    81,    82,
      83,    84,    85,   126,   176,   101,   124,    57,   117,   118,
     102,   200,    68,     6,   105,   100,   107,   201,   202,   203,
      68,   106,    68,   108,    10,    11,    13,   114,    59,    60,
      61,    62,    63,    96,    57,    64,    65,    66,    97,    98,
      14,   207,   157,   158,    68,   123,    99,    17,   172,    18,
     121,   124,   122,   124,   219,    59,    60,    61,    62,    63,
      15,    19,    64,    65,    66,   179,   180,    20,    22,   136,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      23,    24,    25,    93,    58,    59,    60,    61,    62,    63,
     173,   191,    64,    65,    66,   124,   124,    27,    28,    29,
      59,    60,    61,    62,    63,    30,   192,    64,    65,    66,
      77,   124,    32,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    75,    34,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    33,
      35,    37,    38,    39,    42,    59,    60,    61,    62,    63,
      41,    74,    64,    65,    66,    79,    92,   124,   103,    59,
      60,    61,    62,    63,    57,   104,    64,    65,    66,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,   111,   112,   125,   135,    59,    60,    61,    62,    63,
     138,   139,    64,    65,    66,   145,   140,   141,   142,   153,
     143,    59,    60,    61,    62,    63,   144,   155,    64,    65,
      66,   156,   146,   147,   148,   149,   150,   151,   152,    86,
     159,   160,    87,    88,    89,    90,    91,   127,   128,   129,
     130,   131,   132,   133,   161,   181,   162,   163,   164,   165,
     166,   167,   169,   170,   171,   174,   175,   177,   178,   188,
     182,   189,   115,   190,   193,   137,   205,   194,   204,   195,
     196,   197,   198,   206,     9,   208,   209,   210,   211,   216,
     212,   213,   214,   215,   217,   218,   220,   221,   222,   223,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    94,
      95
};

#define yypact_value_is_default(yystate) \
  ((yystate) == (-138))

#define yytable_value_is_error(yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
      79,   138,    43,    44,    40,    40,     3,    21,    43,    44,
      46,    47,    48,    22,     0,    10,    31,    96,    13,    14,
      15,    16,    17,    27,   161,    21,    30,    18,    19,    20,
      26,    40,    67,    25,    75,    70,    77,    46,    47,    48,
      75,    76,    77,    78,    26,    32,    20,   126,    39,    40,
      41,    42,    43,    23,    18,    46,    47,    48,    28,    29,
      26,   198,   141,   142,    99,    24,    30,    25,    25,    20,
     105,    30,   107,    30,   211,    39,    40,    41,    42,    43,
      33,    26,    46,    47,    48,   164,   165,    34,    25,   124,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      20,    26,    35,    22,    38,    39,    40,    41,    42,    43,
      25,    25,    46,    47,    48,    30,    30,    25,    20,    26,
      39,    40,    41,    42,    43,    37,    25,    46,    47,    48,
       4,    30,    25,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,     5,    26,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    20,
      36,    25,    20,    26,    20,    39,    40,    41,    42,    43,
      25,    25,    46,    47,    48,    23,    25,    30,    25,    39,
      40,    41,    42,    43,    18,    25,    46,    47,    48,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    25,    25,    24,    18,    39,    40,    41,    42,    43,
      26,    26,    46,    47,    48,    22,    26,    26,    26,    21,
      26,    39,    40,    41,    42,    43,    26,    20,    46,    47,
      48,    18,    39,    40,    41,    42,    43,    44,    45,    10,
      19,    19,    13,    14,    15,    16,    17,    39,    40,    41,
      42,    43,    44,    45,    26,    19,    26,    26,    26,    26,
      26,    26,    25,    25,    25,    25,    25,    20,    18,    25,
      19,    25,    99,    25,    25,   126,    19,    25,    20,    26,
      26,    26,    26,    19,     6,    26,    26,    26,    26,    20,
      25,    25,    25,    25,    19,    19,    25,    25,    25,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,
      67
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    50,    51,    21,     0,    25,    31,    53,    50,
      26,    32,    54,    20,    26,    33,    55,    25,    20,    26,
      34,    56,    25,    20,    26,    35,    58,    25,    20,    26,
      37,    59,    25,    20,    26,    36,    57,    25,    20,    26,
      52,    25,    20,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    38,    39,
      40,    41,    42,    43,    46,    47,    48,    60,    61,    63,
      65,    67,    68,    71,    25,     5,    65,     4,    65,    23,
      10,    13,    14,    15,    16,    17,    10,    13,    14,    15,
      16,    17,    25,    22,    68,    71,    23,    28,    29,    30,
      61,    21,    26,    25,    25,    65,    61,    65,    61,    61,
      64,    25,    25,    62,    64,    63,    69,    19,    20,    64,
      66,    61,    61,    24,    30,    24,    27,    39,    40,    41,
      42,    43,    44,    45,    70,    18,    61,    62,    26,    26,
      26,    26,    26,    26,    26,    22,    39,    40,    41,    42,
      43,    44,    45,    21,    66,    20,    18,    64,    64,    19,
      19,    26,    26,    26,    26,    26,    26,    26,    72,    25,
      25,    25,    25,    25,    25,    25,    66,    20,    18,    64,
      64,    19,    19,    40,    46,    47,    48,    73,    25,    25,
      25,    25,    25,    25,    25,    26,    26,    26,    26,    22,
      40,    46,    47,    48,    20,    19,    19,    66,    26,    26,
      26,    26,    25,    25,    25,    25,    20,    19,    19,    66,
      25,    25,    25,    25
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
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
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


/* This macro is provided for backward compatibility. */

#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
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
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
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
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
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
  YYSIZE_T yysize0 = yytnamerr (0, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  YYSIZE_T yysize1;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = 0;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
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
                yysize1 = yysize + yytnamerr (0, yytname[yyx]);
                if (! (yysize <= yysize1
                       && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                  return 2;
                yysize = yysize1;
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

  yysize1 = yysize + yystrlen (yyformat);
  if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
    return 2;
  yysize = yysize1;

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


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
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
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
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
  int yytoken;
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

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

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
        case 4:

/* Line 1806 of yacc.c  */
#line 112 "/home/obaida/Desktop/pgc2vega/primex/netsim/tools/ssfnet-xlate/generator.y"
    {cur_ctype=addConfigType((yyvsp[(3) - (9)].str), (yyvsp[(5) - (9)].str), (yyvsp[(4) - (9)].str), (yyvsp[(6) - (9)].str), (yyvsp[(7) - (9)].str), (yyvsp[(8) - (9)].str), (yyvsp[(9) - (9)].str)); }
    break;

  case 5:

/* Line 1806 of yacc.c  */
#line 113 "/home/obaida/Desktop/pgc2vega/primex/netsim/tools/ssfnet-xlate/generator.y"
    {(yyval.ctype_ptr) = getHead(); }
    break;

  case 6:

/* Line 1806 of yacc.c  */
#line 115 "/home/obaida/Desktop/pgc2vega/primex/netsim/tools/ssfnet-xlate/generator.y"
    { (yyval.str)=(yyvsp[(3) - (4)].str); }
    break;

  case 7:

/* Line 1806 of yacc.c  */
#line 117 "/home/obaida/Desktop/pgc2vega/primex/netsim/tools/ssfnet-xlate/generator.y"
    {(yyval.str)=(yyvsp[(3) - (4)].str); }
    break;

  case 8:

/* Line 1806 of yacc.c  */
#line 119 "/home/obaida/Desktop/pgc2vega/primex/netsim/tools/ssfnet-xlate/generator.y"
    { (yyval.str)=(yyvsp[(3) - (4)].str); }
    break;

  case 9:

/* Line 1806 of yacc.c  */
#line 121 "/home/obaida/Desktop/pgc2vega/primex/netsim/tools/ssfnet-xlate/generator.y"
    {(yyval.str)=(yyvsp[(3) - (4)].str); }
    break;

  case 10:

/* Line 1806 of yacc.c  */
#line 123 "/home/obaida/Desktop/pgc2vega/primex/netsim/tools/ssfnet-xlate/generator.y"
    { (yyval.str)=(yyvsp[(3) - (4)].str); }
    break;

  case 11:

/* Line 1806 of yacc.c  */
#line 125 "/home/obaida/Desktop/pgc2vega/primex/netsim/tools/ssfnet-xlate/generator.y"
    { (yyval.str)=(yyvsp[(3) - (4)].str); }
    break;

  case 12:

/* Line 1806 of yacc.c  */
#line 127 "/home/obaida/Desktop/pgc2vega/primex/netsim/tools/ssfnet-xlate/generator.y"
    { (yyval.str)=(yyvsp[(3) - (4)].str); }
    break;

  case 13:

/* Line 1806 of yacc.c  */
#line 129 "/home/obaida/Desktop/pgc2vega/primex/netsim/tools/ssfnet-xlate/generator.y"
    { (yyval.ctype_ptr) = 0;}
    break;

  case 14:

/* Line 1806 of yacc.c  */
#line 130 "/home/obaida/Desktop/pgc2vega/primex/netsim/tools/ssfnet-xlate/generator.y"
    { (yyval.ctype_ptr) = 0;}
    break;

  case 15:

/* Line 1806 of yacc.c  */
#line 131 "/home/obaida/Desktop/pgc2vega/primex/netsim/tools/ssfnet-xlate/generator.y"
    { (yyval.ctype_ptr) = 0;}
    break;

  case 16:

/* Line 1806 of yacc.c  */
#line 132 "/home/obaida/Desktop/pgc2vega/primex/netsim/tools/ssfnet-xlate/generator.y"
    { (yyval.ctype_ptr) = 0;}
    break;

  case 17:

/* Line 1806 of yacc.c  */
#line 133 "/home/obaida/Desktop/pgc2vega/primex/netsim/tools/ssfnet-xlate/generator.y"
    { (yyval.ctype_ptr) = 0;}
    break;

  case 27:

/* Line 1806 of yacc.c  */
#line 144 "/home/obaida/Desktop/pgc2vega/primex/netsim/tools/ssfnet-xlate/generator.y"
    {(yyval.str) = (char*)malloc(strlen((yyvsp[(1) - (4)].str))+strlen((yyvsp[(2) - (4)].str))+6); sprintf((yyval.str),"%s < %s >",(yyvsp[(1) - (4)].str),(yyvsp[(3) - (4)].str)); }
    break;

  case 28:

/* Line 1806 of yacc.c  */
#line 145 "/home/obaida/Desktop/pgc2vega/primex/netsim/tools/ssfnet-xlate/generator.y"
    {(yyval.str) = (char*)malloc(strlen((yyvsp[(1) - (2)].str))+3); sprintf((yyval.str),"%s *",(yyvsp[(1) - (2)].str)); }
    break;

  case 29:

/* Line 1806 of yacc.c  */
#line 146 "/home/obaida/Desktop/pgc2vega/primex/netsim/tools/ssfnet-xlate/generator.y"
    {(yyval.str) = (char*)malloc(strlen((yyvsp[(1) - (2)].str))+3); sprintf((yyval.str),"%s &",(yyvsp[(1) - (2)].str)); }
    break;

  case 30:

/* Line 1806 of yacc.c  */
#line 149 "/home/obaida/Desktop/pgc2vega/primex/netsim/tools/ssfnet-xlate/generator.y"
    {(yyval.str) = (char*)malloc(strlen((yyvsp[(1) - (3)].str))+strlen((yyvsp[(3) - (3)].str))+3); sprintf((yyval.str),"%s, %s",(yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].str)); }
    break;

  case 33:

/* Line 1806 of yacc.c  */
#line 154 "/home/obaida/Desktop/pgc2vega/primex/netsim/tools/ssfnet-xlate/generator.y"
    {(yyval.str) = (char*)malloc(strlen((yyvsp[(1) - (2)].str))+strlen((yyvsp[(2) - (2)].str))+2); sprintf((yyval.str),"%s %s",(yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].str)); }
    break;

  case 34:

/* Line 1806 of yacc.c  */
#line 155 "/home/obaida/Desktop/pgc2vega/primex/netsim/tools/ssfnet-xlate/generator.y"
    {(yyval.str) = (char*)malloc(strlen((yyvsp[(1) - (2)].str))+strlen((yyvsp[(2) - (2)].str))+2); sprintf((yyval.str),"%s %s",(yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].str)); }
    break;

  case 35:

/* Line 1806 of yacc.c  */
#line 156 "/home/obaida/Desktop/pgc2vega/primex/netsim/tools/ssfnet-xlate/generator.y"
    {(yyval.str) = (char*)malloc(strlen((yyvsp[(1) - (2)].str))+strlen((yyvsp[(2) - (2)].str))+2); sprintf((yyval.str),"%s %s",(yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].str)); }
    break;

  case 36:

/* Line 1806 of yacc.c  */
#line 157 "/home/obaida/Desktop/pgc2vega/primex/netsim/tools/ssfnet-xlate/generator.y"
    {(yyval.str) = (char*)malloc(strlen((yyvsp[(1) - (2)].str))+strlen((yyvsp[(2) - (2)].str))+2); sprintf((yyval.str),"%s %s",(yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].str)); }
    break;

  case 37:

/* Line 1806 of yacc.c  */
#line 158 "/home/obaida/Desktop/pgc2vega/primex/netsim/tools/ssfnet-xlate/generator.y"
    {(yyval.str) = (char*)malloc(strlen((yyvsp[(1) - (2)].str))+strlen((yyvsp[(2) - (2)].str))+2); sprintf((yyval.str),"%s %s",(yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].str)); }
    break;

  case 38:

/* Line 1806 of yacc.c  */
#line 159 "/home/obaida/Desktop/pgc2vega/primex/netsim/tools/ssfnet-xlate/generator.y"
    {(yyval.str) = (char*)malloc(strlen((yyvsp[(1) - (2)].str))+strlen((yyvsp[(2) - (2)].str))+2); sprintf((yyval.str),"%s %s",(yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].str)); }
    break;

  case 39:

/* Line 1806 of yacc.c  */
#line 160 "/home/obaida/Desktop/pgc2vega/primex/netsim/tools/ssfnet-xlate/generator.y"
    {(yyval.str) = (char*)malloc(strlen((yyvsp[(1) - (2)].str))+strlen((yyvsp[(2) - (2)].str))+2); sprintf((yyval.str),"%s %s",(yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].str)); }
    break;

  case 40:

/* Line 1806 of yacc.c  */
#line 161 "/home/obaida/Desktop/pgc2vega/primex/netsim/tools/ssfnet-xlate/generator.y"
    {(yyval.str) = (char*)malloc(strlen((yyvsp[(1) - (2)].str))+strlen((yyvsp[(2) - (2)].str))+2); sprintf((yyval.str),"%s %s",(yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].str)); }
    break;

  case 41:

/* Line 1806 of yacc.c  */
#line 162 "/home/obaida/Desktop/pgc2vega/primex/netsim/tools/ssfnet-xlate/generator.y"
    {(yyval.str) = (char*)malloc(strlen((yyvsp[(1) - (2)].str))+strlen((yyvsp[(2) - (2)].str))+2); sprintf((yyval.str),"%s %s",(yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].str)); }
    break;

  case 42:

/* Line 1806 of yacc.c  */
#line 163 "/home/obaida/Desktop/pgc2vega/primex/netsim/tools/ssfnet-xlate/generator.y"
    {(yyval.str) = (char*)malloc(strlen((yyvsp[(1) - (2)].str))+strlen((yyvsp[(2) - (2)].str))+2); sprintf((yyval.str),"%s %s",(yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].str)); }
    break;

  case 43:

/* Line 1806 of yacc.c  */
#line 164 "/home/obaida/Desktop/pgc2vega/primex/netsim/tools/ssfnet-xlate/generator.y"
    {(yyval.str) = (char*)malloc(strlen((yyvsp[(1) - (2)].str))+strlen((yyvsp[(2) - (2)].str))+2); sprintf((yyval.str),"%s %s",(yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].str)); }
    break;

  case 44:

/* Line 1806 of yacc.c  */
#line 165 "/home/obaida/Desktop/pgc2vega/primex/netsim/tools/ssfnet-xlate/generator.y"
    {(yyval.str) = (char*)malloc(strlen((yyvsp[(1) - (2)].str))+strlen((yyvsp[(2) - (2)].str))+2); sprintf((yyval.str),"%s %s",(yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].str)); }
    break;

  case 54:

/* Line 1806 of yacc.c  */
#line 177 "/home/obaida/Desktop/pgc2vega/primex/netsim/tools/ssfnet-xlate/generator.y"
    {(yyval.str) = (char*)malloc(strlen((yyvsp[(1) - (3)].str))+strlen((yyvsp[(3) - (3)].str))+3); sprintf((yyval.str),"%s::%s",(yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].str)); }
    break;

  case 56:

/* Line 1806 of yacc.c  */
#line 181 "/home/obaida/Desktop/pgc2vega/primex/netsim/tools/ssfnet-xlate/generator.y"
    {(yyval.str) = (char*)malloc(strlen((yyvsp[(1) - (3)].str))+strlen((yyvsp[(3) - (3)].str))+3); sprintf((yyval.str),"%s::%s",(yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].str)); }
    break;

  case 61:

/* Line 1806 of yacc.c  */
#line 187 "/home/obaida/Desktop/pgc2vega/primex/netsim/tools/ssfnet-xlate/generator.y"
    { (yyval.var_ptr) = addConfigVar(cur_ctype, 1, 1, 0, 0, 0, (yyvsp[(3) - (4)].str), (yyvsp[(4) - (4)].str), 0, 0, 0, 0, 0); }
    break;

  case 62:

/* Line 1806 of yacc.c  */
#line 188 "/home/obaida/Desktop/pgc2vega/primex/netsim/tools/ssfnet-xlate/generator.y"
    { (yyval.var_ptr) = addConfigVar(cur_ctype, 1, 1, 0, 0, 0, (yyvsp[(3) - (4)].str), (yyvsp[(4) - (4)].str), 0, 0, 0, 0, 0); }
    break;

  case 63:

/* Line 1806 of yacc.c  */
#line 189 "/home/obaida/Desktop/pgc2vega/primex/netsim/tools/ssfnet-xlate/generator.y"
    { (yyval.var_ptr) = addConfigVar(cur_ctype, 0, 1, 0, 0, 0, (yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str), 0, 0, 0, 0, 0); }
    break;

  case 64:

/* Line 1806 of yacc.c  */
#line 190 "/home/obaida/Desktop/pgc2vega/primex/netsim/tools/ssfnet-xlate/generator.y"
    { (yyval.var_ptr) = addConfigVar(cur_ctype, 1, 0, 0, 0, 0, (yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str), 0, 0, 0, 0, 0); }
    break;

  case 65:

/* Line 1806 of yacc.c  */
#line 191 "/home/obaida/Desktop/pgc2vega/primex/netsim/tools/ssfnet-xlate/generator.y"
    { (yyval.var_ptr) = addConfigVar(cur_ctype, 0, 0, 0, 0, 0, (yyvsp[(1) - (2)].str), (yyvsp[(2) - (2)].str), 0, 0, 0, 0, 0); }
    break;

  case 66:

/* Line 1806 of yacc.c  */
#line 193 "/home/obaida/Desktop/pgc2vega/primex/netsim/tools/ssfnet-xlate/generator.y"
    {cur_cvar=(yyvsp[(1) - (2)].var_ptr);}
    break;

  case 67:

/* Line 1806 of yacc.c  */
#line 194 "/home/obaida/Desktop/pgc2vega/primex/netsim/tools/ssfnet-xlate/generator.y"
    { 
			(yyval.var_ptr) = cur_cvar;
			if(0==(yyval.var_ptr)->config_type) {
				figure_out_config_type((yyval.var_ptr));
			}
		}
    break;

  case 68:

/* Line 1806 of yacc.c  */
#line 201 "/home/obaida/Desktop/pgc2vega/primex/netsim/tools/ssfnet-xlate/generator.y"
    {
			(yyvsp[(1) - (3)].var_ptr)->raw_string=strdup((yyvsp[(3) - (3)].str));
			(yyval.var_ptr) = (yyvsp[(1) - (3)].var_ptr);
			if(0==(yyval.var_ptr)->config_type) {
				figure_out_config_type((yyval.var_ptr));
			}
		}
    break;

  case 69:

/* Line 1806 of yacc.c  */
#line 209 "/home/obaida/Desktop/pgc2vega/primex/netsim/tools/ssfnet-xlate/generator.y"
    {
			(yyval.var_ptr) = (yyvsp[(1) - (1)].var_ptr);
			if(0==(yyval.var_ptr)->config_type) {
				figure_out_config_type((yyval.var_ptr));
			}
		}
    break;

  case 70:

/* Line 1806 of yacc.c  */
#line 216 "/home/obaida/Desktop/pgc2vega/primex/netsim/tools/ssfnet-xlate/generator.y"
    { cur_cvar->default_value=strdup((yyvsp[(3) - (4)].str)); (yyval.var_ptr) = cur_cvar; }
    break;

  case 71:

/* Line 1806 of yacc.c  */
#line 217 "/home/obaida/Desktop/pgc2vega/primex/netsim/tools/ssfnet-xlate/generator.y"
    { cur_cvar->doc_string=strdup((yyvsp[(3) - (4)].str)); (yyval.var_ptr) = cur_cvar; }
    break;

  case 72:

/* Line 1806 of yacc.c  */
#line 218 "/home/obaida/Desktop/pgc2vega/primex/netsim/tools/ssfnet-xlate/generator.y"
    { cur_cvar->config_type=strdup((yyvsp[(3) - (4)].str)); (yyval.var_ptr) = cur_cvar; }
    break;

  case 73:

/* Line 1806 of yacc.c  */
#line 219 "/home/obaida/Desktop/pgc2vega/primex/netsim/tools/ssfnet-xlate/generator.y"
    { cur_cvar->unserialize_fct=strdup((yyvsp[(3) - (4)].str)); (yyval.var_ptr) = cur_cvar; }
    break;

  case 74:

/* Line 1806 of yacc.c  */
#line 220 "/home/obaida/Desktop/pgc2vega/primex/netsim/tools/ssfnet-xlate/generator.y"
    { cur_cvar->serialize_fct=strdup((yyvsp[(3) - (4)].str)); (yyval.var_ptr) = cur_cvar; }
    break;

  case 75:

/* Line 1806 of yacc.c  */
#line 221 "/home/obaida/Desktop/pgc2vega/primex/netsim/tools/ssfnet-xlate/generator.y"
    {cur_cvar->is_visualized=(strcmp((yyvsp[(3) - (4)].str),"true")==0)?1:(strcmp((yyvsp[(3) - (4)].str),"TRUE")==0?1:0); (yyval.var_ptr) = cur_cvar; }
    break;

  case 76:

/* Line 1806 of yacc.c  */
#line 222 "/home/obaida/Desktop/pgc2vega/primex/netsim/tools/ssfnet-xlate/generator.y"
    {cur_cvar->is_stat=(strcmp((yyvsp[(3) - (4)].str),"true")==0)?1:(strcmp((yyvsp[(3) - (4)].str),"TRUE")==0?1:0); (yyval.var_ptr) = cur_cvar; }
    break;

  case 77:

/* Line 1806 of yacc.c  */
#line 223 "/home/obaida/Desktop/pgc2vega/primex/netsim/tools/ssfnet-xlate/generator.y"
    { cur_cvar->default_value=strdup((yyvsp[(4) - (5)].str)); (yyval.var_ptr) = cur_cvar; }
    break;

  case 78:

/* Line 1806 of yacc.c  */
#line 224 "/home/obaida/Desktop/pgc2vega/primex/netsim/tools/ssfnet-xlate/generator.y"
    { cur_cvar->doc_string=strdup((yyvsp[(4) - (5)].str)); (yyval.var_ptr) = cur_cvar; }
    break;

  case 79:

/* Line 1806 of yacc.c  */
#line 225 "/home/obaida/Desktop/pgc2vega/primex/netsim/tools/ssfnet-xlate/generator.y"
    { cur_cvar->config_type=strdup((yyvsp[(4) - (5)].str)); (yyval.var_ptr) = cur_cvar; }
    break;

  case 80:

/* Line 1806 of yacc.c  */
#line 226 "/home/obaida/Desktop/pgc2vega/primex/netsim/tools/ssfnet-xlate/generator.y"
    { cur_cvar->unserialize_fct=strdup((yyvsp[(4) - (5)].str)); (yyval.var_ptr) = cur_cvar; }
    break;

  case 81:

/* Line 1806 of yacc.c  */
#line 227 "/home/obaida/Desktop/pgc2vega/primex/netsim/tools/ssfnet-xlate/generator.y"
    { cur_cvar->serialize_fct=strdup((yyvsp[(4) - (5)].str)); (yyval.var_ptr) = cur_cvar; }
    break;

  case 82:

/* Line 1806 of yacc.c  */
#line 228 "/home/obaida/Desktop/pgc2vega/primex/netsim/tools/ssfnet-xlate/generator.y"
    { cur_cvar->is_visualized=(strcmp((yyvsp[(4) - (5)].str),"true")==0)?1:(strcmp((yyvsp[(4) - (5)].str),"TRUE")==0?1:0); (yyval.var_ptr) = cur_cvar; }
    break;

  case 83:

/* Line 1806 of yacc.c  */
#line 229 "/home/obaida/Desktop/pgc2vega/primex/netsim/tools/ssfnet-xlate/generator.y"
    { cur_cvar->is_stat=(strcmp((yyvsp[(4) - (5)].str),"true")==0)?1:(strcmp((yyvsp[(4) - (5)].str),"TRUE")==0?1:0); (yyval.var_ptr) = cur_cvar; }
    break;

  case 84:

/* Line 1806 of yacc.c  */
#line 233 "/home/obaida/Desktop/pgc2vega/primex/netsim/tools/ssfnet-xlate/generator.y"
    { cur_cchild =  addConfigChild(cur_ctype, (yyvsp[(3) - (6)].str), (yyvsp[(5) - (6)].str), 0, 0, 0, 0 ); }
    break;

  case 85:

/* Line 1806 of yacc.c  */
#line 234 "/home/obaida/Desktop/pgc2vega/primex/netsim/tools/ssfnet-xlate/generator.y"
    { (yyval.child_ptr) = cur_cchild; }
    break;

  case 86:

/* Line 1806 of yacc.c  */
#line 236 "/home/obaida/Desktop/pgc2vega/primex/netsim/tools/ssfnet-xlate/generator.y"
    { cur_cchild->min=strdup((yyvsp[(3) - (4)].str)); (yyval.child_ptr) = 0; }
    break;

  case 87:

/* Line 1806 of yacc.c  */
#line 237 "/home/obaida/Desktop/pgc2vega/primex/netsim/tools/ssfnet-xlate/generator.y"
    { cur_cchild->max=strdup((yyvsp[(3) - (4)].str)); (yyval.child_ptr) = 0; }
    break;

  case 88:

/* Line 1806 of yacc.c  */
#line 238 "/home/obaida/Desktop/pgc2vega/primex/netsim/tools/ssfnet-xlate/generator.y"
    {
				cur_cchild->is_aliased=false;
				if(0!=strcasecmp("false",(yyvsp[(3) - (4)].str)) && 0!=strcmp("0",(yyvsp[(3) - (4)].str))) {
					cur_cchild->is_aliased=true;
				}
				(yyval.child_ptr) = 0;
			}
    break;

  case 89:

/* Line 1806 of yacc.c  */
#line 245 "/home/obaida/Desktop/pgc2vega/primex/netsim/tools/ssfnet-xlate/generator.y"
    { cur_cchild->doc_string=strdup((yyvsp[(3) - (4)].str)); (yyval.child_ptr) = 0; }
    break;

  case 90:

/* Line 1806 of yacc.c  */
#line 246 "/home/obaida/Desktop/pgc2vega/primex/netsim/tools/ssfnet-xlate/generator.y"
    { cur_cchild->min=strdup((yyvsp[(4) - (5)].str)); (yyval.child_ptr) = 0; }
    break;

  case 91:

/* Line 1806 of yacc.c  */
#line 247 "/home/obaida/Desktop/pgc2vega/primex/netsim/tools/ssfnet-xlate/generator.y"
    { cur_cchild->max=strdup((yyvsp[(4) - (5)].str)); (yyval.child_ptr) = 0; }
    break;

  case 92:

/* Line 1806 of yacc.c  */
#line 248 "/home/obaida/Desktop/pgc2vega/primex/netsim/tools/ssfnet-xlate/generator.y"
    {
				cur_cchild->is_aliased=false;
				if(0!=strcasecmp("false",(yyvsp[(4) - (5)].str)) && 0!=strcmp("0",(yyvsp[(4) - (5)].str))) {
					cur_cchild->is_aliased=true;
				}
				(yyval.child_ptr) = 0;
			}
    break;

  case 93:

/* Line 1806 of yacc.c  */
#line 255 "/home/obaida/Desktop/pgc2vega/primex/netsim/tools/ssfnet-xlate/generator.y"
    { cur_cchild->doc_string=strdup((yyvsp[(4) - (5)].str)); (yyval.child_ptr) = 0; }
    break;



/* Line 1806 of yacc.c  */
#line 2167 "y.tab.c"
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

#if !defined(yyoverflow) || YYERROR_VERBOSE
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



/* Line 2067 of yacc.c  */
#line 257 "/home/obaida/Desktop/pgc2vega/primex/netsim/tools/ssfnet-xlate/generator.y"

void yyerror(const char *str)
{
        fprintf(stderr,"error: %s\n",str);
}
   
int main(int argc, char** argv)
{
	yydebug=0;
	//yydebug=1;
	return __main__(argc,argv);
}
