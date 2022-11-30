#include<stdio.h>
#include<string.h>

int dfa = 1;
void A(char c)
{
	if (c == '0')
		dfa = 1;
	else if (c == '1')
		dfa = 2;

	else
		dfa = -1;
}
void B(char c)
{
	if (c == '0')
		dfa = 2;
	else if (c == '1')
		dfa = 1;
	else
		dfa = -1;
}
int isAccepted(char str[])
{
int i, len = strlen(str);
	for (i = 0; i < len; i++) {
		if (dfa == 1)
			A(str[i]);
		else if (dfa == 2)
			B(str[i]);
		else
			return 0;
}
if (dfa == 2)
return 1;
else
return 0;
}
int main()
{
	char str[50];
	printf("enter the string: ");
	scanf("%s",str);
	if(isAccepted(str))
		printf("%s is ACCEPTED",str);
	else
		printf("%s is REJECTED",str);
return 0;		
}


