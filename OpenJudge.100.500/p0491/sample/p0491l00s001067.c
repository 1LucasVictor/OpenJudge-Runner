#include<stdio.h>
#include<math.h>
int main()
{
long long  n,k,s,p;
scanf("%lld %lld",&n,&k);

s=n%k;
p=abs(k-s);
if(p>s)
{
printf("%lld\n",s);
}
else
{
printf("%lld\n",p);
}

return 0;
}