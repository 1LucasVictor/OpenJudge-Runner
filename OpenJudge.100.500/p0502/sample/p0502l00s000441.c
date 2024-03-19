#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define false 0
#define true (!false)

int N;
int A[1000];

int main( int argc, char *argv[] )
{
    int i;
    int denyf = false;

    if( scanf( "%d", &N ) != 1 ) {
        printf( "N read error!\n" );
        exit( -1 );
    }

    for( i=0; i<N; i++ ) {
        if( scanf( "%d", &A[i] ) != 1 ) {
            printf( "A read error!\n" );
            exit( -1 );
        }
    }

    for( i=0; i<N; i++ ) {

        if( A[i] %2 == 0 ) {
            if( A[i] %3 != 0 && A[i] %5 != 0 ) {
                denyf = true;
                break;
            }
        }
    }

    if( denyf ) puts( "DENIED" );
    else        puts( "APPROVED" );
}
