/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison interface for Yacc-like parsers in C

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

#ifndef YY_YY_SYNTAX_TAB_H_INCLUDED
# define YY_YY_SYNTAX_TAB_H_INCLUDED
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
    LTE = 315
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 18 "syntax.y"
                          //Union gia tous tupous ton tokens
    int     integerval;
    float   floatval; 
    char    *stringval;

#line 125 "syntax.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SYNTAX_TAB_H_INCLUDED  */
