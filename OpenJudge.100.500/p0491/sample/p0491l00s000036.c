#include <stdio.h>

int main(void)
{
    int N, K, A;

    scanf("%d", &N);
    scanf("%d", &K);
    A = (N % K) - K / 2.0;

    if (A < 0)
        printf("%d\n", N % K);
    else
        printf("%d\n", K - (N % K));
    
    return 0;
     
}