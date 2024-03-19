#include <stdio.h>
#include <stdlib.h>

int main(){
    unsigned long long N,K,prevN;

    scanf("%lld %lld", &N, &K);

    N = (N % K);
    if(N == 0){
        printf("0");
        return 0;
    }

    N = (N % K);
    while(1){
        prevN = N;
        if(N > K){
            N = N - K;
        }else{
            N = K - N;
        }
        if ((prevN < N) || ( N < 0 ))
        {
            printf("%lld", prevN);
            return 0;
        }
    }

    return 0;
}
