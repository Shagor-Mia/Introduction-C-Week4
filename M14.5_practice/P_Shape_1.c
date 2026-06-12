#include<stdio.h>
int main(){
   int  n;
   scanf("%d",&n);
   int star=n;
   
   for(int i=n;i>=1;i--){  //line print
    
    for(int j=1;j<=star;j++){   // star printing

        printf("*");
    }
     
    printf("\n");
    star--;
    
   }
    return 0;
}



