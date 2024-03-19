#include<stdio.h>

int gcd(long long a, long long b)
{
	if (b == 0)
		return a;
	return gcd(b, a%b);
}

int main()
{
	long long a, b,g,l;
	while (scanf("%lld%lld", &a, &b) != EOF)
	{
		g = gcd(a, b);
		l = b / g * a;
		printf("%lld %lld\n", g, l);
	}
	return 0;
}

