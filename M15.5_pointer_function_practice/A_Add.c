#include<stdio.h>
int summation(int X,int Y){
int sum=X+Y;
return sum;
}
int main(){
   int x, y;
  scanf("%d %d",&x,&y);
   int sum=summation(x,y);
   printf("%d",sum);
    return 0;
}