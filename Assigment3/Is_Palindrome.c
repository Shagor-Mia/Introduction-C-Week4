#include <stdio.h>
#include <string.h>

int is_palindrome(char S[])
{
    int len = strlen(S);
    int i = 0, j = len - 1;
    for (i, j; i < j; i++, j--)
    {
        if (S[i] != S[j])
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    char S[1001];
    scanf("%s", &S);
    int str = is_palindrome(S);

    if(str==1)
    {
            printf("Palindrome");
        }
        else
        {
            printf("Not Palindrome");
        }
    return 0;
}