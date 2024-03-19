#include <stdio.h>
#include <stdlib.h>

int main( int argc, char *argv[] )
{
    long long n, k;
    long long r1, r2;

    scanf( "%lld %lld", &n, &k );

    r1 = n % k;
    r2 = k - r1;

    if( r1 < r2 ) printf( "%lld\n", r1 );
    else          printf( "%lld\n", r2 );
}
