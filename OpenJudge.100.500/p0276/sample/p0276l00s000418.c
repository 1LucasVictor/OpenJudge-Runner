#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int main(){
    bool **A;
    int i, j, k, l, n, u;
    scanf("%d", &n);
    A = malloc(sizeof(bool*) * n);
    for(l = 0; l < n; l++){
        A[l] = malloc(sizeof(bool) * n);
        for(k = 0; k < n; k++){
            A[l][k] = false;
        }
    }
    for(l = 0; l < n; l++){
        scanf("%d%d", &u, &k);
        for(j = 0; j < k; j++){
            scanf("%d", &i);
            A[u - 1][i - 1] = true;
        }
    }
    for(l = 0; l < n; l++){
        for(j = 0; j < n; j++){
            printf("%d", A[l][j]);
            if(j != n - 1){
                printf(" ");
            }
        }
        printf("\n");
    }
    for(l = 0; l < n; l++){
        free(A[l]);
    }
    free(A);
    return 0;
}
