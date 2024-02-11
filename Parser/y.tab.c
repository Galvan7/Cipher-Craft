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
#line 1 "parser.y"

	void yyerror(char* s);
	int yylex();
	#include "stdio.h"
	#include "stdlib.h"
	#include "ctype.h"
	#include "string.h"
	void ins();
	void insV();
	int flag=0;

	#define ANSI_COLOR_RED		"\x1b[31m"
	#define ANSI_COLOR_GREEN	"\x1b[32m"
	#define ANSI_COLOR_CYAN		"\x1b[36m"
	#define ANSI_COLOR_RESET	"\x1b[0m"

	extern char curid[20];
	extern char curtype[20];
	extern char curval[20];


#line 93 "y.tab.c"

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
    YYUNDEF = 257,                 /* "invalid token"  */
    IF = 258,                      /* IF  */
    INT = 259,                     /* INT  */
    CHAR = 260,                    /* CHAR  */
    FLOAT = 261,                   /* FLOAT  */
    DOUBLE = 262,                  /* DOUBLE  */
    LONG = 263,                    /* LONG  */
    SHORT = 264,                   /* SHORT  */
    SIGNED = 265,                  /* SIGNED  */
    UNSIGNED = 266,                /* UNSIGNED  */
    STRUCT = 267,                  /* STRUCT  */
    RETURN = 268,                  /* RETURN  */
    MAIN = 269,                    /* MAIN  */
    VOID = 270,                    /* VOID  */
    WHILE = 271,                   /* WHILE  */
    FOR = 272,                     /* FOR  */
    DO = 273,                      /* DO  */
    BREAK = 274,                   /* BREAK  */
    ENDIF = 275,                   /* ENDIF  */
    identifier = 276,              /* identifier  */
    integer_constant = 277,        /* integer_constant  */
    string_constant = 278,         /* string_constant  */
    float_constant = 279,          /* float_constant  */
    character_constant = 280,      /* character_constant  */
    ELSE = 281,                    /* ELSE  */
    leftshift_assignment_operator = 282, /* leftshift_assignment_operator  */
    rightshift_assignment_operator = 283, /* rightshift_assignment_operator  */
    XOR_assignment_operator = 284, /* XOR_assignment_operator  */
    OR_assignment_operator = 285,  /* OR_assignment_operator  */
    AND_assignment_operator = 286, /* AND_assignment_operator  */
    modulo_assignment_operator = 287, /* modulo_assignment_operator  */
    multiplication_assignment_operator = 288, /* multiplication_assignment_operator  */
    division_assignment_operator = 289, /* division_assignment_operator  */
    addition_assignment_operator = 290, /* addition_assignment_operator  */
    subtraction_assignment_operator = 291, /* subtraction_assignment_operator  */
    assignment_operator = 292,     /* assignment_operator  */
    OR_operator = 293,             /* OR_operator  */
    AND_operator = 294,            /* AND_operator  */
    pipe_operator = 295,           /* pipe_operator  */
    caret_operator = 296,          /* caret_operator  */
    amp_operator = 297,            /* amp_operator  */
    equality_operator = 298,       /* equality_operator  */
    inequality_operator = 299,     /* inequality_operator  */
    lessthan_assignment_operator = 300, /* lessthan_assignment_operator  */
    lessthan_operator = 301,       /* lessthan_operator  */
    greaterthan_assignment_operator = 302, /* greaterthan_assignment_operator  */
    greaterthan_operator = 303,    /* greaterthan_operator  */
    leftshift_operator = 304,      /* leftshift_operator  */
    rightshift_operator = 305,     /* rightshift_operator  */
    add_operator = 306,            /* add_operator  */
    subtract_operator = 307,       /* subtract_operator  */
    multiplication_operator = 308, /* multiplication_operator  */
    division_operator = 309,       /* division_operator  */
    modulo_operator = 310,         /* modulo_operator  */
    SIZEOF = 311,                  /* SIZEOF  */
    tilde_operator = 312,          /* tilde_operator  */
    exclamation_operator = 313,    /* exclamation_operator  */
    increment_operator = 314,      /* increment_operator  */
    decrement_operator = 315       /* decrement_operator  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define IF 258
#define INT 259
#define CHAR 260
#define FLOAT 261
#define DOUBLE 262
#define LONG 263
#define SHORT 264
#define SIGNED 265
#define UNSIGNED 266
#define STRUCT 267
#define RETURN 268
#define MAIN 269
#define VOID 270
#define WHILE 271
#define FOR 272
#define DO 273
#define BREAK 274
#define ENDIF 275
#define identifier 276
#define integer_constant 277
#define string_constant 278
#define float_constant 279
#define character_constant 280
#define ELSE 281
#define leftshift_assignment_operator 282
#define rightshift_assignment_operator 283
#define XOR_assignment_operator 284
#define OR_assignment_operator 285
#define AND_assignment_operator 286
#define modulo_assignment_operator 287
#define multiplication_assignment_operator 288
#define division_assignment_operator 289
#define addition_assignment_operator 290
#define subtraction_assignment_operator 291
#define assignment_operator 292
#define OR_operator 293
#define AND_operator 294
#define pipe_operator 295
#define caret_operator 296
#define amp_operator 297
#define equality_operator 298
#define inequality_operator 299
#define lessthan_assignment_operator 300
#define lessthan_operator 301
#define greaterthan_assignment_operator 302
#define greaterthan_operator 303
#define leftshift_operator 304
#define rightshift_operator 305
#define add_operator 306
#define subtract_operator 307
#define multiplication_operator 308
#define division_operator 309
#define modulo_operator 310
#define SIZEOF 311
#define tilde_operator 312
#define exclamation_operator 313
#define increment_operator 314
#define decrement_operator 315

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
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
  YYSYMBOL_IF = 3,                         /* IF  */
  YYSYMBOL_INT = 4,                        /* INT  */
  YYSYMBOL_CHAR = 5,                       /* CHAR  */
  YYSYMBOL_FLOAT = 6,                      /* FLOAT  */
  YYSYMBOL_DOUBLE = 7,                     /* DOUBLE  */
  YYSYMBOL_LONG = 8,                       /* LONG  */
  YYSYMBOL_SHORT = 9,                      /* SHORT  */
  YYSYMBOL_SIGNED = 10,                    /* SIGNED  */
  YYSYMBOL_UNSIGNED = 11,                  /* UNSIGNED  */
  YYSYMBOL_STRUCT = 12,                    /* STRUCT  */
  YYSYMBOL_RETURN = 13,                    /* RETURN  */
  YYSYMBOL_MAIN = 14,                      /* MAIN  */
  YYSYMBOL_VOID = 15,                      /* VOID  */
  YYSYMBOL_WHILE = 16,                     /* WHILE  */
  YYSYMBOL_FOR = 17,                       /* FOR  */
  YYSYMBOL_DO = 18,                        /* DO  */
  YYSYMBOL_BREAK = 19,                     /* BREAK  */
  YYSYMBOL_ENDIF = 20,                     /* ENDIF  */
  YYSYMBOL_identifier = 21,                /* identifier  */
  YYSYMBOL_integer_constant = 22,          /* integer_constant  */
  YYSYMBOL_string_constant = 23,           /* string_constant  */
  YYSYMBOL_float_constant = 24,            /* float_constant  */
  YYSYMBOL_character_constant = 25,        /* character_constant  */
  YYSYMBOL_ELSE = 26,                      /* ELSE  */
  YYSYMBOL_leftshift_assignment_operator = 27, /* leftshift_assignment_operator  */
  YYSYMBOL_rightshift_assignment_operator = 28, /* rightshift_assignment_operator  */
  YYSYMBOL_XOR_assignment_operator = 29,   /* XOR_assignment_operator  */
  YYSYMBOL_OR_assignment_operator = 30,    /* OR_assignment_operator  */
  YYSYMBOL_AND_assignment_operator = 31,   /* AND_assignment_operator  */
  YYSYMBOL_modulo_assignment_operator = 32, /* modulo_assignment_operator  */
  YYSYMBOL_multiplication_assignment_operator = 33, /* multiplication_assignment_operator  */
  YYSYMBOL_division_assignment_operator = 34, /* division_assignment_operator  */
  YYSYMBOL_addition_assignment_operator = 35, /* addition_assignment_operator  */
  YYSYMBOL_subtraction_assignment_operator = 36, /* subtraction_assignment_operator  */
  YYSYMBOL_assignment_operator = 37,       /* assignment_operator  */
  YYSYMBOL_OR_operator = 38,               /* OR_operator  */
  YYSYMBOL_AND_operator = 39,              /* AND_operator  */
  YYSYMBOL_pipe_operator = 40,             /* pipe_operator  */
  YYSYMBOL_caret_operator = 41,            /* caret_operator  */
  YYSYMBOL_amp_operator = 42,              /* amp_operator  */
  YYSYMBOL_equality_operator = 43,         /* equality_operator  */
  YYSYMBOL_inequality_operator = 44,       /* inequality_operator  */
  YYSYMBOL_lessthan_assignment_operator = 45, /* lessthan_assignment_operator  */
  YYSYMBOL_lessthan_operator = 46,         /* lessthan_operator  */
  YYSYMBOL_greaterthan_assignment_operator = 47, /* greaterthan_assignment_operator  */
  YYSYMBOL_greaterthan_operator = 48,      /* greaterthan_operator  */
  YYSYMBOL_leftshift_operator = 49,        /* leftshift_operator  */
  YYSYMBOL_rightshift_operator = 50,       /* rightshift_operator  */
  YYSYMBOL_add_operator = 51,              /* add_operator  */
  YYSYMBOL_subtract_operator = 52,         /* subtract_operator  */
  YYSYMBOL_multiplication_operator = 53,   /* multiplication_operator  */
  YYSYMBOL_division_operator = 54,         /* division_operator  */
  YYSYMBOL_modulo_operator = 55,           /* modulo_operator  */
  YYSYMBOL_SIZEOF = 56,                    /* SIZEOF  */
  YYSYMBOL_tilde_operator = 57,            /* tilde_operator  */
  YYSYMBOL_exclamation_operator = 58,      /* exclamation_operator  */
  YYSYMBOL_increment_operator = 59,        /* increment_operator  */
  YYSYMBOL_decrement_operator = 60,        /* decrement_operator  */
  YYSYMBOL_61_ = 61,                       /* ';'  */
  YYSYMBOL_62_ = 62,                       /* ','  */
  YYSYMBOL_63_ = 63,                       /* '['  */
  YYSYMBOL_64_ = 64,                       /* ']'  */
  YYSYMBOL_65_ = 65,                       /* '{'  */
  YYSYMBOL_66_ = 66,                       /* '}'  */
  YYSYMBOL_67_ = 67,                       /* '('  */
  YYSYMBOL_68_ = 68,                       /* ')'  */
  YYSYMBOL_69_ = 69,                       /* '.'  */
  YYSYMBOL_YYACCEPT = 70,                  /* $accept  */
  YYSYMBOL_program = 71,                   /* program  */
  YYSYMBOL_declaration_list = 72,          /* declaration_list  */
  YYSYMBOL_D = 73,                         /* D  */
  YYSYMBOL_declaration = 74,               /* declaration  */
  YYSYMBOL_variable_declaration = 75,      /* variable_declaration  */
  YYSYMBOL_variable_declaration_list = 76, /* variable_declaration_list  */
  YYSYMBOL_V = 77,                         /* V  */
  YYSYMBOL_variable_declaration_identifier = 78, /* variable_declaration_identifier  */
  YYSYMBOL_79_1 = 79,                      /* $@1  */
  YYSYMBOL_vdi = 80,                       /* vdi  */
  YYSYMBOL_identifier_array_type = 81,     /* identifier_array_type  */
  YYSYMBOL_initilization_params = 82,      /* initilization_params  */
  YYSYMBOL_initilization = 83,             /* initilization  */
  YYSYMBOL_type_specifier = 84,            /* type_specifier  */
  YYSYMBOL_unsigned_grammar = 85,          /* unsigned_grammar  */
  YYSYMBOL_signed_grammar = 86,            /* signed_grammar  */
  YYSYMBOL_long_grammar = 87,              /* long_grammar  */
  YYSYMBOL_short_grammar = 88,             /* short_grammar  */
  YYSYMBOL_structure_definition = 89,      /* structure_definition  */
  YYSYMBOL_90_2 = 90,                      /* $@2  */
  YYSYMBOL_V1 = 91,                        /* V1  */
  YYSYMBOL_structure_declaration = 92,     /* structure_declaration  */
  YYSYMBOL_function_declaration = 93,      /* function_declaration  */
  YYSYMBOL_function_declaration_type = 94, /* function_declaration_type  */
  YYSYMBOL_function_declaration_param_statement = 95, /* function_declaration_param_statement  */
  YYSYMBOL_params = 96,                    /* params  */
  YYSYMBOL_parameters_list = 97,           /* parameters_list  */
  YYSYMBOL_parameters_identifier_list = 98, /* parameters_identifier_list  */
  YYSYMBOL_parameters_identifier_list_breakup = 99, /* parameters_identifier_list_breakup  */
  YYSYMBOL_param_identifier = 100,         /* param_identifier  */
  YYSYMBOL_101_3 = 101,                    /* $@3  */
  YYSYMBOL_param_identifier_breakup = 102, /* param_identifier_breakup  */
  YYSYMBOL_statement = 103,                /* statement  */
  YYSYMBOL_compound_statement = 104,       /* compound_statement  */
  YYSYMBOL_statment_list = 105,            /* statment_list  */
  YYSYMBOL_expression_statment = 106,      /* expression_statment  */
  YYSYMBOL_conditional_statements = 107,   /* conditional_statements  */
  YYSYMBOL_conditional_statements_breakup = 108, /* conditional_statements_breakup  */
  YYSYMBOL_iterative_statements = 109,     /* iterative_statements  */
  YYSYMBOL_return_statement = 110,         /* return_statement  */
  YYSYMBOL_return_statement_breakup = 111, /* return_statement_breakup  */
  YYSYMBOL_break_statement = 112,          /* break_statement  */
  YYSYMBOL_string_initilization = 113,     /* string_initilization  */
  YYSYMBOL_array_initialization = 114,     /* array_initialization  */
  YYSYMBOL_array_int_declarations = 115,   /* array_int_declarations  */
  YYSYMBOL_array_int_declarations_breakup = 116, /* array_int_declarations_breakup  */
  YYSYMBOL_expression = 117,               /* expression  */
  YYSYMBOL_expression_breakup = 118,       /* expression_breakup  */
  YYSYMBOL_simple_expression = 119,        /* simple_expression  */
  YYSYMBOL_simple_expression_breakup = 120, /* simple_expression_breakup  */
  YYSYMBOL_and_expression = 121,           /* and_expression  */
  YYSYMBOL_and_expression_breakup = 122,   /* and_expression_breakup  */
  YYSYMBOL_unary_relation_expression = 123, /* unary_relation_expression  */
  YYSYMBOL_regular_expression = 124,       /* regular_expression  */
  YYSYMBOL_regular_expression_breakup = 125, /* regular_expression_breakup  */
  YYSYMBOL_relational_operators = 126,     /* relational_operators  */
  YYSYMBOL_sum_expression = 127,           /* sum_expression  */
  YYSYMBOL_sum_operators = 128,            /* sum_operators  */
  YYSYMBOL_term = 129,                     /* term  */
  YYSYMBOL_MULOP = 130,                    /* MULOP  */
  YYSYMBOL_factor = 131,                   /* factor  */
  YYSYMBOL_mutable = 132,                  /* mutable  */
  YYSYMBOL_mutable_breakup = 133,          /* mutable_breakup  */
  YYSYMBOL_immutable = 134,                /* immutable  */
  YYSYMBOL_call = 135,                     /* call  */
  YYSYMBOL_arguments = 136,                /* arguments  */
  YYSYMBOL_arguments_list = 137,           /* arguments_list  */
  YYSYMBOL_A = 138,                        /* A  */
  YYSYMBOL_constant = 139                  /* constant  */
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
typedef yytype_uint8 yy_state_t;

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
#define YYFINAL  33
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   225

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  70
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  70
/* YYNRULES -- Number of rules.  */
#define YYNRULES  145
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  228

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   315


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
      67,    68,     2,     2,    62,     2,    69,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    61,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    63,     2,    64,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    65,     2,    66,     2,     2,     2,     2,
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
static const yytype_int16 yyrline[] =
{
       0,    64,    64,    67,    70,    71,    74,    75,    76,    79,
      80,    83,    86,    87,    90,    90,    92,    92,    95,    96,
      99,   100,   103,   104,   105,   108,   108,   108,   108,   109,
     110,   111,   112,   113,   116,   116,   116,   116,   119,   119,
     119,   119,   122,   122,   125,   125,   128,   128,   130,   130,
     133,   137,   140,   143,   146,   146,   149,   152,   155,   156,
     159,   159,   162,   163,   166,   166,   167,   167,   168,   168,
     169,   172,   175,   176,   179,   180,   183,   186,   187,   190,
     191,   192,   195,   198,   199,   202,   205,   208,   211,   214,
     215,   218,   219,   222,   223,   224,   225,   226,   227,   228,
     229,   232,   235,   235,   238,   241,   242,   245,   246,   249,
     252,   253,   256,   256,   256,   257,   257,   257,   260,   261,
     264,   265,   268,   269,   272,   272,   272,   275,   275,   278,
     279,   282,   283,   286,   287,   287,   290,   293,   293,   296,
     299,   300,   303,   304,   305,   306
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
  "\"end of file\"", "error", "\"invalid token\"", "IF", "INT", "CHAR",
  "FLOAT", "DOUBLE", "LONG", "SHORT", "SIGNED", "UNSIGNED", "STRUCT",
  "RETURN", "MAIN", "VOID", "WHILE", "FOR", "DO", "BREAK", "ENDIF",
  "identifier", "integer_constant", "string_constant", "float_constant",
  "character_constant", "ELSE", "leftshift_assignment_operator",
  "rightshift_assignment_operator", "XOR_assignment_operator",
  "OR_assignment_operator", "AND_assignment_operator",
  "modulo_assignment_operator", "multiplication_assignment_operator",
  "division_assignment_operator", "addition_assignment_operator",
  "subtraction_assignment_operator", "assignment_operator", "OR_operator",
  "AND_operator", "pipe_operator", "caret_operator", "amp_operator",
  "equality_operator", "inequality_operator",
  "lessthan_assignment_operator", "lessthan_operator",
  "greaterthan_assignment_operator", "greaterthan_operator",
  "leftshift_operator", "rightshift_operator", "add_operator",
  "subtract_operator", "multiplication_operator", "division_operator",
  "modulo_operator", "SIZEOF", "tilde_operator", "exclamation_operator",
  "increment_operator", "decrement_operator", "';'", "','", "'['", "']'",
  "'{'", "'}'", "'('", "')'", "'.'", "$accept", "program",
  "declaration_list", "D", "declaration", "variable_declaration",
  "variable_declaration_list", "V", "variable_declaration_identifier",
  "$@1", "vdi", "identifier_array_type", "initilization_params",
  "initilization", "type_specifier", "unsigned_grammar", "signed_grammar",
  "long_grammar", "short_grammar", "structure_definition", "$@2", "V1",
  "structure_declaration", "function_declaration",
  "function_declaration_type", "function_declaration_param_statement",
  "params", "parameters_list", "parameters_identifier_list",
  "parameters_identifier_list_breakup", "param_identifier", "$@3",
  "param_identifier_breakup", "statement", "compound_statement",
  "statment_list", "expression_statment", "conditional_statements",
  "conditional_statements_breakup", "iterative_statements",
  "return_statement", "return_statement_breakup", "break_statement",
  "string_initilization", "array_initialization", "array_int_declarations",
  "array_int_declarations_breakup", "expression", "expression_breakup",
  "simple_expression", "simple_expression_breakup", "and_expression",
  "and_expression_breakup", "unary_relation_expression",
  "regular_expression", "regular_expression_breakup",
  "relational_operators", "sum_expression", "sum_operators", "term",
  "MULOP", "factor", "mutable", "mutable_breakup", "immutable", "call",
  "arguments", "arguments_list", "A", "constant", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-101)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     104,  -101,  -101,  -101,  -101,     5,     8,    20,    50,     0,
    -101,    27,  -101,   104,  -101,    15,  -101,  -101,  -101,   180,
    -101,  -101,  -101,  -101,  -101,     5,     8,  -101,  -101,     5,
       8,  -101,    28,  -101,  -101,  -101,   -20,    -6,   -21,    41,
    -101,    -2,  -101,  -101,  -101,  -101,  -101,  -101,  -101,     3,
    -101,   -26,  -101,    28,  -101,  -101,  -101,    10,   158,   140,
      21,   -16,  -101,  -101,  -101,    11,   180,  -101,     4,    54,
       9,    18,    19,   158,    16,    29,  -101,  -101,  -101,  -101,
      21,  -101,   158,    21,  -101,    28,  -101,  -101,  -101,  -101,
    -101,  -101,  -101,    17,  -101,    57,    78,  -101,   153,    70,
    -101,    69,  -101,  -101,  -101,   140,    32,  -101,    58,    81,
    -101,    63,  -101,  -101,    21,    28,  -101,  -101,    72,    21,
      21,   114,  -101,    21,  -101,   -47,   158,    65,    66,  -101,
      21,  -101,    21,  -101,  -101,  -101,  -101,  -101,  -101,  -101,
    -101,  -101,  -101,    59,    59,  -101,  -101,  -101,    59,    21,
      21,    21,    21,    21,    21,  -101,  -101,    21,   115,  -101,
    -101,  -101,    74,   100,   116,  -101,  -101,    85,  -101,    86,
      79,    89,    96,    91,  -101,  -101,  -101,  -101,    57,    78,
     -13,    70,  -101,  -101,  -101,  -101,  -101,  -101,  -101,   108,
    -101,  -101,   -15,  -101,  -101,  -101,  -101,   158,   158,    21,
      21,    21,  -101,  -101,  -101,  -101,  -101,   156,   166,  -101,
     132,   126,    96,   141,   136,   158,  -101,    21,   145,  -101,
     156,  -101,  -101,  -101,   139,  -101,  -101,  -101
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    25,    26,    27,    28,    43,    45,    41,    37,     0,
      33,     0,     2,     5,     6,     0,     8,    10,     7,    55,
      42,    29,    44,    30,    38,    43,    45,    32,    34,    43,
      45,    31,    46,     1,     4,     3,    14,     0,    13,     0,
      51,     0,    54,    39,    40,    35,    36,    14,    50,     0,
      52,    19,     9,     0,    11,    60,    56,    59,     0,    49,
       0,     0,    15,    16,    12,    63,     0,    57,     0,     0,
       0,     0,     0,     0,     0,   129,   142,   143,   144,   145,
       0,    75,    73,     0,    70,     0,    53,    65,    64,    66,
      67,    68,    69,     0,    92,   103,   106,   108,   111,   119,
     123,   128,   127,   134,   135,    49,     0,    17,     0,     0,
      18,     0,    61,    58,     0,     0,    83,    82,     0,     0,
       0,     0,    85,   138,   107,   128,    73,     0,     0,    74,
       0,   101,     0,   104,   116,   117,   113,   115,   112,   114,
     120,   121,   109,     0,     0,   124,   125,   126,     0,     0,
       0,     0,     0,     0,     0,    99,   100,     0,     0,    91,
     130,    48,     0,    24,     0,    21,    62,     0,    84,     0,
       0,     0,   141,     0,   137,    72,    71,   133,   103,   106,
     110,   118,   122,    98,    96,    97,    94,    95,    93,     0,
     132,    47,     0,    20,    22,    23,    86,     0,     0,     0,
       0,     0,   139,   136,   102,   105,   131,     0,    78,    79,
       0,     0,   141,    90,     0,     0,    76,     0,     0,   140,
       0,    88,    87,    77,     0,    81,    89,    80
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -101,  -101,   195,  -101,  -101,     2,   -28,  -101,  -101,  -101,
    -101,  -101,  -101,  -101,     7,  -101,  -101,   -12,    26,  -101,
    -101,   105,  -101,  -101,  -101,  -101,  -101,   143,  -101,  -101,
    -101,  -101,  -101,   -55,  -101,    87,  -101,  -101,  -101,  -101,
    -101,  -101,  -101,    48,  -101,    -8,  -101,   -60,  -101,  -100,
      36,    88,    38,   -75,  -101,  -101,  -101,    77,  -101,    71,
    -101,    73,   -79,  -101,  -101,  -101,  -101,  -101,    12,  -101
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,    11,    12,    35,    13,    84,    37,    54,    38,    51,
      62,    63,   110,   193,    85,    31,    27,    21,    23,    16,
      49,   106,    17,    18,    19,    40,    41,    42,    56,    67,
      57,    65,   112,   126,    87,   127,    88,    89,   216,    90,
      91,   117,    92,   165,   195,   214,   221,    93,   159,    94,
     131,    95,   133,    96,    97,   142,   143,    98,   144,    99,
     148,   100,   101,   160,   102,   103,   173,   174,   202,   104
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
     107,   125,    14,    86,    48,   124,   108,    15,   196,    20,
     118,    60,    22,    43,   167,    14,   157,    45,   121,   169,
      15,    32,   158,   128,    24,    64,    39,    33,    25,    26,
      75,    76,    77,    78,    79,   125,    36,    61,   140,   141,
     125,    53,    75,    76,    77,    78,    79,    50,   109,    47,
     207,   125,    44,   125,    28,    52,    46,   179,    29,    30,
     170,   105,    55,   172,   125,   125,    58,    80,    59,   125,
     116,   114,    66,    39,   111,   115,    83,   122,   129,    80,
      75,    76,    77,    78,    79,   119,   120,    48,    83,   183,
     184,   185,   186,   187,   188,   130,   123,   189,   162,   210,
     211,   149,   150,   151,   152,   153,   154,   105,     1,     2,
       3,     4,     5,     6,     7,     8,     9,   132,   164,    10,
     125,   125,   163,   145,   146,   147,    83,   166,   155,   156,
     171,   176,   157,   168,   177,   191,   190,   192,   158,   196,
     199,   212,   208,   209,     1,     2,     3,     4,     5,     6,
       7,     8,    69,   197,   198,    10,   200,   224,   201,   203,
     223,    68,     1,     2,     3,     4,     5,     6,     7,     8,
      69,    70,   206,    10,    71,    72,    73,    74,   213,    75,
      76,    77,    78,    79,     1,     2,     3,     4,     5,     6,
       7,     8,   215,   217,   218,    10,   134,   135,   136,   137,
     138,   139,   222,   220,   140,   141,   225,   227,    34,   113,
     161,   194,   226,   175,   204,   181,    80,   205,   178,    81,
     180,   182,     0,    82,   219,    83
};

