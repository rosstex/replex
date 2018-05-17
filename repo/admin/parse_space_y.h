/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

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

#ifndef YY_YY_ADMIN_PARSE_SPACE_Y_H_INCLUDED
# define YY_YY_ADMIN_PARSE_SPACE_Y_H_INCLUDED
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
    SPACE = 258,
    KEY = 259,
    ATTRIBUTES = 260,
    TOLERATE = 261,
    FAILURES = 262,
    CREATE = 263,
    PARTITIONS = 264,
    SUBSPACE = 265,
    INDEX = 266,
    WITH = 267,
    AUTHORIZATION = 268,
    IDENTIFIER = 269,
    NUMBER = 270,
    STRING = 271,
    TIMESTAMP = 272,
    SECOND = 273,
    MINUTE = 274,
    HOUR = 275,
    DAY = 276,
    WEEK = 277,
    MONTH = 278,
    INT64 = 279,
    FLOAT = 280,
    DOCUMENT = 281,
    LIST = 282,
    SET = 283,
    MAP = 284
  };
#endif
/* Tokens.  */
#define SPACE 258
#define KEY 259
#define ATTRIBUTES 260
#define TOLERATE 261
#define FAILURES 262
#define CREATE 263
#define PARTITIONS 264
#define SUBSPACE 265
#define INDEX 266
#define WITH 267
#define AUTHORIZATION 268
#define IDENTIFIER 269
#define NUMBER 270
#define STRING 271
#define TIMESTAMP 272
#define SECOND 273
#define MINUTE 274
#define HOUR 275
#define DAY 276
#define WEEK 277
#define MONTH 278
#define INT64 279
#define FLOAT 280
#define DOCUMENT 281
#define LIST 282
#define SET 283
#define MAP 284

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 101 "admin/parse_space_y.y" /* yacc.c:1909  */

    char* str;
    uint64_t num;
    enum hyperdatatype type;
    enum hyperspace_returncode ret;
    struct
    {
        char* name;
        enum hyperdatatype type;
    } attr;

#line 124 "admin/parse_space_y.h" /* yacc.c:1909  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif



int yyparse (struct hyperspace* space, void* scanner);

#endif /* !YY_YY_ADMIN_PARSE_SPACE_Y_H_INCLUDED  */
