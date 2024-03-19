#include "stdio.h"

int main(void)
{
    int N;
    int K;
    int saisyou;

    scanf("%d",&N);
    scanf("%d",&K);
    saisyou = N;
    while(saisyou > K/2)
    {
        N = N - K;
        if(N < 0)
        {
            N = N*(-1);
        }
        saisyou = N;
    }
    printf("%d",saisyou);
}