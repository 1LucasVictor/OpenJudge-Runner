#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main (void) {
    long long n, k;

    scanf("%lld%lld", &n, &k);

    long long ans;
    if ( n / k != 0 )
        ans = n - k * (n / k);
    else
        ans = n;
    if ( ans > abs(ans - k) )
        ans = abs(ans - k);

    printf("%lld\n", ans);
    return EXIT_SUCCESS;
}
