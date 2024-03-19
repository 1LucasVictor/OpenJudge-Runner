#include <inttypes.h>
#include <math.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    intmax_t A, B, C, K;
    intmax_t ans = 0;

    scanf("%jd%jd%jd%jd", &A, &B, &C, &K);

    if (A < K) {
        ans = A;
    } else {
        ans = K;
    }
    K -= A;
    K -= B;
    if (K > 0) {
        ans -= K;
    }

    printf("%jd\n", ans);

    return 0;
}
