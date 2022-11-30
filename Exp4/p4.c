#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	int i,dg=0,br=0,op=0;
	char str[50];
	printf("Enter mathematical expression: ");
	scanf("%s",str);
	for(i=0;i<strlen(str);i++)
	{
		if(str[i]>='0' && str[i]<='9')
			dg++;
		else if(str[i]=='(' || str[i]==')' || str[i]=='{' || str[i]=='}' || str[i]=='[' || str[i]==']')
			br++;
		else if(str[i]=='+' || str[i]=='*' || str[i]=='-' || str[i]=='/' || str[i]=='%' || str[i]=='^')
			op++;
	}
	printf("No. of digits: %d\n",dg);
	printf("No. of brackets: %d\n",br);
	printf("No. of operators: %d\n",op);
	return 0;
}
