#include <stdio.h>

int main(void) {
    long long int N,N1,N2,K,X;
    scanf("%lld" ,&N);
    scanf("%lld" ,&K);
    X = N/K;
    N1 = llabs(N - K*X);
    N2 = llabs(N - K*(X+1));
    if(N1>=N2) N = N2;
    else N = N1;
    printf("%lld" ,N); //小数を評価するのは？
    return 0;
}
