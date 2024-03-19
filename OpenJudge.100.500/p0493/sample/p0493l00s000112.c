#include<stdio.h>

int main()
{
    int number, n;
    scanf("%d",&number);
    int yen,point;
    long int total;
    n = number;
    yen = n/500;
    n = n%500;
    point = n%5;
    total = (yen*1000) + (point*5);

    printf("%ld\n",total);

    return 0;
}
