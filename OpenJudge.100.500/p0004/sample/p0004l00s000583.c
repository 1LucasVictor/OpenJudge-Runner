#include <stdio.h>

long gcd(long m, long n)
{
    long x;
    while (n != 0){
        x = n;
        n = m % n;
        m = x;
    }
    return (m);
}

long long lcm(long m, long n)
{
    return ((long long)m / gcd(m, n) * n);
}


int main(void)
{
    long a, b;
    long t;

    while (scanf("%ld %ld", &a, &b) != EOF){
        if (a <= b){
            t = a;
            a = b;
            b = t;
        }
        printf("%d %lld", gcd(a, b), lcm(a, b));
    }
    return (0);
}