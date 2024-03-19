#include <inttypes.h>
#include <math.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    intmax_t N;
    intmax_t ans = 0;

    scanf("%jd", &N);

    ans = N / 2;

    if (N % 2) {
        ans++;
    }

    printf("%jd\n", ans);

    return 0;
}
