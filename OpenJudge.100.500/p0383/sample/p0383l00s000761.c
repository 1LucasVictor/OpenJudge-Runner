/*
 * ID: ITP1_7_D
 * Problem: Matrix Multiplication
 */

#include <stdio.h>

int main(void)
{
    int a[100][100];
    int b[100][100];
    int n, m, l;

    scanf("%d %d %d", &n, &m, &l);
        int i, j;
    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
            scanf("%d", &a[i][j]);
    for (i = 0; i < m; i++)
        for (j = 0; j < l; j++)
            scanf("%d", &b[i][j]);

    int k;
    for (i = 0; i < n; i++) {
        for (j = 0; j < l; j++) {
            long sum = 0;
            for (k = 0; k < m; k++)
                sum += a[i][k] * b[k][j];
            printf("%ld%s", sum, j < l - 1 ? " " : "");
        }
        printf("\n");
    }

    return 0;
}

