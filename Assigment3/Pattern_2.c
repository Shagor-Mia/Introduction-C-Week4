#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
   
    int value = 1;
    int space=n-1;

    for (int i = 1; i <= n; i++) // line print
    {
        
        for (int s = 1; s <= space; s++) //space print
        {
            printf(" ");
        }
        for (int j = value; j >=1; j--) //number print
        {
            printf("%d",j);
        }
    printf("\n");
        value++;
        space--;
      
    }

   

    return 0;
}
