#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (void) {
    int i;
    int n, m;
    int s, c;

    scanf("%d%d", &n, &m);
    int num[n];
    memset(num, 0, n*sizeof(int));

    for ( i=0; i<m; i++ ) {
        scanf("%d%d", &s, &c);
        if ( num[s-1] != 0 && num[s-1] != c ) {
            printf("-1\n");
            return EXIT_SUCCESS;
        }
        num[s-1] = c;
    }

    if ( n != 1 && num[0] == 0 ) {
        if ( m == 0 )
            num[0] = 1;
        else {
            printf("-1\n");
            return EXIT_SUCCESS;
        }
    }

    int ans=0;
    for ( i=0; i<n; i++ )
        ans += pow(10, n-i-1)*num[i];

    printf("%d\n", ans);
    return EXIT_SUCCESS;
}
