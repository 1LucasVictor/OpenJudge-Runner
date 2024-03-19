#include <stdio.h>

long long int gcd(long long int x, long long int y) {
    return y ? gcd(y, x % y) : x;
}

long long int lcm(long long int x, long long int y) {
    return x/gcd(x, y)*y;
}

int main()
{
    long long int x, y;

    while (scanf("%ld %ld", &x, &y) != EOF) {
        printf("%lld %lld\n", gcd(x, y), lcm(x, y));
    }

    return 0;
}