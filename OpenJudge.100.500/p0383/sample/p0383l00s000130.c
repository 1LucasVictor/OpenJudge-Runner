#include <stdio.h>

int a[100][100], b[100][100];

int main()
{
    int i, j, k, l ,m, n;
    scanf("%d%d%d", &l, &m, &n);
    for(i=0; i<n; i++) {
        for(j=0; j<m; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    for(i=0; i<m; i++) {
        for(j=0; j<l; j++) {
            scanf("%d", &b[i][j]);
        }
    }
    long long ans;
    for(i=0; i<l; i++) {
        for(j=0; j<n; j++) {
            ans=0;
            for(k=0; k<m; k++) {
               ans+=a[i][k]*b[k][j];
            }
            if(j)putchar(' ');
            printf("%lld", ans);
        }
        putchar('\n');
    }
    return 0;
}