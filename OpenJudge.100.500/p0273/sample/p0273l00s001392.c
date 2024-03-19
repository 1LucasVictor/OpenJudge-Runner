#include <stdio.h>

long long fibonacci( int n ) {
    switch ( n ) {
        case 0: return 1;
        case 1: return 1;
        default: return fibonacci( n - 2 ) + fibonacci( n - 1 );
    }
}
int main(void) {
    int n;
    scanf( "%d", &n );
    printf( "%d\n", fibonacci( n ) );
}
