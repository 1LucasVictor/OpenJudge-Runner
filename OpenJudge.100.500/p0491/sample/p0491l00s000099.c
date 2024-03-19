#include <stdio.h>

unsigned long long int ZET(unsigned long long int N, unsigned long long int K)
{
    if (N > K)
    {
        return N-K;
    }

    if (N <= K)
    {
        return K-N;
    }
    
    
}
 
int main(void)
{
    unsigned long long int N, K;
    scanf("%llu %llu", &N, &K);

    if (N > K)
    {
        N = (N%K) + K;
    }
    

    while (ZET(N,K) < N)
    {
        N = ZET(N,K);
    }

    printf("%llu", N);
    
    


    return 0;
}