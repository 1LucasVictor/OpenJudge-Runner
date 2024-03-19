#include<stdio.h>
 
int main() {
    int a[100][100], b[100][100], m, n, l, i, j, k;
    long long c = 0;
    scanf("%d %d %d", &m, &n ,&l);
    for(i = 0; i < m; ++i) {
        for(j = 0; j < n; ++j) {
            scanf("%d", &a[i][j]);
        }
    }
    for(i = 0; i < n; ++i) {
        for(j = 0; j < l; ++j) {
            scanf("%d", &b[i][j]);
        }
    }
    for(i = 0; i < m; ++i) {
        for(j = 0; j < l; ++j) {
            for(k = 0; k < n; ++k) {
                c += a[i][k] * b[k][j];
            }
            if(j == l - 1) {
                printf("%lld\n", c);
                c = 0;
                continue;
            }
            printf("%lld ", c);
            c = 0;
        }
        // printf("\n");
    }
    // puts("");
    return 0;
}
