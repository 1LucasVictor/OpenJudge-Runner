#include <stdio.h>

int main(void) {

    int n, m, l;
    scanf("%d %d %d", &n, &m, &l);

    int A[100][100];
    int B[100][100];
    int C[100][100];

    int i, j, k;

    //A
    for (i = 0; i < n; ++i) {
        for (j = 0; j < m; ++j) {
            scanf("%d", &A[i][j]);
        }
    }

    //B
    for (i = 0; i < m; ++i) {
        for (j = 0; j < l; ++j) {
            scanf("%d", &B[i][j]);
        }
    }

    //C: multiply
    for (i = 0; i < n; ++i) {
        for (j = 0; j < m; ++j) {
            for (k = 0; k < l; ++k) {
                C[i][k] += A[i][j] * B[j][k];
            }
        }
    }

    for (i = 0; i < n; ++i) {
        for (j = 0; j < l - 1; ++j) {
            printf("%d ", C[i][j]);
        }
        printf("%d\n", C[i][l - 1]);
    }

    return 0;
}