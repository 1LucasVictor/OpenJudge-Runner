#include<stdio.h>
int main()
{
   long long int i,j,ans;
   scanf("%lld %lld",&i,&j);
    ans=GCD(i,j);
    printf("%lld\n",ans);
    return 0;
}
int GCD(long long int i, long long int j)
{
    if (j!=0)
    {
        return GCD(j,i%j);
    }
    else
    {
        return i;
    }
}

