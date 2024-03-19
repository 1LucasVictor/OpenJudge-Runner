#include <stdio.h>

int main(void)
{
    unsigned long long int X, Gohyaku = 0, amari = 0;
    unsigned long long int Goen = 0, answer = 0;
    scanf("%llu", &X);

    Gohyaku = X/500;
    amari = X%500;
    Goen = amari/5;

    answer = Gohyaku * 1000 + Goen * 5;

    printf("%llu", answer);
    
    return 0;
}