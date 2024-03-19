#include <math.h>
#include <stdio.h>
#include <string.h>
long long a, b, c, k, ans = 0;
int main(void) {
    scanf("%lld %lld %lld %lld", &a, &b, &c, &k);
    if (k <= a) {
        printf("%lld\n", k);
    } else {
        for (int i = 0; i < a; i++) {
            ans++;
            k--;
        }
        if (k < b) {
            printf("%lld\n", ans);
        } else {
            for (int i = 0; i < b; i++) {
                k--;
            }
            ans = ans - k;
        }

        printf("%lld\n", ans);
    }
}