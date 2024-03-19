#include<stdio.h>
int main()
{
    long long int a,b,x,y,p;
    scanf("%lld %lld",&a,&b);
    if(a>=b)
    {
        x=a; y=b;
    }
    else
    {
        x=b; y=a;
    }
    p=x-y;
    if(p%2!=0) printf("IMPOSSIBLE\n");
    else printf("%lld\n",(p/2)+y);
}
