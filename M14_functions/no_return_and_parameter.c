#include<stdio.h>

void sum(int num1,int num2){
    int ans=num1+num2;
    // return; if we return here there rest of the code ignored 
     printf("%d",ans);
}

int main(){
   int a,b;
   scanf("%d %d",&a,&b);
   sum(a,b);
  
    return 0;
}