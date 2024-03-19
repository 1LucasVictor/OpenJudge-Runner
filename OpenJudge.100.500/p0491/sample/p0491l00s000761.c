#include<stdio.h>
int main(void)
{
	long long a,b,c,d;
	scanf("%lld %lld",&a,&b);
	c=a%b;
	d=c-b;
	if(c<=-d) printf("%lld\n",c);
	else printf("%lld\n",-d);
	return 0;
}