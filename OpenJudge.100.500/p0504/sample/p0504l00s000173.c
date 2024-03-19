#include <stdio.h>

int main(void) {
    int H, A;
    scanf("%d%d", &H, &A);
    printf("%d", (H+A-1)/A);
    return 0;
}