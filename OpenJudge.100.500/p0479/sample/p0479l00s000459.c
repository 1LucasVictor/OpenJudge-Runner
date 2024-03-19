#include <stdio.h>
#include <stdlib.h>
#define max 2*100000
long long int bossy(long long int x,long long int n,long long int boss[])
{
    long long int dabang=0;
    for(int i=1;i<n;i++)
    {
        if(boss[i]==x)dabang++;
    }
    return dabang;
}
int main()
{
   long long int n,i,boss[max];
   scanf("%lld",&n);
   for(i=1;i<n;i++)
   {
       scanf("%lld",&boss[i]);
   }
   for(i=1;i<=n;i++)
   {
       printf("%lld\n",bossy(i,n,boss));
   }
    return 0;
}
