#include <stdio.h>

int main(void) {
    int a = 0;
    int b = 0;
    scanf("%d", &a);
    scanf("%d", &b);

    if (a > 8 | b > 8) {
        printf(":(\n");
    } else {
        printf("Yay!\n");
    }
    return 0;
}