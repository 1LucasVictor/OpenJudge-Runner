#include <stdio.h>

int main(void) {
    double b;
    long int ans, a;
    scanf("%ld %lf", &a, &b);
    int c = b * 100+0.0001;
    ans = (long)(a * c) / 100;
    printf("%ld\n", ans);
    return 0;
}
