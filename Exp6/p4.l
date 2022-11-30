/*Lex program to identify email*/


%{
#include<stdio.h>
#include<stdlib.h>
int flag=0;
%}
%%
[a-z0-9]+@[a-z]+".com"|".in" { flag=1; }
%%

int yywrap(void){}
int main()
{
yylex();
if(flag==1)
printf("\nAccepted\n");
else
printf("\nNot Accepted\n");
return 0;
}


