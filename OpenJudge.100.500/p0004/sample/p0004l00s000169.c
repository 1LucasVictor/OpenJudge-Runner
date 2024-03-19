#include<stdio.h>

long long int GCD(long long int a,long long int b)
{
    if(b!=0)
        return GCD(b,a%b);
    else
        return a;
}
int main()
{
    long long int a,b;
    while(scanf("%lld%lld",&a,&b)!=EOF){
    printf("%lld %lld\n",GCD(a,b),(a*b)/GCD(a,b));
    }
    return 0;
}