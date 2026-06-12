#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int star = 1;
    int space = n - 1;

    // Upper part
    for(int i = 1; i <= n; i++) {

        for(int s = 1; s <= space; s++) {
            printf(" ");
        }

        for(int j = 1; j <= star; j++) {
            printf("*");
        }

        printf("\n");

        star += 2;
        space--;
    }

    // Lower part
    star = star - 4;
    space = 1;

    for(int i = 1; i <= n - 1; i++) {

        for(int s = 1; s <= space; s++) {
            printf(" ");
        }

        for(int j = 1; j <= star; j++) {
            printf("*");
        }

        printf("\n");

        star -= 2;
        space++;
    }

    return 0;
}