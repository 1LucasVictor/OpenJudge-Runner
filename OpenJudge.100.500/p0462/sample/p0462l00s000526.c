#include "stdio.h"

int main(void)
{
    long int A;
    long double B;

    long int kei=0;
    scanf("%ld",&A);
    scanf("%Le",&B);
    kei = A * B;

    printf("%ld",kei);
}