#include <stdio.h>

int main(void)
{
    int i, j;

    int n;
    while (scanf("%d", &n) != EOF) {
        if (n == 0) {
            break;
        }

        int num[n];
        for (i = 0; i < n; i++) {
            scanf(" %d", num + i);
        }

        int sum_ij[n][n];
        int max_i[n];
        int max = -100000;
        for (i = 0; i < n; i++) {
            max_i[i] = sum_ij[i][i] = num[i];
            for (j = i + 1; j < n; j++) {
                sum_ij[i][j] = sum_ij[i][j - 1] + num[j];
                if (sum_ij[i][j] > max_i[i]) {
                    max_i[i] = sum_ij[i][j];
                }
            }
            if (max_i[i] > max) {
                max = max_i[i];
            }
        }

        printf("%d\n", max);
    }

    return 0;
}