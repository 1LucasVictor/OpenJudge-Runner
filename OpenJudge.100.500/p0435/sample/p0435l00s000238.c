#include<stdio.h>
#include<math.h>
int main()
{
    long long int n,d,x,y,s=0;
    scanf("%lld %lld",&n,&d);
    double z,m;
    m=d*1.00;
    while(n--)
    {
        scanf("%lld %lld",&x,&y);
        x=x>0?x:-x;
        y=y>0?y:-y;

        z=x*x+y*y;

        z=sqrt(z);
        if(z<=m) s++;
    }
    printf("%lld",s);
    return 0;
}