static const yytype_int16 yycheck[] =
{
      60,    80,     0,    58,    32,    80,    22,     0,    23,     4,
      70,    37,     4,    25,   114,    13,    63,    29,    73,   119,
      13,    21,    69,    83,     4,    53,    19,     0,     8,     9,
      21,    22,    23,    24,    25,   114,    21,    63,    51,    52,
     119,    62,    21,    22,    23,    24,    25,    67,    64,    21,
      65,   130,    26,   132,     4,    61,    30,   132,     8,     9,
     120,    59,    21,   123,   143,   144,    68,    58,    65,   148,
      61,    67,    62,    66,    63,    21,    67,    61,    61,    58,
      21,    22,    23,    24,    25,    67,    67,   115,    67,   149,
     150,   151,   152,   153,   154,    38,    67,   157,    66,   199,
     200,    32,    33,    34,    35,    36,    37,   105,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    39,    37,    15,
     199,   200,    64,    53,    54,    55,    67,    64,    59,    60,
      16,    66,    63,    61,    68,    61,    21,    37,    69,    23,
      61,   201,   197,   198,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    68,    68,    15,    67,   217,    62,    68,
     215,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    64,    15,    16,    17,    18,    19,    22,    21,
      22,    23,    24,    25,     4,     5,     6,     7,     8,     9,
      10,    11,    26,    61,    68,    15,    43,    44,    45,    46,
      47,    48,    66,    62,    51,    52,    61,    68,    13,    66,
     105,   163,   220,   126,   178,   144,    58,   179,   130,    61,
     143,   148,    -1,    65,   212,    67
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      15,    71,    72,    74,    75,    84,    89,    92,    93,    94,
       4,    87,     4,    88,     4,     8,     9,    86,     4,     8,
       9,    85,    21,     0,    72,    73,    21,    76,    78,    84,
      95,    96,    97,    87,    88,    87,    88,    21,    76,    90,
      67,    79,    61,    62,    77,    21,    98,   100,    68,    65,
      37,    63,    80,    81,    76,   101,    62,    99,     3,    12,
      13,    16,    17,    18,    19,    21,    22,    23,    24,    25,
      58,    61,    65,    67,    75,    84,   103,   104,   106,   107,
     109,   110,   112,   117,   119,   121,   123,   124,   127,   129,
     131,   132,   134,   135,   139,    75,    91,   117,    22,    64,
      82,    63,   102,    97,    67,    21,    61,   111,   117,    67,
      67,   103,    61,    67,   123,   132,   103,   105,   117,    61,
      38,   120,    39,   122,    43,    44,    45,    46,    47,    48,
      51,    52,   125,   126,   128,    53,    54,    55,   130,    32,
      33,    34,    35,    36,    37,    59,    60,    63,    69,   118,
     133,    91,    66,    64,    37,   113,    64,   119,    61,   119,
     117,    16,   117,   136,   137,   105,    66,    68,   121,   123,
     127,   129,   131,   117,   117,   117,   117,   117,   117,   117,
      21,    61,    37,    83,   113,   114,    23,    68,    68,    61,
      67,    62,   138,    68,   120,   122,    64,    65,   103,   103,
     119,   119,   117,    22,   115,    26,   108,    61,    68,   138,
      62,   116,    66,   103,   117,    61,   115,    68
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    70,    71,    72,    73,    73,    74,    74,    74,    75,
      75,    76,    77,    77,    79,    78,    80,    80,    81,    81,
      82,    82,    83,    83,    83,    84,    84,    84,    84,    84,
      84,    84,    84,    84,    85,    85,    85,    85,    86,    86,
      86,    86,    87,    87,    88,    88,    90,    89,    91,    91,
      92,    93,    94,    95,    96,    96,    97,    98,    99,    99,
     101,   100,   102,   102,   103,   103,   103,   103,   103,   103,
     103,   104,   105,   105,   106,   106,   107,   108,   108,   109,
     109,   109,   110,   111,   111,   112,   113,   114,   115,   116,
     116,   117,   117,   118,   118,   118,   118,   118,   118,   118,
     118,   119,   120,   120,   121,   122,   122,   123,   123,   124,
     125,   125,   126,   126,   126,   126,   126,   126,   127,   127,
     128,   128,   129,   129,   130,   130,   130,   131,   131,   132,
     132,   133,   133,   134,   134,   134,   135,   136,   136,   137,
     138,   138,   139,   139,   139,   139
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     0,     1,     1,     1,     3,
       1,     2,     2,     0,     0,     3,     1,     2,     2,     0,
       3,     2,     1,     1,     0,     1,     1,     1,     1,     2,
       2,     2,     2,     1,     1,     2,     2,     0,     1,     2,
       2,     0,     1,     0,     1,     0,     0,     7,     2,     0,
       3,     2,     3,     3,     1,     0,     2,     2,     2,     0,
       0,     3,     2,     0,     1,     1,     1,     1,     1,     1,
       1,     3,     2,     0,     2,     1,     6,     2,     0,     5,
       8,     7,     2,     1,     2,     2,     2,     4,     2,     2,
       0,     2,     1,     2,     2,     2,     2,     2,     2,     1,
       1,     2,     3,     0,     2,     3,     0,     2,     1,     2,
       2,     0,     1,     1,     1,     1,     1,     1,     3,     1,
       1,     1,     3,     1,     1,     1,     1,     1,     1,     1,
       2,     3,     2,     3,     1,     1,     4,     1,     0,     2,
       3,     0,     1,     1,     1,     1
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
  case 14: /* $@1: %empty  */
#line 90 "parser.y"
                                     { ins(); }
#line 1573 "y.tab.c"
    break;

  case 46: /* $@2: %empty  */
#line 128 "parser.y"
                                            { ins(); }
#line 1579 "y.tab.c"
    break;

  case 52: /* function_declaration_type: type_specifier identifier '('  */
#line 140 "parser.y"
                                                         { ins();}
#line 1585 "y.tab.c"
    break;

  case 60: /* $@3: %empty  */
#line 159 "parser.y"
                                     { ins(); }
#line 1591 "y.tab.c"
    break;

  case 86: /* string_initilization: assignment_operator string_constant  */
#line 205 "parser.y"
                                                              { insV(); }
#line 1597 "y.tab.c"
    break;

  case 142: /* constant: integer_constant  */
#line 303 "parser.y"
                                                { insV(); }
#line 1603 "y.tab.c"
    break;

  case 143: /* constant: string_constant  */
#line 304 "parser.y"
                                                { insV(); }
#line 1609 "y.tab.c"
    break;

  case 144: /* constant: float_constant  */
#line 305 "parser.y"
                                                { insV(); }
#line 1615 "y.tab.c"
    break;

  case 145: /* constant: character_constant  */
#line 306 "parser.y"
                                            { insV(); }
#line 1621 "y.tab.c"
    break;


#line 1625 "y.tab.c"

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

#line 308 "parser.y"


extern FILE *yyin;
extern int yylineno;
extern char *yytext;
void insertSTtype(char *,char *);
void insertSTvalue(char *, char *);
void incertCT(char *, char *);
void printST();
void printCT();

int main(int argc , char **argv)
{
	yyin = fopen(argv[1], "r");
	yyparse();

	if(flag == 0)
	{
		printf(ANSI_COLOR_GREEN "Status: Parsing Complete - Valid" ANSI_COLOR_RESET "\n");
		printf("%30s" ANSI_COLOR_CYAN "SYMBOL TABLE" ANSI_COLOR_RESET "\n", " ");
		printf("%30s %s\n", " ", "------------");
		printST();

		printf("\n\n%30s" ANSI_COLOR_CYAN "CONSTANT TABLE" ANSI_COLOR_RESET "\n", " ");
		printf("%30s %s\n", " ", "--------------");
		printCT();
	}
}

void yyerror(char *s)
{
	printf("%d %s %s\n", yylineno, s, yytext);
	flag=1;
	printf(ANSI_COLOR_RED "Status: Parsing Failed - Invalid\n" ANSI_COLOR_RESET);
}

void ins()
{
	insertSTtype(curid,curtype);
}

void insV()
{
	insertSTvalue(curid,curval);
}

int yywrap()
{
	return 1;
}
