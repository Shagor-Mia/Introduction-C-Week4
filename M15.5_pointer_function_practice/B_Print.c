#include<stdio.h>
void printIt(int N){
for(int i=1; i<N;i++){
    printf("%d ",i);
}
printf("%d",N);
}
int main(){
    int n;
   scanf("%d",&n);
printIt(n);
    return 0;
}