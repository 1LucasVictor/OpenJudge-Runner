#include <stdio.h>

int main()
{
        int n, m;
        scanf("%d %d", &n, &m);

        int a[n][m];
        int b[m];
        int result[n];

        for (int i = 0; i < n; i++) {
                for (int j = 0; j < m; j++) {
                        scanf("%d", &a[i][j]);
                }
        }

        for (int i = 0; i < m; i++) {
                scanf("%d", &b[i]);
        }

        for (int i = 0; i < n; i++) {
                result[i] = 0;
        }

        for (int i = 0; i < n; i++) {
                for (int j = 0; j < m; j++) {
                        result[i] += a[i][j] * b[j];
                }
        }

        for (int i = 0; i < n; i++) {
                printf("%d\n", result[i]);
        }
}

