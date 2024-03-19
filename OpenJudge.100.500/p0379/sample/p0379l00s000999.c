#include<stdio.h>

int main(void)
{
    int n,m;
    int a[100][100];
    int b[100];
    int i,l,k,j,o;
    int c[100];

    scanf("%d %d", &n, &m);
    for( i = 1; i <= n ; i++){
        for( l = 1; l <= m; l++){
            scanf("%d", &a[i][l]);
        }
    }
    for( k = 1; k <= m; k++){
        scanf("%d", &b[k]);
    }
    for( o = 1; o <= n; o++){
        for( j = 1; j <= m; j++){
            c[o] = c[o] + (b[j] * a[o][j]);
        }
    }
    for( int p = 1; p <= n; p++){
        printf("%d\n", c[p]);
    }
    return 0;
}
        
