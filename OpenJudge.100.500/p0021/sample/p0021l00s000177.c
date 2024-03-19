#include <stdio.h>
#define max(a, b) a>b?a:b

int data[5000];

int main(void)
{
    int i, j, n, ans, tmp;
    while (scanf("%d", &n), n) {
        ans = 0;
        for (i = 0; i < n; i++) {
            scanf("%d", &data[i]);
        }
        for (i = 0; i < n; i++) {
            tmp = 0;
            for (j = i; j < n; j++) {
                tmp += data[j];
                ans = max(ans, tmp);
            }
        }
        printf("%d\n", ans);
    }
    return 0;
}