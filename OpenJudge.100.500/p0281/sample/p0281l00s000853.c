#include <stdio.h>
#define MAX 100
#define INFTY (1 << 21)
#define W 0
#define G 1
#define B 2

int i, j, v, n, M[MAX][MAX];

int main()
{

    int k, c, u, v;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            M[i][j] = INFTY;
        }
    }
    for (i = 0; i < n; i++)
    {
        scanf("%d%d", &u, &k);
        for (j = 0; j < k; j++)
        {
            scanf("%d%d", &v, &c);
            M[u][v] = c;
        }
    }

    int minv;
    int d[MAX], color[MAX];

    for (i = 0; i < n; i++)
    {
        d[i] = INFTY;
        color[i] = W;
    }

    d[0] = 0;
    color[0] = G;
    while (1)
    {
        minv = INFTY;
        int u = -1;
        for (i = 0; i < n; i++)
        {
            if (minv > d[i] && color[i] != B)
            {
                u = i;
                minv = d[i];
            }
        }
        if (u == -1)
            break;
        color[u] = B;
        for (v = 0; v < n; v++)
        {
            if (color[v] != B && M[u][v] != INFTY)
            {
                if (d[v] > d[u] + M[u][v])
                {
                    d[v] = d[u] + M[u][v];
                    color[v] = G;
                }
            }
        }
    }

    for (i = 0; i < n; i++)
    {
        printf("%d ", i);
        if (d[i] == INFTY)
            printf("-1");
        else
            printf("%d", d[i]);
        printf("\n");
    }
    return 0;
}
