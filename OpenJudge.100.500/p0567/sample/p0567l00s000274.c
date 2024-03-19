#include<stdio.h>
#define ll long long int
int main()
{
    ll a,b,c;
    scanf("%lld %lld %lld",&a,&b,&c);
    ll d,e;
    d=a-b;
    e=c-d;
    if(e<0)
        printf("0\n");
    else
        printf("%lld\n",e);
    return 0;

}
