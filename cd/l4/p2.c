#include <stdio.h>
#include <string.h>
int main()
{
    char ch[100];
    printf("enter an expression:");
    scanf("\n %s", ch);
    int i, l = strlen(ch), temp = 0;
    for (i = 0; i < l; i++)
    {
        if (ch[i] == '0' || ch[i] == '1' || ch[i] == '2' || ch[i] == '3' || ch[i] == '4' || ch[i] == '5' || ch[i] == '6' || ch[i] == '7' || ch[i] == '8' || ch[i] == '9')
        {
            temp += 1;
        }
    }
    if (temp == 1)
    {
        printf("It is a constant\n");
    }
    else if ((ch[0] == 'c' && ch[1] == 'o' && ch[2] == 'n' && ch[3] == 's' && ch[4] == 't') ||
             (ch[0] == 'C' && ch[1] == 'O' && ch[2] == 'N' && ch[3] == 'S' && ch[4] == 'T') ||
             (ch[0] == 'f' && ch[1] == 'l' && ch[2] == 'o' && ch[3] == 'a' && ch[4] == 't') ||
             (ch[0] == 'i' && ch[1] == 'n' && ch[2] == 't') ||
             (ch[0] == 'd' && ch[1] == 'o' && ch[2] == 'u' && ch[3] == 'b' && ch[4] == 'l' && ch[4] == 'e') ||
             (ch[0] == 'c' && ch[1] == 'h' && ch[2] == 'a' && ch[3] == 'r'))
    {
        printf("\n This is a keyword \n");
    }
    else
    {
        printf("\n not a keyword or constant \n");
    }
    return 0;
}