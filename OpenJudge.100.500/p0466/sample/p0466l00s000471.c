#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char s[16], t[16];

int main( int argc, char *argv[] )
{
    scanf( "%s %s", s, t );

    if( strlen( s ) +1 != strlen( t ) ) {
        puts( "No" );
        exit( 0 );
    }

    if( strncmp( s, t, strlen( s ) ) ) {
        puts( "No" );
        exit( 0 );
    }

    puts( "Yes" );
}
