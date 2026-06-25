#include<stdio.h>
#include<limits.h>

void max_min_func( int N,int arr[]){
    int max=INT_MIN;
    for(int i=0;i<N;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    int min=INT_MAX;
    for(int i=0;i<N;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    printf("%d %d",min,max);
}
int main(){
   int n;
   scanf("%d",&n);
   int arr[n];
   for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
   }
   max_min_func(n,arr);
    return 0;
}