#include <stdio.h>
#include <string.h>

//starting state
int dfa = 1;

// This function is for
// the starting state A of DFA
void A(char c)
{
	if (c == '0')
		dfa = 2;
	// -1 is used to check for any invalid symbol
	else
		dfa = -1;
}

// This function is for the first state B of DFA
void B(char c)
{
	if (c == '1')
		dfa = 3;
	else
		dfa = -1;
}

// This function is for the second state C of DFA
void C(char c)
{
	if (c == '0' || c == '1')
		dfa = 3;
	else
		dfa = -1;
}

int isAccepted(char str[])
{
	// store length of string
	int i, len = strlen(str);
	for (i = 0 ; i < len; i++) {
		if (dfa == 1)
			A(str[i]);
		else if (dfa == 2)
			B(str[i]);
		else if (dfa == 3)
			C(str[i]);
		else
			return 0;
	}
	if (dfa == 3)
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
