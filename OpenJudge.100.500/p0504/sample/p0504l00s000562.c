#include <inttypes.h>
#include <math.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    intmax_t H, A;
    intmax_t ans = 0;

    scanf("%jd%jd", &H, &A);

    ans = H / A + ((H % A) ? 1 : 0);

    printf("%jd\n", ans);

    return 0;
}
