#include <stdio.h>

int main()
{
    int A[100][100], b[100], c[100];
    int n, m;
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d ", &A[i][j]);
        }
    }
    for (int i = 0; i < m; i++)
    {
        scanf("%d ", &b[i]);
    }
    for (int i = 0; i < n; i++)
    {
        c[i] = 0;
        for (int j = 0; j < m; j++)
        {
            c[i] = c[i] + A[i][j] * b[j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d\n", c[i]);
    }
    return 0;
}
