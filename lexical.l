%{
#include <stdio.h>
%}

DIGIT [0-9]
LETTER [a-zA-Z]
ID ({LETTER}({LETTER}|{DIGIT})*)
INT_CONSTANT {DIGIT}+
FLOAT_CONSTANT {DIGIT}+"."{DIGIT}+([eE][+-]?{DIGIT}+)?
STRING_LITERAL \"([^\"\\]|\\.)*\"

%%
int|float|double|char|void   { printf("Keyword: %s\n", yytext); }
{ID}                        { printf("Identifier: %s\n", yytext); }
{INT_CONSTANT}               { printf("Integer Constant: %s\n", yytext); }
{FLOAT_CONSTANT}             { printf("Float Constant: %s\n", yytext); }
{STRING_LITERAL}             { printf("String Literal: %s\n", yytext); }

[+\-*/=<>!&|%^~]            { printf("Operator: %s\n", yytext); }
[;:,\(\)\[\]\{\}]            { printf("Punctuation: %s\n", yytext); }

[ \t]                       ; // Ignore whitespace
\/\/[^\n]*                  ; // Ignore single-line comments
\/\*([^*]|\*+[^*\/])*\*+\/  ; // Ignore multi-line comments
.                           { printf("Invalid Token: %s\n", yytext); }

%%

int main(int argc, char* argv[]) {
    if (argc < 2) {
        printf("Usage: %s <input_file>\n", argv[0]);
        return 1;
    }

    yyin = fopen(argv[1], "r");
    if (!yyin) {
        perror("Error opening file");
        return 1;
    }

    yylex();

    fclose(yyin);

    return 0;
}

