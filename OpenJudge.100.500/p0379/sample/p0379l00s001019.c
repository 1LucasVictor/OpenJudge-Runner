#include <stdio.h>

int main()
{
    int n, m;
    int A[100][100], b[100];
    int ans;
    int i, j;

    scanf("%d %d", &n, &m);
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            scanf("%d", &A[i][j]);
        }
    }
    for (i = 0; i < m; i++) {
        scanf("%d", &b[i]);
    }

    for (i = 0; i < n; i++) {
        ans = 0;
        for (j = 0; j < m; j++) {
            ans += A[i][j] * b[j];
        }
        printf("%d\n", ans);
    }

    return 0;
}
