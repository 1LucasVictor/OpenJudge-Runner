#include <stdio.h>

int main() {
    int n, i, j, a[100][100], u, k, b;
    scanf("%d", &n);
    
    for (i = 0; i < n; ++i) {
        for (j = 0; j < n; ++j) {
            a[i][j]  = 0;
        }
    }
    
    for (i = 0; i < n; ++i) {
        scanf("%d %d", &u, &k);
        for (j = 0; j < k; ++j) {
            scanf("%d", &b);
            a[u-1][b-1]  = 1;
        }
    }
    
    
    for (i = 0; i < n; ++i) {
        for (j = 0; j < n; ++j) {
            printf("%d", a[i][j]);
            if (j != n-1) printf(" ");
            
        }
        printf("\n");
    }
    return 0;
}