#include<stdio.h>

int main()
{
    long long number, n,yen,point,total;
    scanf("%lld",&number);
    n = number;
    yen = n/500;
    n = n%500;
    point = n%5;
    total = (yen*1000) + (point*5);

    printf("%lld\n",total);

    return 0;
}
