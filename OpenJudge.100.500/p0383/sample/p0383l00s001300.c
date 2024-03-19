#include <stdio.h>

int main () {
    int n, m, l;
    long long A[100][100], B[100][100],C[100][100] = {0};

    scanf("%d %d %d", &n, &m, &l);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%lld", &A[i][j]);
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < l; j++)
        {
            scanf("%lld", &B[i][j]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < l; j++)
        {
            C[i][j] = 0;
            for (int k = 0; k < m; k++)
            {
                C[i][j] = C[i][j] + A[i][k]*B[k][j];
            }
        }
    }
    
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < l; j++)
        { 
            if (j == 0)
            printf("%lld", C[i][j]);
            else
            printf(" %lld", C[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
