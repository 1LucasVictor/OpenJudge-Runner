#include <stdio.h>
int main(void){
    int a[101][101], b[101], c[101];
    int i, j;
    int n, m;
 
    scanf("%d%d", &n, &m);
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) scanf("%d", &a[i][j]);
    }
    for (j = 0; j < m; j++) scanf("%d", &b[j]);
 
    for (i = 0; i < n; i++) {
        c[i] = 0;
        for (j = 0; j < m; j++) c[i] += a[i][j] * b[j];
    }
 
    for (i = 0; i < n; i++) {
        printf("%d\n", c[i]);
    }
    return 0;
}
