#include "stdio.h"


int main()
{
	long long a,b;
	long long temp=0;
	long long gcd, lcm;
	while (scanf("%lld %lld", &a, &b) != EOF)
	{
		if (a < b)
		{
			temp = a;
			a = b;
			b = temp;
		}
		for (long long m=b; m >0; m--)
		{
			if (a%m == 0 && b%m == 0)
			{
				gcd = m;
				break;
			}
		}
		for (long long n = a; n <= a*b;n++)
		{
			if (n%a == 0 && n%b == 0)
			{
				lcm = n;
				break;
			}
		}
		printf("%lld %lld\n",gcd,lcm);
	}
	return 0;
}