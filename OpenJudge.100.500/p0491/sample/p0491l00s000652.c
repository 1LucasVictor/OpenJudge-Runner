#include<stdio.h>
int main()
{
	long long n,k,a,b;
	scanf("%lld %lld",&n,&k);
	a=n%k;
	b=a-k;
	if(a<b*-1) printf("%lld\n",a);
	else  printf("%lld\n",b*-1);
	return 0;
}