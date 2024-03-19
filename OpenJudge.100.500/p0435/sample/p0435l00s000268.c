#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

int main(void) {
    int N, D;
    long long X, Y;
    int num = 0;

    scanf("%d %d", &N, &D );
    
    for(int i = 0; i < N; i++) {
        scanf("%lld %lld", &X, &Y );
        if( D >= sqrt( ( X * X ) + ( Y * Y ) ) ) {
            num++;
        }
    }

    printf("%d\n", num);

    return 0;
}
