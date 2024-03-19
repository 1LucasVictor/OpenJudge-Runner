#include <stdio.h>

int main(int argc, char const *argv[]) {
    int n, m;
    scanf("%d %d", &n, &m);

    int mat[n][m];
    int v[m];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    for (int i = 0; i < m; i++) {
        scanf("%d", &v[i]);
    }

    int a[n];

    for (int i = 0; i < n; i++) {
        a[i] = 0;
        for (int j = 0; j < m; j++) {
            a[i] += mat[i][j] * v[j]; 
        }
    }

    for (int i = 0; i < n; i++) {
        printf("%d\n", a[i]);
    }

    return 0;
}
