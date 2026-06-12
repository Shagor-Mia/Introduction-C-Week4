#include <stdio.h>
#include <string.h>

void fun(char s[])
{
  printf("%s\n",s);
  printf("%d\n",strlen(s));
}
int main()
{
    int n;
    scanf("%d", &n);
    
    char s[n];
   scanf("%s",s);
    fun(s);
    return 0;
}