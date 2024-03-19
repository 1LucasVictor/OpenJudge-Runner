#include<stdio.h>
#define MAX 100

int main(){
    int a[MAX][MAX], b[MAX][MAX], c[MAX][MAX], n, m, l, i, j, k;
    scanf("%d %d %d", &n, &m, &l);
    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            scanf("%d", &a[i][j]);
        }
    }
    for(i = 0; i < m; i++){
        for(j = 0; j < l; j++){
            scanf("%d", &b[i][j]);
        }
    }

    for(i = 0; i < n; i++){
        for(j = 0; j < l; j++){
            for(k = 0; k < m; k++){
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    for(i = 0; i < n; i++){
        for(j = 0; j < l; j++){
            printf("%d", c[i][j]);
            if(j != l - 1) printf(" ");
        }
        printf("\n");
    }
    return 0;
}
