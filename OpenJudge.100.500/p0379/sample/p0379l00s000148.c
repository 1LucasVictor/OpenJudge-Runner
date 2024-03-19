#include <stdio.h>

int main() {
    int i, j;
    int n, m;

    int mat[100][100];
    int vec[100];
    int result[100] = {};

    scanf("%d %d", &n, &m);

    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
    for (i = 0; i < m; i++) {
        scanf("%d", &vec[i]);
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            result[i] += mat[i][j] * vec[j];
        }
    }

    for (i = 0; i < n; i++) {
        printf("%d\n", result[i]);
    }

    return 0;
}
