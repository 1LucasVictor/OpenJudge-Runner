#include <stdio.h>

#define MAX 5000

int main(void)
{
    int i, j;

    int n;
    while (scanf("%d", &n) != EOF) {
        if (n == 0) {
            break;
        }

        int num[MAX];
        for (i = 0; i < n; i++) {
            scanf(" %d", num + i);
        }

        int max = -100000;
        for (i = 0; i < n; i++) {
            int sum_ij[MAX] = {0};
            int max_i;
            max_i = sum_ij[i] = num[i];
            for (j = i + 1; j < n; j++) {
                sum_ij[j] = sum_ij[j - 1] + num[j];
                if (sum_ij[j] > max_i) {
                    max_i = sum_ij[j];
                }
            }
            if (max_i > max) {
                max = max_i;
            }
        }

        printf("%d\n", max);
    }

    return 0;
}