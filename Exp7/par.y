%{
#include<stdio.h>
#include<stdlib.h>
%}
%token NUMBER ID
%left '+' '-'
%left '*' '/'
%left '%'
%%
expr: expr '+' expr
     |expr '-' expr
     |expr '*' expr
     |expr '/' expr
     |expr '%' expr
     |'-'NUMBER
     |'-'ID
     |'('expr')'
     |'{'expr'}'
     |'['expr']'
     |NUMBER
     |ID
     ;
%%
int main()
{
printf("Enter the expression\n");
yyparse();
printf("\nParenthesis is valid\n");
exit(0);
}
int yyerror(char *s)
{
printf("\nParenthesis is invalid\n");
exit(0);
}
