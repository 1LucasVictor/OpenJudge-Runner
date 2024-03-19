#include <stdio.h>

int main() {
    int a, b, c, k;
    scanf("%d %d %d %d", &a, &b, &c, &k);
    int ans = 0;
    if (k > a) ans += a, k -= a;
    else ans += k, k = 0;
    if (k > b) k -= b;
    else k = 0;
    ans -= k;
    printf("%d\n", ans);
}