#include <stdio.h>
int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    *(a+3)=100;
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\narray value address:%p\n", &a[0]);
    printf("array pointer address:%p\n", &a);
    printf("array pointer address default value:%d\n", *a);
    return 0;
}