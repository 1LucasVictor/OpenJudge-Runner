#include<stdio.h>

void main()
{
    int n,n1,yen,point,total;
    scanf("%d",&n);
//    n = number;
    yen = n/500;
    n1 = n%500;
    point = n1/5;
    total = (yen*1000) + (point*5);

    printf("%d\n",total);
}
