#include <stdio.h>
static int n, m, l, a[100][100], b[100][100], c[100][100];
int main(void) {
    int i, j, k;
    scanf("%d%d%d", &n, &m, &l);
    for (i = 0; i < n; ++i)
        for (j = 0; j < m; ++j)
            scanf("%d", &a[i][j]);
    for (i = 0; i < m; ++i)
        for (j = 0; j < l; ++j)
            scanf("%d", &b[i][j]);
    for (i = 0; i < n; ++i)
        for (j = 0; j < l; ++j)
            for (k = 0; k < m; ++k)
                c[i][j] += a[i][k] * b[k][j];
    for (i = 0; i < n; ++i) {
        for (j = 0; j < l; ++j) {
            if (j) putchar(' ');
            printf("%d", c[i][j]);
        }
        putchar('\n');
    }
    return 0;
}