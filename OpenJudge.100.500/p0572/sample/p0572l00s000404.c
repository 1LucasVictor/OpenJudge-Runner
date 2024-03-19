#include <stdio.h>
#include <limits.h>

int main(void) {
    long long l, r, i, j, min = LLONG_MAX;
    scanf("%lld%lld", &l, &r);
    if ( l / 2019 == r / 2019 ) {
        for ( i = l; i <= r -1; i++ ) {
            for ( j = i + 1; j <= r; j++ ) {
                if ( (i * j) % 2019 < min ) {
                    min = (i * j) % 2019;
                }
            }
        }
        printf("%lld\n", min);
    }
    else {
        if ( r / 2019 - l / 2019 > 1 ) {
            printf("0\n");
        }
        else {
            if ( l % 2019 == 0 || r % 2019 == 0 ) {
                printf("0\n");
            }
            else {
                for ( i = l; i <= r -1; i++ ) {
                    for ( j = i + 1; j <= r; j++ ) {
                        if ( (i * j) % 2019 < min ) {
                            min = (i * j) % 2019;
                        }
                    }
                }
                printf("%lld\n", min);
            }
        }
    }
    return 0;
}