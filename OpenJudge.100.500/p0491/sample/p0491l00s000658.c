#include<stdio.h>
main()
{
    long long int n,k,r;
    scanf("%lld%lld",&n,&k);
    r=n%k;
    if(r>k-r) r=k-r;
    printf("%lld\n",r);
    
}