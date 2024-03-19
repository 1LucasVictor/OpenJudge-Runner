#include<stdio.h>
int main(void) {
    int MM[100][100];
    int n, u, k, v, i, j;
    scanf("%d", &n);
    for ( i = 0; i < n; i++ ) {
        for ( j = 0; j < n; j++ ) MM[i][j] = 0;
    }
    for ( i = 0; i < n; i++ ) {
        scanf("%d %d", &u, &k);
        u--;
        for ( j = 0; j < k; j++ ) {
            scanf("%d", &v);
            v--;
            MM[u][v] = 1;
        }
    }

    for ( i = 0; i < n; i++ ) {
        for ( j = 0; j < n; j++ ) {
            if ( j ) printf(" ");
            printf("%d", MM[i][j]);
        }
        printf("\n");
    }
    return 0;
}