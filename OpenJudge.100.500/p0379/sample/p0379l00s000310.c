#include<stdio.h>

int main(void)
{
    int n, m, i, j, a[100][100], b[100], c[100],goukei;

    scanf("%d %d", &n, &m);

    for (i = 1;i <= n;i++)
    {
        for (j = 1;j <= m;j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for (j = 1;j <= m;j++)
    {
        scanf("%d", &b[j]);
    }

    for (i = 1;i <= n;i++)
    {
        goukei = 0;

        for (j = 1;j <= m;j++)
        {
            goukei = goukei + a[i][j] * b[j];
        }
        c[i] = goukei;
    }

    for (i = 1;i <= n;i++)
    {
        printf("%d\n", c[i]);
    }
    return 0;
}
