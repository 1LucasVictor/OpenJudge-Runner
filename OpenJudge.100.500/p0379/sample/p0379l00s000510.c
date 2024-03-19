#include <stdio.h>
int main(void){
    int i, j;
    int m, n;
    scanf("%d %d\n", &n, &m);
    int matrixA[n][m];
    int matrixB[m];
    int matrixR[n];
    for(i = 0; i < n; i++){
        matrixR[i] = 0;
    }
    
    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            scanf("%d", &matrixA[i][j]);
        }
    }
    for(i = 0; i < m; i++){
        scanf("%d\n", &matrixB[i]);
    }
    
    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
           matrixR[i] += matrixA[i][j]*matrixB[j];
        }
    }
    
    for(i = 0; i < n; i++){
        printf("%d\n", matrixR[i]);
    }
    return 0;
}
