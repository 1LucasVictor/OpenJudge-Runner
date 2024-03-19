#include <stdio.h>
#include <math.h>

int main() {
    long long int a, ans;
    double b;
    scanf("%lld %lf", &a, &b);
    ans = floor(a * b);
    printf("%lld\n", ans);

    return 0;
}