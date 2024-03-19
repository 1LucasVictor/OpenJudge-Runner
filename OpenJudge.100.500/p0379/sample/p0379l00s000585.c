#include <stdio.h> 
 
int main(void)
{
    int A[100][100] = {0}, b[100] = {0}, c[100] = {0};
    int m, n, i, j;
 
    scanf("%d %d", &n, &m);
 
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < m; j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
 
    for(i = 0; i < m; i++)
    {
        scanf("%d", &b[i]);
    }
 
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < m; j++)
        {
            c[i] = c[i] + A[i][j] * b[j];
        }
    }
 
    for(i = 0; i < n; i++)
    {
        printf("%d\n",c[i]);
    }
 
    return 0;
}