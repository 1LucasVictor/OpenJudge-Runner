#include <stdio.h>

int main(void)
{
    int a[101][101];
    int b[101];
    int c;
    int n, m;
    int i, j;

    scanf("%d%d", &n, &m);
    for (i = 1; i <= n; i++){
        for (j = 1; j <= m; j++){
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 1; i <= m; i++){
        scanf("%d", &b[i]);
    }

    for (i = 1; i <= n; i++){
        c = 0;
        for (j = 1; j <= m; j++){
            c += a[i][j]*b[j];
        }
        printf("%d\n", c);
    }
    return (0);
}

