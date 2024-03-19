#include <inttypes.h>
#include <math.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    intmax_t H, N, A[(int)1e5];

    scanf("%jd%jd", &H, &N);
    for (size_t i = 0; i < N; i++) {
        scanf("%jd", &A[i]);
    }

    intmax_t sum = 0;
    for (size_t i = 0; i < N; i++) {
        sum += A[i];
    }

    if (sum >= H) {
        puts("Yes");
    } else {
        puts("No");
    }

    return 0;
}
