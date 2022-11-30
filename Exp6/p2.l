/*lowercase to uppercase*/

%{
#include<stdio.h>
%}

%%
[a-z] printf("%c",yytext[0] - ('a' - 'A'));
[A-Z] printf("%c",yytext[0] - ('A' - 'a'));
0 {return 0;}
%%
int yywrap(void){}
int main()
{
yylex();
return 0;
}

