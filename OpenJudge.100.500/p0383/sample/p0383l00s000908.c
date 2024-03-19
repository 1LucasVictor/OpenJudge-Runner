#include <stdio.h>
int main(void){
    int m, n, l;
    int A[110][110], B[110][110];
    long long C[110][110]={0};
    int i, j, k;
    
    scanf("%d %d %d\n", &m, &n, &l);
    
    for(i=1; i<=m; i++) {
        for(j=1; j<=n; j++) {
            scanf("%d", &A[i][j]);
        }
    }
    for(i=1; i<=n; i++) {
        for(j=1; j<=l; j++) {
            scanf("%d", &B[i][j]);
        }
    }
    
    for(i=1; i<=m; i++) {
        for(j=1; j<=l; j++) {
            for(k=1; k<=m; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
            if(j != 1) printf(" ");
            printf("%lld", C[i][j]);
        }
        printf("\n");
    }
    return 0;
}
