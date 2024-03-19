#include <stdio.h>

#define mod 1000000007

int N,K;
long F[2<<17];
long I[2<<17];

int main( int argc, char *argv[] )
{
    int i;
    char s[3];
    int A = 0;
    int B = 0;

    scanf( "%c%c%c", &s[0], &s[1], &s[2] );

    for( i=0; i<3; i++ ) {
        if( s[i] == 'A' ) A = 1;
        else if( s[i] == 'B' ) B = 1;
    }

    if( A && B ) puts( "Yes" );
    else puts( "No" );
}
