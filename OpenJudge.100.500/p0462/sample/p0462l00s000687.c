#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define N 100000
#define MAX 1000000000000000000

int main (void)
{
    unsigned long long a, b_100;
    double b;

    scanf("%llu %lf", &a, &b);

    b_100 = (unsigned long long)(b * 100);
    // printf("b_100 = %llu", b_100);

    printf("%llu", a * b_100 / 100);

    return 0;
}
