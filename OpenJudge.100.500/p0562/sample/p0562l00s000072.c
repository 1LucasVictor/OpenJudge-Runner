#include <stdio.h>

int main(void) {
    int a, b, sum, ans;
    scanf("%d %d", &a, &b);
    sum = 1; ans = 0;

    if (b == 1) printf("%d\n", ans);
    else {
        for (sum; sum < b;) {
            sum += (a-1);
            ans++;
        }
        printf("%d\n", ans);
    }

    return 0;
}