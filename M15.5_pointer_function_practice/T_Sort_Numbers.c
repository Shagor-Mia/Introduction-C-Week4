#include<stdio.h>
int main(){
   int a,b,c;
   scanf("%d %d %d",&a,&b,&c); 
   if(a<=b&&a<=c){
    printf("%d\n",a);
    if(b<=c){
        printf("%d\n%d",b,c);
    }
    else{
        printf("%d\n%d",c,b);
    }
   }
   else if(b<=a&&b<=c){
    printf("%d\n",b);
    if(a<=c){
        printf("%d\n%d",a,c);
    }
    else{
        printf("%d\n%d",c,a);
    }
   }
   else if(c<=b&&c<=a){
    printf("%d\n",c);
    if(b<=a){
        printf("%d\n%d",b,a);
    }
    else{
        printf("%d\n%d",a,b);
    }
   }

   printf("\n\n%d\n%d\n%d",a,b,c); 
    return 0;
}