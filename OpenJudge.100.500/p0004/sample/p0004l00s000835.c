#include <stdio.h>

int main(){
    int a, b;
    int acc;
    int div;

    while ( 2 == scanf( "%d %d", &a, &b ) ) {
        acc = 1;
        div = 2;
        while ( ( div <= a ) && ( div <= b ) ) {
            if ( ( ( a % div ) ==0 ) && ( b % div == 0 ) ) {
                a /= div;
                b /= div;
                acc *= div;
            }
            else {
                div ++;
            }
        }

        printf( "%d %d\n", acc, acc * a * b );
    }

    return 0;
}