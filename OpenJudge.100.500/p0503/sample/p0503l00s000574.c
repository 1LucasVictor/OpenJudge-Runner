#include <inttypes.h>
#include <math.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare(const void *a, const void *b)
{
    if (*(intmax_t *)a < *(intmax_t *)b)
        return -1;
    if (*(intmax_t *)a > *(intmax_t *)b)
        return 1;
    return 0;
}

int main(void)
{
    intmax_t N, A[200000];
    intmax_t ans = 0;

    scanf("%jd", &N);
    for (size_t i = 0; i < N; i++) {
        scanf("%jd", &A[i]);
    }

    qsort(A, N, sizeof(A[0]), compare);

    for (size_t i = 1; i < N; i++) {
        if (A[i] == A[i - 1]) {
            puts("NO");
            return 0;
        }
    }

    puts("YES");

    return 0;
}
