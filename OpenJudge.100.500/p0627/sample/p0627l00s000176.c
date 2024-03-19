#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    long long int A, B, soma, sub, mult;
    scanf("%lld %lld", &A, &B);
    soma = A + B;
    sub = A - B;
    mult = A * B;
    if(soma > sub && soma > mult)
        printf("%lld\n", soma);
    else if(sub > soma && sub > mult)
        printf("%lld\n", sub);
    else
        printf("%lld\n", mult);
}
