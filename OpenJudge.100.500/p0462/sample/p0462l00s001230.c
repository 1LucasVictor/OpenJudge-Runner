#include <stdio.h>

int main(void)
{
    long long int A;
    double B;
    scanf("%lld %lf", &A, &B);

    printf("%lld", (long long int)(A * B));
    return 0;
}