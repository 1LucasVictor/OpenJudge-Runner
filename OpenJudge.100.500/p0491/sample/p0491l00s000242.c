#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    long long N, K;
    scanf("%lld %lld", &N, &K);

    long long x = N / K;
    N -= K * x;
    if (llabs(N - K) < N) {
        N = llabs(N - K);
    }
    
    printf("%lld\n", N);
    return 0;
}