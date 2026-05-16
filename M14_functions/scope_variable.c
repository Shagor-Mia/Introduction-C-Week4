#include <stdio.h>
int x; // x global scope variable
int sum()
{
    x = 10;
    printf("%d ", x);
}
int main()
{

    int y = 20 + x;
    sum();
    printf("%d\n", y);
    for (int i = 1; i <= 10l; i++) // i function/local scope variable
    {
        printf("%d\n", i);
    }
    return 0;
}