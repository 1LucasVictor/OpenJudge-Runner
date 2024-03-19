#include <stdio.h>

int main(void) {
    double b;
    long long int ans, a;
    scanf("%lld %lf", &a, &b);
    ans = (a * (b * 100)) / 100;
    printf("%lld\n", ans);
    return 0;
}
