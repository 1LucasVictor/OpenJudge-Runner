#include<stdio.h>
int main()
{
long long int N,A,B,c;
scanf("%lld %lld %lld",&N,&A,&B);
c=N*A;
if(c<=B)
printf("%lld\n",c);
else
printf("%lld",B);
return 0;
}