#include <stdio.h>

int main(){
    int s = 100000;
    float w;
    int week;

    scanf( "%d", &week );
    while ( week ) {
        w = ( float )s + ( float )s * 0.05;
        s = ( int )w;
        if ( ( s % 1000 ) > 0 ) {
            s /= 1000;
            s ++;
            s *= 1000;
        }
        week --;
    }
    printf( "%d\n", s );

    return 0;
}