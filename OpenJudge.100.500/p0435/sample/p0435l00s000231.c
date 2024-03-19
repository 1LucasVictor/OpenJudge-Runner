#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define N 200010
#define MAX 1000000000000000000

#include <stdio.h>

int main (void) {
    long long n, x, y, d, i, c = 0;

    scanf("%lld %lld", &n, &d);

    for (i = 0; i < n; i++) {
        scanf("%lld %lld", &x, &y);

        if (sqrtl(powl(x, 2) + powl(y, 2)) <= d) {
            c++;
        }
    }

    printf("%lld", c);

    return 0;
}

