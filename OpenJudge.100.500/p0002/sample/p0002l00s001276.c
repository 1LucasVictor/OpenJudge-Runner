#include <stdio.h>

void swap(int *, int *);

int main(void) {
    int i, n, x, y, z;
    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        scanf("%d %d %d", &x, &y, &z);
        swap(&x, &y), swap(&y, &z), swap(&x, &y);
        printf("%s\n", x * x + y * y - z * z ? "NO" : "YES");
    }
    return 0;
}

void swap(int *a, int *b) {
    if(*a > *b) {
        *a ^= *b;
        *b ^= *a;
        *a ^= *b;
    }
}