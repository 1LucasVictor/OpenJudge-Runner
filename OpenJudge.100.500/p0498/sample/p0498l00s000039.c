#include <stdio.h>
#include <stdlib.h>

#define M (1000000007LL)


/***************************************
    main
***************************************/
int main( int argc, char *argv[] )
{
    int n;

    if( scanf( "%d", &n ) != 1 ) {
        puts( "Input error." );
        exit( 0 );
    }

    printf( "%d\n", (n+1)/2 );
}
