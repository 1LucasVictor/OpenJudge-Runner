#include <stdio.h>
int main(void){
    int n, m, l, i, j, k;
    long A[101][101];
    long B[101][101];
    long C[101][101];    
    scanf("%d %d %d", &n, &m, &l);
    for( i = 1; i <= n; i++){
        for( j = 1; j <= m; j++){        
            scanf("%ld", &A[i][j]);
        }
    }
    for( i = 1; i <= m; i++){
        for( j = 1; j <= l; j++){
            scanf("%ld", &B[i][j]);
        }
    }
    for( i = 1; i <= n; i++){
        for( j = 1; j <= l; j++){
            for( k = 1; k <= m; k++){
                C[i][j] = C[i][j] + A[i][k] * B[k][j];
            }
        }
    }
    for( i = 1; i <= n; i++){
        for( j = 1; j <= l; j++){
            printf("%ld", C[i][j]);
            if( j != l )    printf(" ");
        }
        printf("\n");
    }
    return 0;
}

