#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
 
int main()
{
    int a[101][101], b[101][101];
    long long c[101][101], s;
    int i, j, k;
    int n, m, l;
 
    scanf("%d%d%d", &n, &m, &l);
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) scanf("%d", &a[i][j]);
    }
    for (i = 0; i < m; i++) {
        for (j = 0; j < l; j++) scanf("%d", &b[i][j]);
    }
 
    for (i = 0; i < n; i++) {
        for (j = 0; j < l; j++) {
            s = 0;
            for (k = 0; k < m; k++) {
                s += a[i][k] * b[k][j];
            }
            c[i][j] = s;
        }
    }
 
    for (i = 0; i < n; i++) {
        printf("%lld", c[i][0]);
        for (j = 1; j < l; j++) printf(" %lld", c[i][j]);
        putchar('\n');
    }
    return 0;
}
