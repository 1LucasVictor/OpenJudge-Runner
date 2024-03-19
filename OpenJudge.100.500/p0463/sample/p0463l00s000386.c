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

    scanf("%jd", &N);

    switch (N % 10) {
        case 2:
        case 4:
        case 5:
        case 7:
        case 9:
            puts("hon");
            break;
        case 0:
        case 1:
        case 6:
        case 8:
            puts("pon");
            break;
        case 3:
            puts("bon");
            break;
        default:
            break;
    }

    return 0;
}
