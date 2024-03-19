#include "stdio.h"

int main(void)
{
    int N;
    int K;
    float harf;
    int saisyou;

    scanf("%d",&N);
    scanf("%d",&K);
    saisyou = N;
    harf = K/2;
    while(saisyou >= harf)
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