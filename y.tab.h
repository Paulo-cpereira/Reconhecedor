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

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
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
    RETURN = 258,
    EXIT = 259,
    CHAF = 260,
    TYPEDEF = 261,
    STRUCT = 262,
    CARDINAL = 263,
    WHILE = 264,
    IF = 265,
    ELSE = 266,
    INCLUDE = 267,
    FOR = 268,
    INCDEC = 269,
    CHAR = 270,
    NUMBER = 271,
    EOL = 272,
    CONST = 273,
    PTV = 274,
    OPERADORES_COMPOSTOS = 275,
    MAIN = 276,
    PRINTF = 277
  };
#endif
/* Tokens.  */
#define RETURN 258
#define EXIT 259
#define CHAF 260
#define TYPEDEF 261
#define STRUCT 262
#define CARDINAL 263
#define WHILE 264
#define IF 265
#define ELSE 266
#define INCLUDE 267
#define FOR 268
#define INCDEC 269
#define CHAR 270
#define NUMBER 271
#define EOL 272
#define CONST 273
#define PTV 274
#define OPERADORES_COMPOSTOS 275
#define MAIN 276
#define PRINTF 277

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
