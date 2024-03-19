#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    long n,m,l,A[101][101]={0},B[101][101]={0},C[101][101]={0},i,j,k;
    
    scanf("%d %d %d",&n,&m,&l);
    
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            scanf("%d",&A[i][j]);
        }
    }
    
    for (i = 0; i < m; i++) {
        for (j = 0; j < l; j++) {
            scanf("%d",&B[i][j]);
        }
    }
    
    for (i = 0; i < n; i++) {
        for (j = 0; j < l; j++) {
            for (k = 0; k < m; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    
    for (i = 0; i < n; i++) {
        for (j = 0; j < l; j++) {
            if (j < l-1) {
                printf("%d ",C[i][j]);
            } else {
                printf("%d",C[i][j]);
            }
            
        }
        printf("\n");
    }
    
    
    return 0;
}