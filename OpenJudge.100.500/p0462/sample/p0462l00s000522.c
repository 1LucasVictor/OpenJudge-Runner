#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define N 100000
#define MAX 1000000000000000000

int main (void)
{
    unsigned long long a, b_10;
    double b;

    scanf("%llu %lf", &a, &b);

    b_10 = (unsigned long long)(b * 10);

    printf("%llu", a * b_10 / 10);

    return 0;
}
