#include <stdio.h>
#include <stdlib.h>

int main (void) {
    int h, n, i, sum=0;
    scanf("%d%d", &h, &n);
    int a[n];
    for ( i=0; i<n; i++ ) {
        scanf("%d", &a[i]);
        sum += a[i];
    }

    if ( h > sum )
        printf("No\n");
    else
        printf("Yes\n");

    return EXIT_SUCCESS;
}
