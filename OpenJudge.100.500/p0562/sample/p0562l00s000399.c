#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <inttypes.h>
#include <string.h>
#include <math.h>

int main (void)
{
    intmax_t A, B;
    intmax_t ans = 0;

    scanf("%jd%jd", &A, &B);

    ans = (B - 1) / A + 1;

    printf("%jd\n", ans);

    return 0;
}
