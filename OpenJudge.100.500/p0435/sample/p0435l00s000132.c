#include <stdio.h>
#include <stdlib.h>

int main (void) {
    long int N, D, x, y, count = 0;
    scanf("%ld %ld", &N, &D);
    for (int i = 0; i < N; i++) {
        scanf("%ld %ld", &x, &y);
        if (D * D >= x * x + y * y) {
            count++;
        }
    }
    printf("%ld\n", count);
    return 0;
}