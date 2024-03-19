/*
 * ID: ITP1_6_D
 * Problem: Matrix vector multiplication
 */

#include <stdio.h>

int main(void)
{
    int n, m;
    int a[100 + 1][100 + 1], b[100 + 1];

    scanf("%d %d", &n, &m);
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            scanf("%d", &a[i][j]);

    for (int i = 1; i <= m; i++)
        scanf("%d", &b[i]);


    for (int i = 1; i <= n; i++) {
        int sum = 0;
        for (int j = 1; j <= m; j++)
            sum += a[i][j] * b[j];
        printf("%d\n", sum);
    }

    return 0;
}

