#include <stdio.h>

int main(){
    char a[ 20 + 1 ] = { 0 };
    int i;

    scanf( "%20s", a );
    for ( i = 19; i >= 0; i -- ) {
        a[ i ] ? putchar( a[ i ] ) : 0 ;
    }

    return 0;
}