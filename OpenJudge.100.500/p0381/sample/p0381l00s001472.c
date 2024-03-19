#include <stdio.h>

int main() {
    int n, x, ans, mxr, mxl;
    while (1) {
        scanf("%d %d", &n, &x);
        if (n == 0 && x == 0) break;
        ans = 0;
        for (int i = 1; i <= n; i++) {
            mxr = i - 1, mxl = x - i - mxr;
            if (mxl < 1) mxr += mxl - 1, mxl = 1;
            if (mxl >= mxr) continue;
            ans += (mxr - mxl + 1) / 2;
        }
        printf("%d\n", ans);
    }
}
