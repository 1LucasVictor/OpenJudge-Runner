#include <math.h>
#include <stdio.h>
#include <string.h>
int a, b, n, idct = 0;
int main(void) {
    scanf("%d %d %d", &n, &a, &b);
    for (int i = a; i <= b; i++) {
        if (i % n == 0) {
            printf("OK\n");
            idct = 1;
            break;
        }
    }
    if (idct == 0) {
        printf("NG\n");
    }
}