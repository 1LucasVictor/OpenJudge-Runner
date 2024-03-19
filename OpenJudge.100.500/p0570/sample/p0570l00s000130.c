#include<stdio.h>
#define ll long long int
int main()
{
    ll a,b;
    scanf("%lld %lld",&a,&b);
    ll c;
    c=a+b;
    if(c%2==0)
    {
        ll d;
        d=c/2;
        printf("%lld\n",d);
    }
    else
        printf("IMPOSSIBLE\n");
    return 0;
}
