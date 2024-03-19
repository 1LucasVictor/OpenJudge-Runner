#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
	long long a,b,c,d;
	scanf("%lld",&a);
	b=a/1000*2;
	c=(a-b*500)/5*1;
	d=b*1000+c*5;
	printf("%lld",d);
	return 0;
}