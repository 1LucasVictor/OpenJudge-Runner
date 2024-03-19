#include <stdio.h>
 
int main(void)
{
    int n, m;
    int i, j;
    int a[100][100]={};
    int b[100]={};
    int c[100]={};
     
    scanf("%d%d", &n, &m);
     
    for(i=0; i<n; i++) {
        for(j=0; j<m; j++)
            scanf("%d", &a[i][j]);
    }
    for(j=0; j<m; j++)
        scanf("%d", &b[j]);
     
    for(i=0; i<n; i++) {
        for(j=0; j<m; j++)
            c[i]+=a[i][j]*b[j];
        printf("%d\n", c[i]);
    }
     
    return 0;
}
