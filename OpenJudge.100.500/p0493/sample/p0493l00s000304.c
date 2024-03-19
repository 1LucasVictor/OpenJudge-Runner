#include <stdio.h>

int main( int argc, char *argv[] )
{
    long long x;

    scanf( "%lld", &x );

    long long ret = (x / 500) * 1000;
    x %= 500;
    ret += (x / 5) * 5;

    printf( "%lld\n", ret );
}
