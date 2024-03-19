#include<stdio.h>

void main()
{
    int n;
    scanf("%d",&n);
//    n = number;
    int yen = n/500;
    int n1 = n%500;
    int point = n1/5;
    int total = (yen*1000) + (point*5);

    printf("%d\n",total);
}
