#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main() {
    int a[10];

    int d, n = 0;

    while ( scanf("%d", &d) != EOF ) {
        if ( d ) {
            a[n++] = d;
        } else {
            printf("%d\n", a[--n]);
        }
    }

    return 0;
}