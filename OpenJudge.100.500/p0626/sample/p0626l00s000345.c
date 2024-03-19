#include <stdio.h>
#include <stdlib.h>

int main() {
    int *d = malloc(sizeof(int)), *n = malloc(sizeof(int));
    scanf("%d%d", d, n);
    for (int i=0; i<*d; ++i)
        *n *= 100;
    printf("%d\n", *n);
    return 0;
}