#include<stdio.h>
int main()
{
    long long x,y,n,d;
    int cnt=0;
    scanf("%lld %lld",&n,&d);
    for(int i=0;i<n;i++)
    {
        scanf("%lld %lld",&x,&y);
        if(d*d>=(x*x)+(y*y)) cnt++;
    }
    printf("%d",cnt);
    return 0;
}