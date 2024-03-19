#include<stdio.h>
int main()
{
    long long int a,b,k,c=0,d=0,f,i,j,m,n,r;
    scanf("%lld%lld",&n,&k);
    if(n>=k)
    {
    if(n%k!=0)
    {
    c=n/k+1;
    r=c*k-n;
    }
    else if(n%k==0)
    {
        r=0;
    }
    }
    else
    {
        r=n;
    }
    printf("%lld\n",r);
return 0;
}
