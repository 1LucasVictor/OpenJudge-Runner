#include <stdio.h>
 
int a[100][100], b[100];
 
int main()
{
    int i, j, n, m, ans;
    scanf("%d%d", &n, &m);
    for(i=0; i<n; i++) {
        for(j=0; j<m; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    for(i=0; i<m; i++) {
        scanf("%d", &b[i]);
    }
    for(i=0; i<n; i++) {
        ans=0;
        for(j=0; j<m; j++) {
            ans+=a[i][j]*b[j];
        }
        printf("%d\n", ans);
    }
    return 0;
}