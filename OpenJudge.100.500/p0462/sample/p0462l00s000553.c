#include <stdio.h>

int main(void) {
    double b;
    long int ans, a;
    scanf("%ld %lf", &a, &b);
    ans = a * (b * 100) / 100;
    printf("%ld\n", ans);
    return 0;
}
