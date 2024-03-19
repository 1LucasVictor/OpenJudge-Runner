#include <stdio.h>
#include <stdlib.h>
#define N 100

int G[N][N] = {0};

int main ()
{
    int n , i, j, k, u, v;
    scanf("%d", &n);
    
    for (i = 0; i < n; i++) {
        scanf("%d %d", &u, &k);
        for (j = 0; j < k; j++) {
            scanf("%d", &v);
            G[u-1][v-1] = 1;
        }
    }
    
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (j != 0) {
                printf(" ");
            }
            printf("%d", G[i][j]);
        }
        puts("");
    }
    
    return 0;
}