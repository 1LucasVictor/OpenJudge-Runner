#include<stdio.h>

int main(void)
{
    long long num,x = 0;
    long long h1 = 0,h2 = 0;

    scanf("%llu", &num);

    h1 = num/500;

    num = num - h1*500;

    h2 = num/5;

    long long total = h1*1000 + h2*5;

    printf("%llu\n", total);

    return 0;
}
