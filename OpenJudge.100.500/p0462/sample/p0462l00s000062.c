#include <stdio.h>

int main(void) {
    float b;
    long int ans, a;
    scanf("%ld %f", &a, &b);
    ans = (a * (b * 100)) / 100;
    printf("%ld\n", ans);
    return 0;
}
