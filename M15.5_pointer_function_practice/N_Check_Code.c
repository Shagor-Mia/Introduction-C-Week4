#include <stdio.h>
#include <stdbool.h>

int main()
{
    int A, B;
    scanf("%d %d", &A, &B);

    char s[20];
    scanf("%s", s);

    bool check = true;

    for(int i = 0; i < A + B + 1; i++)
    {
        if(i == A)
        {
            if(s[i] != '-')
            {
                check = false;
            }
        }
        else
        {
            if(s[i] < '0' || s[i] > '9')
            {
                check = false;
            }
        }
    }

    if(check)
        printf("Yes\n");
    else
        printf("No\n");

    return 0;
}