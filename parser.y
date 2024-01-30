%{
#include <stdio.h>
#include <stdlib.h>
int yylex(void);
void yyerror(const char *s);
%}

%token Identifier IntegerConstant FloatConstant StringLiteral

%%

program: /* empty */
        | program statement '\n'    { printf("Program: %s\n", $2); free($2); }
        ;

statement: expression ';'   { $$ = strdup($1); }
        | /* other statement types go here */
        ;

expression: Identifier       { $$ = strdup($1); }
        | IntegerConstant    { $$ = strdup($1); }
        | FloatConstant      { $$ = strdup($1); }
        | StringLiteral      { $$ = strdup($1); }
        | expression '+' expression  { $$ = malloc(strlen($1) + strlen($3) + 4); sprintf($$, "%s + %s", $1, $3); free($1); free($3); }
        | expression '-' expression  { $$ = malloc(strlen($1) + strlen($3) + 4); sprintf($$, "%s - %s", $1, $3); free($1); free($3); }
        | expression '*' expression  { $$ = malloc(strlen($1) + strlen($3) + 4); sprintf($$, "%s * %s", $1, $3); free($1); free($3); }
        | expression '/' expression  { $$ = malloc(strlen($1) + strlen($3) + 4); sprintf($$, "%s / %s", $1, $3); free($1); free($3); }
        | '(' expression ')'         { $$ = malloc(strlen($2) + 3); sprintf($$, "(%s)", $2); free($2); }
        ;

%%

void yyerror(const char *s) {
    fprintf(stderr, "Syntax Error: %s\n", s);
}

int main(void) {
    yyparse();
    return 0;
}

