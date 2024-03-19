#include <stdio.h>
#include <stdlib.h>

int main (void) {
    long long ans = 0;
    long long x, rem;

    scanf("%lld", &x);

    ans += (x / 500) * 1000;
    rem = x - 500 * (x / 500);
    ans += (rem / 5) * 5;

    printf("%lld\n", ans);

    return EXIT_SUCCESS;
}
