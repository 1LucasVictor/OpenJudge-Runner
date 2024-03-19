#include<stdio.h>
int main()
{
     long long int a,b,c,k,x=0,z=0,y=0,i;
     scanf("%lld%lld%lld%lld",&a,&b,&c,&k);
     for(i=1;i<=a;i++)
          x++;
     for(i=1;i<=k-a;i++)
                    y=0;
     for(i=1;i<=k-a-b;i++)
                    z--;


     printf("%lld\n",x+y+z);
}
