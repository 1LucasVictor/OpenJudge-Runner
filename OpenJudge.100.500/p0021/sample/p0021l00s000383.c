#include <stdio.h>

int main(void)
{
    int n, i;
    int a[5000];
    int j, k;
    int sum, max;

    for (;;) {
        scanf("%d", &n);
        if (n == 0) break;

        for (i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }

        max = -1000000;
        for (j = 0; j < n; j++) {
            sum = 0;
            for (k = j; k < n; k++) {
                sum += a[k];
                if (sum > max) max = sum;
            }
        }

        printf("%d\n", max);
    }

    return 0;
}