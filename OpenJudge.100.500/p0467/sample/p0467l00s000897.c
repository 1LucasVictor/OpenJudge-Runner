#include<stdio.h>
int main()
{
   long long int a,b,c,k,i,sum=0;
    scanf("%lld %lld %lld %lld",&a,&b,&c,&k);

for(i=1;i<=k;i++)
{
    if(i<=a)
    {
        sum=sum+1;
    }
    else if(i>a&&i<=(a+b))
    {
        sum=sum+0;
    }
    else
    {
    sum=sum+(-1);
    }
}
printf("%lld",sum);
return 0;
}