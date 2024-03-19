#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#define ll long long int
int main(void)
{
    ll N, A, B, C;
    ll d, e, ans = 0;
    scanf("%lld", &N);
    A = N / 500;
    B = N - A * 500;
    C = B / 5;
    printf("%lld\n", A * 1000 + C * 5);

    return 0;
}