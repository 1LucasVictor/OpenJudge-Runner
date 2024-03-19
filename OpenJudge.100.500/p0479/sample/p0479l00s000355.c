#include <inttypes.h>
#include <math.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    intmax_t N, A[(int)2e5];
    intmax_t ans[(int)2e5] = {};

    scanf("%jd", &N);
    for (size_t i = 0; i < (N - 1); i++) {
        scanf("%jd", &A[i]);
    }

    for (size_t i = 0; i < (N - 1); i++) {
        ans[A[i] - 1]++;
    }

    for (size_t i = 0; i < N; i++) {
        printf("%jd\n", ans[i]);
    }

    return 0;
}
