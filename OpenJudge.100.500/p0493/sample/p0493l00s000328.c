#include<stdio.h>
int main()
{
	long long int x, b, e, f, a, c, d;
	
	scanf("%lld", &x);
	a=x/500;
	b=a*1000;
    c=x-a*500;
	d=c/5;
	e=d*5;
	f=b+e;
	printf("%lld\n", f);
	return 0;
 }