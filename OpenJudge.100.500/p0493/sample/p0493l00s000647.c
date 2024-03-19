#include <stdio.h>

int main(void) {
    long long X, x;
    scanf("%lld", &X);
    x=X/500*1000; X%=500;
    x+=X/5*5;
    printf("%lld", x);
    return 0;
}
