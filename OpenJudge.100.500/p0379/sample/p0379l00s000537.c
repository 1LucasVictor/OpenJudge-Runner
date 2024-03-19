#include <stdio.h>

int main(){
    int n, m;
    scanf("%d %d", &n, &m);
    int a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    int b[m];
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &b[i]);
    }
    int v=0;
    for (int i = 0; i < n; i++)
    {
        v=0;
        for (int j = 0; j < m; j++)
        {
            v+=b[j]*a[i][j];
        }
        printf("%d\n", v);
    }
    
    
}
