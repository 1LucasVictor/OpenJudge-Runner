#include <stdio.h>

int main() {
    long long a, b, c, k, t = 0;
    scanf("%lld%lld%lld%lld", &a, &b, &c, &k);
    
    if (a >= k) {
        t += k;
        k = 0;
    } else if (a < k && k > 0) {
        t += a;
        k -= a;
    }

    if (b >= k)
        k = 0;
    else if (b < k && k > 0)
        k -= b;
    
    if (c >= k) {
        t -= k;
        k = 0;
    } else if (c < k && k > 0) {
        t -= c;
        k -= c;
    }
    
        
    printf("%lld\n", t);
        
    return 0;
}