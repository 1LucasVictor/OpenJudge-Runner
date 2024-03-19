#include <stdio.h>
#define Max 100

int main() {
    int A[Max][Max] = {};
    int n,u,k,v;
    int i,j;

    scanf("%d",&n);

    for (i = 0; i < n; ++i) {
        scanf("%d %d",&u,&k);
        u--;
        for (j = 0; j < k; ++j) {
            scanf("%d",&v);
            --v;
            A[u][v] =1;
        }
    }

    for (i = 0; i < n; ++i) {
        for (j = 0; j < n-1; ++j) {
            printf("%d ",A[i][j]);
        }
        printf("%d\n",A[i][n-1]);
    }
    return 0;
}
