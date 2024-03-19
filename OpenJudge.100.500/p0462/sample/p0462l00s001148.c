#include <stdio.h>
#include <math.h>
int main()
{
    long long A;
    double B;
    scanf("%lld %lf",&A,&B);
    long double result;
    modfl(A*B,&result);
    printf("%.0Lf",result);
    return 0;
}