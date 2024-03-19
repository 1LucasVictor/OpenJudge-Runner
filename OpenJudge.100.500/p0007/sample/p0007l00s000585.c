#include <stdio.h>

int main(){
    int n;
    int a, b, c, d;
    int cnt;

    while ( 1 == scanf( "%d", &n ) ) {
        cnt = 0;
        for ( a = 0; a <= 9; a ++ ) {
            if ( a > n ) break;
            for ( b = 0; b <= 9; b ++ ) {
                if ( ( a + b ) > n ) break;
                for ( c = 0; c <= 9; c ++ ) {
                    if ( ( a + b + c ) > n ) break;
                    for ( d = 0; d <= 9; d ++ ) {
                        if ( ( a + b + c + d ) > n ) break;
                        if ( ( a + b + c + d ) == n ) cnt ++;
                    }
                }
            }
        }
        printf( "%d\n", cnt );
    }

    return 0;
}