#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    long A;
    long B;
    long C;
    long K;

    scanf("%ld %ld %ld %ld", &A, &B, &C, &K);

    if (K < A) {
        printf("%ld\n", K);
    } else if (K <= A + B) {
        printf("%ld\n", A);
    } else {
        printf("%ld\n", A - (K - (A + B)));
    }

    return 0;
}