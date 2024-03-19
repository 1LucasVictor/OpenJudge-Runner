#include <stdio.h>

int main()
{
        int n, i, j, k;
        long long a[5000], sum, max;

        while (scanf("%d", &n) && n != 0) {
                for (i = 0; i < n; i++)
                       scanf("%lld", &a[i]);

                max = -100000;
                for (j = 0; j < n; j++) {
                        sum = 0;
                        for (i = j; i < n; i++) {
                                sum = sum + a[i];
                                if (sum > max) {
                                        max = sum;
                                }
                        }
                }
                printf("%lld\n", max);
        }
        return 0;
}