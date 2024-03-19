#include <stdio.h>

int main()
{
    int n, m, l, i, j, k, a[128][128], b[128][128], c[128][128] = {0};
    
    scanf("%d %d %d\n", &n, &m, &l);
    
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for(j = 0; j < m; j++)
    {
        for(k = 0; k < l; k++)
        {
            scanf("%d", &b[j][k]);
        }
    }
    
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < m; j++)
        {
            for(k = 0; k < l; k++)
            {
                c[i][k] += a[i][j] * b[j][k];
            }
        }
    }
    
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < l; j++)
        {
            printf("%ld", c[i][j]);
            if(j < l - 1)
            {
                printf(" ");
            }
            else
            {
                printf("\n");
            }
        }
    }
    return 0;
}