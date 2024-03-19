#include <stdio.h>

int main(void){
    long long N, K, x;

    scanf("%ld%ld", &N, &K);
    x = N;

    while(x > K)
        x -= K;
    if(x > K/2)
        x = K - x;

    printf("%ld\n", x);

    return 0;
}