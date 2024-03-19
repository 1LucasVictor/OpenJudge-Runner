#include <stdio.h>

int main(void) {

    int i, j, k;
    int n, m, l;

    scanf("%d%d%d", &n, &m, &l);
    int mat_A[n][m], mat_B[m][l], mat_C[n][l];
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            mat_A[i][j] = 0;
        }
    }
    for (i = 0; i < m; i++) {
        for (j = 0; j < l; j++) {
            mat_B[i][j] = 0;
        }
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < l; j++) {
            mat_C[i][j] = 0;
        }
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            scanf("%d", &mat_A[i][j]);
        }
    }
    for (i = 0; i < m; i++) {
        for (j = 0; j < l; j++) {
            scanf("%d", &mat_B[i][j]);
        }
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < l; j++) {
            for (k = 0; k < m; k++) {
                mat_C[i][j] += mat_A[i][k] * mat_B[k][j];
            }
        }
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < l; j++) {
            if (j == 0) {
                printf("%d", mat_C[i][j]);
            } else {
                printf(" %d", mat_C[i][j]);
            }
        }
        printf("\n");
    }

    return 0;

}