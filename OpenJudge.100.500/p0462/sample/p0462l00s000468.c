#include <stdio.h>

int main(void) {
    long long i;
    float x;
    scanf("%lld", &i);
    scanf("%f", &x);
    long long a =i * (int)(100*x + 0.5)/100;
    printf("%lld\n", a);

    return 0;
}
