#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <ctype.h>


static int A[100+1][100+1];

int main(int argc, char* argv[]) {
    int n, i, j, u, k; 

    memset(A, 0x00, sizeof(A));
    
    scanf("%d\n", &n);

    for ( i = 1; i <= n; i++ ) {
        scanf("%d", &u);
        scanf("%d", &k);

        for ( j = 1; j <= k; j++ ) {
            int v;
            scanf("%d", &v);

            A[u][v] = 1;
        }
        fgetc(stdin);           /* new line */
    }

    for ( i = 1; i <= n; i++ ) {
        for ( j = 1; j <= n; j++ ) {
            printf("%d", A[i][j]);
            if ( j + 1 <= n ) {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
                  

