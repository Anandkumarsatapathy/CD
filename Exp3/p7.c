#include <stdio.h>
#include <string.h>

//starting state
int dfa = 1;

// This function is for
// the starting state A of DFA
void A(char c)
{
	if (c == '0' || c== '1')
		dfa = 1;
	// -1 is used to check for any invalid symbol
	else
		dfa = -1;
}


int isAccepted(char str[])
{
	// store length of string
	int i, len = strlen(str);
	if (len>5)
		return 0;
	for (i = 0 ; i < len; i++) {
		if (dfa == 1)
			A(str[i]);
		else
			return 0;
	}
	if (dfa == 1)
		return 1;
	else
		return 0;
}

int main()
{
	char str[50];
	printf("Enter the string: ");
	gets(str);
	if (isAccepted(str))
		printf("%s is ACCEPTED\n",str);
	else
		printf("%s is NOT ACCEPTED\n",str);
	return 0;
}
