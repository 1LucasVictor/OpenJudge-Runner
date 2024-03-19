#include<stdio.h>
int main()
{
    long long int n,k,p,m;
    scanf("%lld %lld",&n,&k);
    m=n%k;
    p=k/2;
    if(m>p)
        m=k-m;
    printf("%lld\n",m);
    return 0;
}