#include <stdio.h>
#include <math.h>

int main() {
    long long n, d, x, y, max = 0;
    scanf("%lld%lld", &n, &d);

    for (int i = 0; i < n; ++i) {
        scanf("%lld%lld", &x, &y);

        if ((sqrt(x * x + y * y)) <= d)
            ++max;
    }
    
    printf("%d", max);
    
    return 0;
}