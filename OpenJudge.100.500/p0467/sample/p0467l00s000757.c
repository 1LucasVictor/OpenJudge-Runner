#include <stdio.h>
#include <stdlib.h>
#include <string.h>

long long a, b, c, k;

int main( int argc, char *argv[] )
{
    long long tot;

    scanf( "%lld %lld %lld %lld", &a, &b, &c, &k );

    tot = a;
    k -= a;
    if( k <= 0 ) {
        printf( "%lld\n", tot );
        exit( 0 );
    }

    k -= b;
    if( k <= 0 ) {
        printf( "%lld\n", tot );
        exit( 0 );
    }

    tot -= k;
    printf( "%lld\n", tot );
}
