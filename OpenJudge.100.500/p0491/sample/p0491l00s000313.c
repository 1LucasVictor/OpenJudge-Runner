#include <stdio.h>

int main(void)
{
    long int N, K, A, B;

    scanf("%ld", &N);
    scanf("%ld", &K);
    A = N % K;
    B = K - A;

    if (A <= B)
        printf("%ld\n", A);
    else
        printf("%ld\n", B);
    
    return 0;
     
}