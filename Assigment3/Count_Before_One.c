#include<stdio.h>

int  count_before_one(int A[],int n){
for(int i=0;i<n;i++){

       if(A[i]==1){
        return i;
      
       };
   }
      return n;
}
int main(){
   int n;
   scanf("%d",&n);
   int A[n];
   for(int i=0;i<n;i++){

       scanf("%d",&A[i]);
   }
    int result=count_before_one(A,n);
    printf("%d",result);
    
    return 0;
}