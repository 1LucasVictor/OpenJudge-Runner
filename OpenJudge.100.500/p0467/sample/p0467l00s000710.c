#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main (void)
{
    long a, b, c, k;
    long ans = 0;

    scanf("%ld %ld %ld %ld", &a, &b, &c, &k);

    if (k - a > 0) {
        ans += a;
        k -= a;
    } else {
        ans += k;
        printf("%ld", ans);
        return 0;
    }

    if (k - b > 0) {
        k -= b;
    } else {
        printf("%ld", ans);
        return 0;
    }

    if (k - c > 0) {
        ans -= c;
        k -= c;
    } else {
        ans -= k;
        printf("%ld", ans);
        return 0;
    }

    printf("%ld", ans);
    return 0;
}
