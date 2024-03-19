#include<stdio.h>
int main()
{
    long long int n,res=0;
    scanf("%lld",&n);
    if(n>=500)
    {
        res=(n/500)*2*500;
        n=n-((n/500)*500);
    }
    if(n>=5)
    {
        res=res+((n/5)*5);
    }
    printf("%lld\n",res);
}
