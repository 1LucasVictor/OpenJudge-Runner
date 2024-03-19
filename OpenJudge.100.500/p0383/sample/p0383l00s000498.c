#include <stdio.h>
 int main(void) {
    int n, m, l, a[100][100], b[100][100], i, j, k;
    long num;
 
    scanf("%d %d %d", &n, &m, &l);
    for (i=0; i<n; i++) {
        for (j=0; j<m; j++) scanf("%d", &a[i][j]);
    }
    for (i=0; i<m; i++) {
        for (j=0; j<l; j++) scanf("%d", &b[i][j]);
    }
    for (i=0; i<n; i++) {
        for (k=0; k<l; k++) {
        num=0;
            for (j=0; j<m; j++) {
        num += a[i][j]*b[j][k];
            }
        printf("%ld", num);
            if (k!=l-1) printf(" ");
        }
        printf("\n");
    }
}
