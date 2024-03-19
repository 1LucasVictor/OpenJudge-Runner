#include <stdio.h>
#include <stdlib.h>
#define ll long long

int main(void) {
    ll n, k, x, tmp;
    scanf("%lld %lld", &n, &k);
    x = n % k;
    if (x == 0) {
        printf("%lld\n", x);
        return 0;
    }
    
    tmp = llabs(x - k);

    if (x > tmp) printf("%lld\n", tmp);
    else printf("%lld\n", x);

    return 0;
}