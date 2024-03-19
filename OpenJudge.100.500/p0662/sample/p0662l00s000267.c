#include<stdio.h>
int main()
{
    int a,b,c,d,excalibur,max0,min0;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    scanf("%d",&d);
    if(a>c)
        max0=a;
    else max0=c;
    if(b>d)
        min0=d;
    else min0=b;
    excalibur=min0-max0;
    if(excalibur<0)
        printf("0");
    else printf("%d",excalibur);
    return 0;
}