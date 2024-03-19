#include <stdio.h>

int main( int argc, char *argv[] )
{
    long long x;

    scanf( "%lld", &x );

    int ret = (x / 500) * 1000 + ((x - (x / 500) * 500) % 5) * 5;

    printf( "%d\n", ret );
}
