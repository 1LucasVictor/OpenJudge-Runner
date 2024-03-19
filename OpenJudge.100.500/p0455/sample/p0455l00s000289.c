#include <inttypes.h>
#include <math.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    intmax_t a;
    intmax_t ans = 0;

    scanf("%jd", &a);

    ans = a + a * a + a * a * a;

    printf("%jd\n", ans);

    return 0;
}
