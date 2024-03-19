#include <inttypes.h>
#include <math.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    intmax_t N, A[100];
    intmax_t ans = 0;

    scanf("%jd", &N);
    for (size_t i = 0; i < N; i++) {
        scanf("%jd", &A[i]);
    }

    for (size_t i = 0; i < N; i++) {
        if (A[i] % 2 == 0) {
            if ((A[i] % 3 != 0) && (A[i] % 5 != 0)) {
                puts("DENIED");
                return 0;
            }
        }
    }

    puts("APPROVED");

    return 0;
}
