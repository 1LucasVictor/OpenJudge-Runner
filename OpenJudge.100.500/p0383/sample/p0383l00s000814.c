#include <stdio.h>

long long A[101][101];
long long B[101][101];
long long C[101][101];

int main(void)
{
    int n, m, l;
    int i, j, k;

    scanf("%d%d%d", &n, &m, &l);
    for (i = 1; i <= n; i++){
        for (j = 1; j <= m; j++){
            scanf("%d", &A[i][j]);
        }
    }
    
    for (i = 1; i <= m; i++){
        for (j = 1; j <= l; j++){
            scanf("%d", &B[i][j]);
        }
    }

    for (i = 1; i <= n; i++){
        for (j = 1; j <= l; j++){
            for (k = 1; k <= m; k++){
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    for (i = 1; i <= n; i++){
        for (j = 1; j <= l; j++){
            if (j > 1){
                printf(" ");
            }
            printf("%ld", C[i][j]);
        }
        printf("\n");
    }

    return (0);
}

