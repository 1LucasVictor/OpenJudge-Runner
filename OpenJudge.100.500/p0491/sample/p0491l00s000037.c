#include <stdio.h>
#include <math.h>

int main() {
    
    unsigned long long int N, K;
    scanf("%llu %llu", &N, &K);

    unsigned long long int rem = N%K;
    if (rem<abs(rem-K))
        printf("%llu\n", rem);
    else
        printf("%llu\n", abs(rem-K));
    
    return 0;
}