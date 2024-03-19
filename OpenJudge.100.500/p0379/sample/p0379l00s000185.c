#include<stdio.h>

int main(void)
{
    char buffer[256];
    int n, m;
    int i, j, k;
    int A[100][100], B[100], C[100];

    fgets(buffer, 256, stdin);
    sscanf(buffer, "%d %d", &n, &m);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }
    for (j = 0; j < m; j++)
    {
        scanf("%d", &B[j]);
    }

    for (i = 0; i < n; i++)
    {
        C[i] = 0;
        for (j = 0; j < m; j++)
        {
            C[i] += A[i][j] * B[j];
        }
    }

    for (j = 0; j < n; j++)
    {
        printf("%d\n", C[j]);
    }

    return(0);
}
