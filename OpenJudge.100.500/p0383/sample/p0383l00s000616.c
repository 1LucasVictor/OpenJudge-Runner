#include <stdio.h>

int main(int argc, char const *argv[]) {

    int n, m, l;
    scanf("%d %d %d", &n, &m, &l);
    int A[n][m];
    int B[m][l];
    long long int C[n][l];


    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    for (int j = 0; j < m; j++) {
        for (int k = 0; k < l; k++) {
            scanf("%d", &B[j][k]);
        }
    }



    for (int i = 0; i < n; i++) {
        for (int k = 0; k < l; k++) {
            C[i][k] = 0;
            for (int j = 0; j < m; j++) {
                C[i][k] += A[i][j] * B[j][k]; 
            }
        }
    }


    for (int i = 0; i < n; i++) {
        for (int k = 0; k < l; k++) {
            if (k != 0) {
                printf(" %lld", C[i][k]);
            } else {
                printf("%lld", C[i][k]);
            }
        }
        printf("\n");
    }


    return 0;
}
