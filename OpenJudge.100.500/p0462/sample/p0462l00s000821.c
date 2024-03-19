#include <stdio.h>

int main(void) {
    double a, b;
    long long result = 0;
    scanf("%lf%lf", &a, &b);
    result = (long long)(a*b);
    printf("%lld\n", result);
    
    return 0;
}
