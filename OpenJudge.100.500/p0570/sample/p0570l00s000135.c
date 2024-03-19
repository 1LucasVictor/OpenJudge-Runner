#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main( int argc, char **argv )
{
    int ibuf1=0, ibuf2=0;
    const int n = scanf( "%d %d", &ibuf1, &ibuf2 );
    if ( n != 2 )
    {
        printf("Error: Wrong number of arguments\n");
    }

    if ( ( ibuf1 % 2 ) != ( ibuf2 % 2 ) )
    {
        printf("IMPOSSIBLE\n");
    } else {
        printf(" %d\n", (ibuf1+ibuf2)/2 );
    }

    exit(0);
}