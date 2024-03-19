#include<stdio.h>
int main()
{
	long long a, b, c,k,r=0;
	char o;
	scanf("%lld %lld %lld %lld", &a, &b, &c,&k);
	scanf("%c", &o);
	if (k < a)
	{
		printf("%lld\n",k);
	}
	else if (k >= a && k <= a + b)
	{
		r = a;printf("%lld\n", a);
	}
	else if (k>a+b&&k<=a+b+c)
	{
		r =a- (k - (a + b));
         printf("%lld\n", r);
	}
	else if (k > a + b + c)
	{
		r = a - c;
		printf("%lld",r);
	}
	return 0;
}