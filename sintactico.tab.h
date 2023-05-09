/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     PROGRAM_TOKEN = 258,
     VARIABLE_TOKEN = 259,
     INTEGER_TOKEN = 260,
     FLOAT_TOKEN = 261,
     STRING_TOKEN = 262,
     BOOLEAN_TOKEN = 263,
     TRUE_TOKEN = 264,
     FALSE_TOKEN = 265,
     BEGIN_TOKEN = 266,
     END_TOKEN = 267,
     IF_TOKEN = 268,
     THEN_TOKEN = 269,
     ELSE_TOKEN = 270,
     INPUT_TOKEN = 271,
     OUTPUT_TOKEN = 272,
     WHILE_TOKEN = 273,
     DO_TOKEN = 274,
     REPEAT_TOKEN = 275,
     UNTIL_TOKEN = 276,
     STRING_IDENT_TOKEN = 277,
     FLOAT_IDENT_TOKEN = 278,
     INT_IDENT_TOKEN = 279,
     BOOLEAN_IDENT_TOKEN = 280,
     PROGRAM_IDENT_TOKEN = 281,
     STRING_TOKEN_REGEX = 282,
     INTEGER_TOKEN_REGEX = 283,
     FLOAT_TOKEN_REGEX = 284,
     AND_TOKEN = 285,
     OR_TOKEN = 286,
     NOT_TOKEN = 287,
     SEPARATOR_TOKEN = 288,
     DATA_ASSIGN_TOKEN = 289,
     END_EXPRESSION_TOKEN = 290,
     ADD_OP_TOKEN = 291,
     SUB_OP_TOKEN = 292,
     MUL_OP_TOKEN = 293,
     DIV_OP_TOKEN = 294,
     MORE_THAN_TOKEN = 295,
     LESS_THAN_TOKEN = 296,
     MORE_EQUAL_TOKEN = 297,
     LESS_EQUAL_TOKEN = 298,
     EQUAL_TO_TOKEN = 299,
     DIFFERENT_TO_TOKEN = 300,
     ASSIGNER_TOKEN = 301,
     OPEN_BRACKET_TOKEN = 302,
     CLOSE_BRACKET_TOKEN = 303
   };
#endif
/* Tokens.  */
#define PROGRAM_TOKEN 258
#define VARIABLE_TOKEN 259
#define INTEGER_TOKEN 260
#define FLOAT_TOKEN 261
#define STRING_TOKEN 262
#define BOOLEAN_TOKEN 263
#define TRUE_TOKEN 264
#define FALSE_TOKEN 265
#define BEGIN_TOKEN 266
#define END_TOKEN 267
#define IF_TOKEN 268
#define THEN_TOKEN 269
#define ELSE_TOKEN 270
#define INPUT_TOKEN 271
#define OUTPUT_TOKEN 272
#define WHILE_TOKEN 273
#define DO_TOKEN 274
#define REPEAT_TOKEN 275
#define UNTIL_TOKEN 276
#define STRING_IDENT_TOKEN 277
#define FLOAT_IDENT_TOKEN 278
#define INT_IDENT_TOKEN 279
#define BOOLEAN_IDENT_TOKEN 280
#define PROGRAM_IDENT_TOKEN 281
#define STRING_TOKEN_REGEX 282
#define INTEGER_TOKEN_REGEX 283
#define FLOAT_TOKEN_REGEX 284
#define AND_TOKEN 285
#define OR_TOKEN 286
#define NOT_TOKEN 287
#define SEPARATOR_TOKEN 288
#define DATA_ASSIGN_TOKEN 289
#define END_EXPRESSION_TOKEN 290
#define ADD_OP_TOKEN 291
#define SUB_OP_TOKEN 292
#define MUL_OP_TOKEN 293
#define DIV_OP_TOKEN 294
#define MORE_THAN_TOKEN 295
#define LESS_THAN_TOKEN 296
#define MORE_EQUAL_TOKEN 297
#define LESS_EQUAL_TOKEN 298
#define EQUAL_TO_TOKEN 299
#define DIFFERENT_TO_TOKEN 300
#define ASSIGNER_TOKEN 301
#define OPEN_BRACKET_TOKEN 302
#define CLOSE_BRACKET_TOKEN 303




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

