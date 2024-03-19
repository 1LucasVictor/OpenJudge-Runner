#include <stdio.h>

int main(void) 
{
    int n, m;
    scanf("%d %d", &n, &m);

    int i, j;

    int a[100][100];
    int b[100];
    int c[100] = { 0 };
    
   
    for (i = 0; i < n; i++) 
    {
        for (int j = 0; j < m; j++) 
        {
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < m; i++) 
    {
        scanf("%d", &b[i]);
    }

    for (i = 0; i < n; i++) 
    {
        for (j = 0; j < m; j++) 
        {
            c[i] = c[i] + (a[i][j] * b[j]);
        }
    }
    

    for (i = 0; i < n; i++) 
    {
        printf("%d\n", c[i]);
    }
    
    return 0;
}
