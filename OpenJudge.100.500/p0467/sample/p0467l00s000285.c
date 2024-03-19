#include<stdio.h>
int main(void) {
    int a, b, c, k;
    int ans=0;
    int i;
    scanf("%d%d%d%d", &a, &b, &c, &k);
    for (i = 0; i < k; i++) {
        if (a > 0) {
            ans = ans + 1;
            a = a - 1;
        }
        else if (a = 0) {
            if (b > 0) {
                b = b - 1;
            }
            else if (b = 0) {
                if (c > 0) {
                    ans = ans - 1;
                    c = c - 1;
                }
            }
        }
    }
    printf("%d", ans);
    return 0;
}