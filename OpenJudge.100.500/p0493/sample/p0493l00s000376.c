#include<stdio.h>
int main()
{
    int n,X,y,r,s,t,total_point;
    scanf("%d",&X);
    n=X/500;
    y=n*1000;
    r=X%500;
    s=r/5;
    t=s*5;
    total_point=(y+t);
    printf("%d\n",total_point);
}