%{
#include<stdio.h>
%}

letter [a-zA-Z_]
digit [0-9]
id {letter}({letter}|{digit})*

%%
{id} {printf("%s is identifier\n",yytext);}
.* {printf("%s is not identifier\n",yytext);} 
%%

int main()
{
yylex();
}
