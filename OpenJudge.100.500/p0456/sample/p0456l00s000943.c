#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main( int argc, char *argv[] )
{
    char s[200001];
    char t[200001];
    int n = 0;

    scanf( "%s %s", s, t );

    for( int i=0; i<strlen( s ); i++ )
        if( s[i] != t[i] ) n++;

    printf( "%d\n", n );
}
