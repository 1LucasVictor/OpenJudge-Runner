#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int a, b, c, k;

int main( int argc, char *argv[] )
{
    int tot;

    scanf( "%d %d %d %d", &a, &b, &c, &k );

    tot = a;
    k -= a;
    if( k <= 0 ) {
        printf( "%d\n", tot );
        exit( 0 );
    }

    k -= b;
    if( k <= 0 ) {
        printf( "%d\n", tot );
        exit( 0 );
    }

    tot -= k;
    printf( "%d\n", tot );
}
