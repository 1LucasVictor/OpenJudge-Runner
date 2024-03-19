#include <stdio.h>
#include <stdlib.h>

int x, y;

int main( int argc, char *argv[] )
{
    int ppp;

    scanf( "%d %d", &x, &y );

    if( y < x*2 ) puts( "No" );
    else if( y > x*4 ) puts( "No" );
    else if( y % 2 )   puts( "No" );
    else puts( "Yes" );
}
