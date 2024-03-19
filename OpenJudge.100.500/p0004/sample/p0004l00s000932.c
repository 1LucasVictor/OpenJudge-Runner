#include<stdio.h>

int LCM(int a, int b)
{
	int i = 2;
	int lcm;
	
	if(a > b)
	{
		lcm = a;
		while(lcm % b != 0)
		{
			lcm = a * i;
			++i;
		}
		return lcm;
	}
	else
	{
		lcm = b;
		while(lcm % a != 0)
		{
			lcm = b * i;
			++i;
		}
		return lcm;
	}
	
}

int GCD(int a, int b)
{
	int gcd;
	
	if(a > b)
	{
		gcd = a % b;
		while(gcd != 0)
		{
			a = b;
			b = gcd;
			gcd = a % b;
		}
		return b;
	}
	else
	{
		gcd = b % a;
		while(a % b != 0)
		{
			b = a;
			a = gcd;
			gcd = b % a;
		}
		return a;
	}
}

int main(void)
{
	int a, b;
	int gcd, lcm;

	while(scanf("%d %d", &a, &b) != EOF)
	{
		gcd = GCD(a, b);
		lcm = LCM(a, b);
		printf("%d %d\n", gcd, lcm);
	}

	return 0;
}