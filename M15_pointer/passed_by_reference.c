#include<stdio.h>
void func(int* x){
    *x=20;
    // printf("void function address: %p\n",x);
}
int main(){
    int x=10;
    func(&x);
    printf("pass by reference value:%d",x);
    // printf("main function address: %p\n",x);
   
    return 0;
}