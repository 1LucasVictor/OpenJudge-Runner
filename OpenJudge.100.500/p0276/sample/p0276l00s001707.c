#include<stdio.h>

int main(){
    int n, i, j, k, l, m, A[100][100] = {0};
    
    scanf("%d", &n);
    for (i = 0; i < n; i++){
        scanf("%d %d", &k, &m);
        for (j = 0; j < m; j++){
            scanf("%d", &l);
            A[k-1][l-1] = 1;
        }
    }
    
    for(i = 0; i < n; i++){
        for(j = 0; j < n - 1; j++){
            printf("%d ", A[i][j]);
        }
        printf("%d\n", A[i][n-1]);
    }
    
    return 0;
}
