#include<stdio.h>
int main()
{
    int n,x,y,r,s,t,total_point;
    scanf("%d",&n);
    x=n/500;
    y=x*1000;
    r=n%500;
    s=r/5;
    t=s*5;
    total_point=(y+t);
    printf("%d\n",total_point);
    return 0;
}
