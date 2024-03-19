#include <stdio.h>

int main()
{
        int n, a[5000], i, j, k, sum, max;

        while (scanf("%d", &n) && n != 0) {
                for (i = 0; i < n; i++)
                       scanf("%d", &a[i]);

                max = 0;
                for (j = 0; j < n; j++) {
                        sum = 0;
                        for (i = j; i < n; i++) {
                                sum += a[i];
                                if (sum > max) {
                                        max = sum;
                                }
                        }
                }
                printf("%d\n", max);
        }
        return 0;
}