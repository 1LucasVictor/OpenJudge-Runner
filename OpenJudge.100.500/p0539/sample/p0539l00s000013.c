#include <stdio.h>
#include <stdlib.h>

int main (void) {
    int n;
    int i;
    scanf("%d", &n);

    for ( i=1; i<=9; i++ ) {
        if ( n%i == 0 && n/i <= 9 ) {
            printf("Yes\n");
            return EXIT_SUCCESS;
        }
    }
    printf("No\n");
    return EXIT_SUCCESS;
}
