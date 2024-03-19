#include <stdio.h>

int main()
{

    long long  a;
    double b;

    scanf("%lld", &a);
    scanf("%lf", &b);
    double c =( b * 100.0);
    printf("%lld", (a * (long long)c)/100l);

    printf("\n");
}