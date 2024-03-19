#include <stdio.h>

int main(void){
    int n, m, l, cn;
    int i, j, k;
    int a[101][101];
    int b[101][101];

    scanf("%d %d %d", &n, &m, &l);
    
    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            scanf("%d", &a[i][j]);
        }
    }
    for(j = 0; j < m; j++){
        for(k = 0; k < l; k++){
            scanf("%d", &b[j][k]);
        }
    }
    
    for(i = 0; i < n; i++){
        for(k = 0; k < l; k++){
            cn = 0;
            for(j = 0; j < m; j++){
                cn += a[i][j] * b[j][k];
            }
            printf("%1d", cn);
            if(k == l - 1) puts("");
            else printf(" ");
        }
    }
    return 0;
}