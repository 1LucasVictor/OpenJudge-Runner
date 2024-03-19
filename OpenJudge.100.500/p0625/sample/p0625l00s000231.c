#include <stdio.h>

int main(void) {
    int a, b, max;
    scanf("%d %d", &a, &b);
    max = a;
    if (a < b) {
        max = b;
    }
    if (8 >= max) {
        printf("Yay!\n");
    } else {
        printf(":(\n");
    }
    return 0;
}