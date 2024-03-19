#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    int mat[n][m];
    int vec[m];
    int sum[n];
    
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
    
    for (int k=0; k<m; k++) {
        scanf("%d", &vec[k]);
    }
    
    for (int l=0; l<n; l++) {
        sum[l] = 0;
    }
    
    for (int s=0; s<n; s++) {
        for (int t=0; t<m; t++) {
            sum[s] += (mat[s][t] * vec[t]);
        }
        printf("%d\n", sum[s]);
    }
    return 0;
}

