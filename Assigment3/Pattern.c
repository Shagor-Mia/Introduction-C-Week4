#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int space = n - 1;
    int hash = 1;

    for (int i = 1; i <= n; i++) // line print
    {
        for (int s = 1; s <= space; s++) // space print
        {
            printf(" ");
        }
        for (int j = 1; j <= hash; j++) // hash,dash print
        {
            if (i % 2 == 1)
            {
                printf("#");
            }
            else
            {
                printf("-");
            }
        }
        printf("\n");
        hash += 2;
        space--;
    }

    hash -= 4;
    space = 1;
    for (int i = n-1; i >= 1; i--) // line print
    {
        for (int s = 1; s <= space; s++) // space print
        {
            printf(" ");
        }
        for (int j = 1; j <= hash; j++) // hash,dash print
        {
            if (i % 2 == 1)
            {
                printf("#");
            }
            else
            {
                printf("-");
            }
        }
        printf("\n");
        hash -= 2;
        space++;
    }

    return 0;
}
