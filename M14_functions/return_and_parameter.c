#include<stdio.h>

int sum(int num1,int num2){
    int ans=num1+num2;
    return ans;
}

int main(){
   int a,b;
   scanf("%d %d",&a,&b);
   int summation=sum(a,b);
   printf("%d",summation);
    return 0;
}