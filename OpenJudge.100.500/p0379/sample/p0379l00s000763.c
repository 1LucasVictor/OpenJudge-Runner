#include <stdio.h>

int main(void) {

    int n, m;
    scanf("%d %d", &n, &m);

    int A[100][100];
    int b[100];
    int Ab[100] = {0};

    int i, j;
    for (i = 0; i < n; ++i) {
        for (j = 0; j < m; ++j) {
            scanf("%d", &A[i][j]);
        }
    }
    for (i = 0; i < m; ++i) {
        scanf("%d", &b[i]);
    }

    //multiply
    for (i = 0; i < n; ++i) {
        for (j = 0; j < m; ++j) {
            Ab[i] += A[i][j] * b[j];
        }
    }

    for (i = 0; i < n; ++i) {
        printf("%d\n", Ab[i]);
    }

    return 0;
}