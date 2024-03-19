#include <stdio.h>
#include <math.h>

int main(void) {
    int d, n;
    d = n = 0;

    int ret;

    ret = scanf("%d", &d);
    if( ret == EOF ) {
        printf( "scanfでエラー\n" );
        return -1;
    }
    ret = scanf("%d", &n);
    if( ret == EOF ) {
        printf( "scanfでエラー\n" );
        return -1;
    }

    int base = 0;
    switch (d) {
        case 0: base = 1; break;
        case 1: base = 100; break;
        case 2: base = 10000; break;
        default: return -1;
    }

    printf("%d\n", base * n);

    return 0;
}
