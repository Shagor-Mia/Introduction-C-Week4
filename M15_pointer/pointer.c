#include<stdio.h>
int main(){
   int x=20;
   printf("%d\n",x);
   printf("%p\n",&x); // variable address

   int *ptr;
   ptr=&x;
   *ptr=100; //dereference 
   printf("%p\n",ptr);//stored variable address
   printf("%p\n",&ptr);//pinter address
   printf("%d",x);//dereference
    return 0;
}