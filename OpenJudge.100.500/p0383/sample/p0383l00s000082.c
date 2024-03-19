#include <stdio.h>
//#include <string.h>

int main() {
    int n, m, l, i, j, s, k;

    scanf("%d %d %d", &n, &m, &l);

    int first[n][m];
    int second[m][l];
    int out[n][l];

    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            scanf("%d", &first[i][j]);
        }
    }

    for (i = 0; i < m; i++) {
        for (j = 0; j < l; j++) {
            scanf("%d", &second[i][j]);
        }
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < l; j++) {
            s = 0;
            for (k = 0; k < m; k++) {
                s += first[i][k] * second[k][j];
            }
            out[i][j] = s;
        }
    }

    for (int i1 = 0; i1 < n; ++i1) {
        for (int j1 = 0; j1 < l; ++j1) {
            if (j1 == l-1)
                printf("%d\n", out[i1][j1]);
            else
                printf("%d ", out[i1][j1]);
        }
    }

    return 0;
}
