#include <stdio.h>
long int gcd_recursive(unsigned a, unsigned b)
{
    if (b)
        return gcd_recursive(b, a % b);
    else
        return a;
}
int main (void)
{
    long long int a, b;
    long long int lcm, gcd;
    long long int i, j, big, small;
    int flag = 0;

    while(scanf("%lld%lld", &a, &b) != EOF){
        gcd = gcd_recursive(a, b);
        lcm = a * b / gcd;
        printf("%lld %lld\n", gcd, lcm);
    }
    return (0);
}
