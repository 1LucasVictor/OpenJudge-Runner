#include <stdio.h>

int main(){
    int A[100][100], b[100], c[100] = {0}, n, m, i, j;
    scanf("%d%d", &n, &m);
    for(i=0; i<n; i++) for(j=0; j<m; j++) scanf("%d", &A[i][j]);
    for(j=0; j<m; j++) scanf("%d", &b[j]);
    for(i=0; i<n; i++) for(j=0; j<m; j++) c[i] += A[i][j] * b[j];
    for(i=0; i<n; i++) printf("%d\n", c[i]);
    return 0;
}
