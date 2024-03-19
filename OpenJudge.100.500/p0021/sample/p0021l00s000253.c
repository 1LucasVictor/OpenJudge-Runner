#include <stdio.h>

int main(void)
{
    for (;;) {
        int n, i, j, a[5000];
        int max = -1000000;

        scanf("%d", &n);
        if (n == 0) break;

        for (i = 0; i < n; i++)
            scanf("%d", &a[i]);

        for (i = 0; i < n; ++i) {
            int sum = 0;
            for (j = i; j < n; ++j) {
                sum += a[j];
                if (sum > max) max = sum;
            }
        }

        printf("%d\n", max);
    }

    return 0;
}