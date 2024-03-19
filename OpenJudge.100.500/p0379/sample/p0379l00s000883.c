#include <stdio.h>

int main()
{
    int n,m,i,k,j;
    int sum[100] = {0};
    
    scanf("%d %d", &n,&m);
    
    int a[n][m];
    int xb[m];
    
    //行列A
    for(i=0; i<n; i++)
    {
        for(k=0; k<m; k++)
        {
            scanf("%d ", &a[i][k]);
        }
    }
    
    //行列b
    for(i=0; i<m; i++)
    {
        scanf("%d", &xb[i]);
    }
    
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            sum[i] += a[i][j] * xb[j];
        }
        printf("%d\n", sum[i]);
    }
    
    return 0;
}