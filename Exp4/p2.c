#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	char str[50];
	printf("Enter a string: ");
	scanf("%s",str);
	char key1[]="int";
	char key2[]="double";
	char key3[]="for";
	char key4[]="while";
	if(strcmp(str,key1)==0 || strcmp(str,key2)==0 || strcmp(str,key3)==0 || strcmp(str,key4)==0)
		printf("It is a keyword\n");
	else if(str[0]=='#'&&str[1]=='d'&&str[2]=='e'&&str[3]=='f'&&str[4]=='i'&&str[5]=='n'&&str[6]=='e')
		printf("It is a constant\n");
	else if(str[0]=='c'&&str[1]=='o'&&str[2]=='n'&&str[3]=='s'&&str[4]=='t')
		printf("It is a constant\n");
	else
		printf("It is neither a constant nor a keyword\n");
	return 0;
}

