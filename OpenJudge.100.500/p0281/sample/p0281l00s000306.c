#include <stdio.h>
int main(void) {
    int i, j, Min, p, q, r, n, w[101][101], key[101], d[101];
    scanf("%d", &n);
    for ( i = 0; i < n; i++ ) {
        key[i] = 0;
        d[i] = 200001;
        for ( j = 0; j < n; j++ ) {
            w[i][j] = -1;
        }
    }
    for ( i = 0; i < n; i++ ) {
        scanf("%d %d", &p, &q);
        for ( j = 0; j < q; j++ ) {
            scanf("%d", &r);
            scanf("%d", &w[p][r]);
        }
    }
    d[0] = 0;
    while ( 1 ) {
        Min = 200001;
        for ( i = 0; i < n; i++ ) {
            if ( key[i] != 1 && d[i] < Min ) {
                Min = d[i];
                p = i;
            }
        }
        if ( Min == 200001 ) break;
        for ( i = 0; i < n; i++ ) {
            if ( w[p][i] != -1 && key[i] != 1 && d[p] + w[p][i] < d[i] )
            d[i] = d[p] + w[p][i];
        }
        key[p] = 1;
    }
    for ( i = 0; i < n; i++ ) {
        printf("%d %d\n", i, d[i]);
    }
    return 0;
}