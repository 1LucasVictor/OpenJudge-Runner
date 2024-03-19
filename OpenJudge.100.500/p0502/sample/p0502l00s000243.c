#include <stdio.h>
#include <stdlib.h>

int main (void) {
    int n, i;
    scanf("%d", &n);
    int a[n];
    int is_denied=0;
    for ( i=0; i<n; i++ ) {
        scanf("%d", &a[i]);
        if ( a[i]%2 == 0 ) {
            if ( a[i]%3 != 0 && a[i]%5 != 0 )
                is_denied = 1;
        }
    }

    if ( is_denied == 0 )
        printf("APPROVED\n");
    else
        printf("DENIED\n");

    return EXIT_SUCCESS;
}
