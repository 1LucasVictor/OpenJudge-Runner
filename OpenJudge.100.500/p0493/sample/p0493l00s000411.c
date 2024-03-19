#include<stdio.h>
main()
{
	long long a,b,c;
	scanf("%lld",&a);
	b=a/500;
	a=a-b*500;
	c=a/5;
	printf("%lld",b*1000+c*5);
}