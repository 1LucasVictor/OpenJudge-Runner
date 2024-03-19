#include <stdio.h>

int main(void)
{
    int n, a[5000], i, j, k;
    long long int sum, max;
    
    while (1) {
        scanf("%d", &n);
        if (n == 0) {
            break;
        }
        for (i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }
        sum = 0;
        for (i = 0; i < n; i++) {
            for (j = i; j < n; j++) {
                sum += a[j];
                if (i == 0 && j == 0) {
                 max = sum;
                } else {
                    if (max < sum)
                        max = sum;
                }
            }
            sum = 0;
        }
        printf("%lld\n", max);
    }
    return 0;
}