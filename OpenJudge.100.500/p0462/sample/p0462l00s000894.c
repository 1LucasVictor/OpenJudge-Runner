#include <stdio.h>
#include <math.h>
int main(void)
{
    long long int a, c;
    double b, pro;

    scanf("%lld %lf", &a, &b);
    pro = (a * b);
    c = trunc(pro);
    printf("%lld\n", c);
    return 0;

}
