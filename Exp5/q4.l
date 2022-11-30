%{
#include<stdio.h>
%}

letter [a-zA-Z_]
digit [0-9]
id {letter}({letter}|{digit})*

%%
auto|double|int|struct|break|else|long|switch|case|enum|register|typedef|char|extern|return|union|continue|for|signed|void|do|if|static|while|default|goto|sizeof|volatile|const|float|short {printf("%s is reserve words",yytext);}
{id} {printf("%s is identifier",yytext);}
[0-9]* {printf("This is constant");}
%%

int main()
{
	yylex();
}
