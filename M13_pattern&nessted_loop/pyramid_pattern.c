// #include<stdio.h>
// int main(){
//    int  n;
//    scanf("%d",&n);
//    int star=1;
//    int space=n-1;
//    for(int i=1;i<=n;i++){  //line print
//     for(int s=1;s<=space;s++){  //space printing

//         printf(" ");
//     }
//     for(int j=1;j<=star;j++){   // star printing

//         printf("*");
//     }

//     printf("\n");
//     star+=2;
//     space--;
//    }
//     return 0;
// }


// 
#include<stdio.h>
int main(){
   int  n;
   scanf("%d",&n);
   int star=1;
   int space=n-1;
   for(int i=1;i<=n;i++){  //line print
    for(int s=1;s<=space;s++){  //space printing

        printf(" ");
    }
    for(int j=1;j<=star;j++){   // star printing

        printf("*");
    }

    printf("\n");
    star++;
    space--;
   }
    return 0;
}

