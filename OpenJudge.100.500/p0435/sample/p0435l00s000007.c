#include<stdio.h>
#include<math.h>
int main()
{
    long long int n,d,x,y,s=0;
    scanf("%lld %lld",&n,&d);
    float z,m;
    m=d;
    while(n--)
    {
        scanf("%lld %lld",&x,&y);
        x=x>0?x:-x;
        y=y>0?y:-y;
        x=x*x+y*y;

        z=sqrt(x);
        if(z<=m) s++;
    }
    printf("%lld",s);
    return 0;
}
