#include <stdio.h>

int main(void)
{
    int n, m;
    int a[100][100] = {0};
    int b[100] = {0};
    int ans[100] = {0};
    int i, j;

    scanf("%d %d", &n, &m);
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < m; i++) {
        scanf("%d", &b[i]);
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            ans[i] += a[i][j] * b[j];
        }
        printf("%d\n", ans[i]);
    }
    return 0;
}