#include<stdio.h>
#include<math.h>

int main()
{
    long long int a;
    double b;
    scanf("%lld %lf", &a, &b);
    printf("%lld", (long long int)floor(a * b));
    return 0;
}