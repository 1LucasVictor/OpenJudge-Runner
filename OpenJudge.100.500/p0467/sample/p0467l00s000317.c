#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main (void)
{
    long a, b, c, k;
    long ans = 0;

    scanf("%lo %lo %lo %lo", &a, &b, &c, &k);

    for (; a > 0 && k > 0; a--) {
        ans += 1;
        k--;
    }

    for (; b > 0 && k > 0; b--) {
        ans += 0;
        k--;
    }

    for (; c > 0 && k > 0; c--) {
        ans -= 1;
        k--;
    }

    printf("%lo", ans);

    return 0;
}
