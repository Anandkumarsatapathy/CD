%{
#include <stdio.h>
#include <string.h>
int nlines=0,nwords=0,nchars=0;
%}

%%
\n {
	nlines++; 
	}
 
[^ \n\t]+ {nwords++, nchars=nchars+yyleng;}
. {nchars++;}
%%
int yywrap(void)  
{
 return 1;
}
int main(int argc, char*argv[]) 
{
	yyin=fopen(argv[1],"r");
	yylex();
	printf("Lines = %d\nChars=%d\nWords=%d\n",nlines,nchars,nwords);
	return 0;
}
