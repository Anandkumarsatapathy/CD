%{
#include <stdio.h>
#include <string.h> 
%}

%%
[/]{1}[/]{1}[a-zA-Z0-9]* printf("Single Comment");
[/]{1}[*]{1}[a-zA-Z0-9]*[*]{1}[/]{1} printf("MultiLine Comment");
[a-zA-Z0-9]* printf("Not a Comment");
%%

int main()
{
	yylex();
	return 0;	
}
