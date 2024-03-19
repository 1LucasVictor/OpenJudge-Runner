#include <stdio.h>

int main() {
    long long a, b, c, k, t = 0;
    scanf("%lld%lld%lld%lld", &a, &b, &c, &k);
    
    t += a;
    k -= a;
    
    if (k > 0) {
        k -= b;
    }
    
    if (k > 0) {
        t -= k;
    }
    
        
    printf("%lld\n", t);
        
    return 0;
}