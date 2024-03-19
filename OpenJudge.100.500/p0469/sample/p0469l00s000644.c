#include <inttypes.h>
#include <math.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    intmax_t K, A, B;

    scanf("%jd", &K);
    scanf("%jd%jd", &A, &B);

    for (size_t i = A; i <= B; i++) {
        if (i % K == 0) {
            puts("OK");
            return 0;
        }
    }

    puts("NG");

    return 0;
}
