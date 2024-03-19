/*
 * ID: ITP1_7_B
 * Problem: Number of combination
 */

#include <stdio.h>

int main(void)
{
    int n, sum;

    while (1) {
        scanf("%d %d", &n, &sum);
        if (n == 0 && sum == 0)
            return 0;
        int i, j, k, count = 0;
        for (i = 1; i <= n; i++) {
            for (j = i + 1; j <= n; j++) {
                k = sum - i - j;
                if (k > j && k <= n) 
                    count++;
            }
        }
        printf("%d\n", count);
    }

    return 0;
}

