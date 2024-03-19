#include<stdio.h>
#include<math.h>
int main()
{
long long n,k,s,p;
scanf("%I64d %I64d",&n,&k);
if(n%k==0)
{
printf("0\n");
}
else
{
s=n%k;
p=abs(k-s);
if(p<s)
{
printf("%lld\n",p);
}
else
{
printf("%lld\n",s);
}
}
return 0;
}