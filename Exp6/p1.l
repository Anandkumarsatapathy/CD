%{
    #include<stdio.h>
    #include<string.h>
    int longest = 0;
    char longestString[30];
%}

%%
[a-zA-Z]+ {
if(yyleng>longest){
    longest = yyleng;
    strcpy(longestString,yytext);
}
}
%%

void revstr(char *str1)  
{  
    int i, len, temp;  
    len = strlen(str1); 
    for (i = 0; i < len/2; i++)  
    {
        temp = str1[i];  
        str1[i] = str1[len - i - 1];  
        str1[len - i - 1] = temp;  
    }
    printf("Longest reverse string is: %s\n", str1);
}  

int main(void){
    yylex();
    printf("The longest string is: %s \n", longestString);
    revstr(longestString);
}
