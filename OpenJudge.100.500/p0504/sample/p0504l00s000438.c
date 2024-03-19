#include<stdio.h>
int main()
{
    int H,A,x;
    1<=H<=10000;
    1<=A<=10000;
    scanf("%d%d",&H,&A);
    x=(H+A-1)/A;
    printf("%d\n",x);
    return 0;
}