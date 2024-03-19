#include<stdio.h>

int main()
{
    int n, m, a[100][100], b[100], i, j, ans;

    scanf("%d%d", &n, &m);
    for(i = 0; i < n; i++) {
        scanf("\n");
        for(j = 0; j < m; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    for(j = 0; j < m; j++) {
        scanf("\n");
        scanf("%d", &b[j]);
    }

    for(i = 0; i < n; i++) {
        ans = 0;
        for(j = 0; j < m; j++) {
            ans += a[i][j] * b[j];
        }
        printf("%d\n", ans);
    }

    return 0;
}

