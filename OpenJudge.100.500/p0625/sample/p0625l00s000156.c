#include <stdio.h>

int main(void) {
    int a, b;
    scanf("%d %d", &a, &b);
    if(a<9 && b<9 && a+b < 17) {
        printf("Yay!\n");
    }
    else {
        printf(":(\n");
    }
}