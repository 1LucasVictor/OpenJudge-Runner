#include <stdio.h>
#include <math.h>

#define MAX_DATA 200

int main(){
    int a, b;
    int c;
    int f[ MAX_DATA ];
    int i;

    c = 0;

    while ( ( c < MAX_DATA ) && ( 2 == scanf( "%d %d", &a, &b ) ) ) {
        f[ c ++ ] = ( int )log10( ( double )( a + b ) ) + 1;
    }

    for ( i = 0; i < c; i ++ ) {
        printf( "%d\n", f[ i ] );
    }

    return 0;
}