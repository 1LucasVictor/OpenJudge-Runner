#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <inttypes.h>
#include <string.h>
#include <math.h>

int main (void)
{
    intmax_t L, R;
    intmax_t ans = 0;

    scanf("%jd%jd", &L, &R);

    if ((R - L) >= 673) {
        ans = 0;
    } else if ((L %= 673) < (R %= 673)) {
        ans = L * (L + 1);
        ans %= 2019;
    } else {
        ans = 0;
    }

    printf("%jd\n", ans);

    return 0;
}
