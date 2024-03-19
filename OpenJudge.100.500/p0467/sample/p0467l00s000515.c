#include <math.h>
#include <stdio.h>
#include <string.h>
int a, b, c, k, ans = 0;
int main(void) {
    scanf("%d %d %d %d", &a, &b, &c, &k);
    if (k < a) {
        printf("%d\n", a);
    } else {
        for (int i = 0; i < a; i++) {
            ans++;
            k--;
        }
        if (k >= b) {
            for (int i = 0; i < b; i++) {
                k--;
            }
            for (int i = 0; i < k; i++) {
                ans--;
            }
        }
        printf("%d\n", ans);
    }
}