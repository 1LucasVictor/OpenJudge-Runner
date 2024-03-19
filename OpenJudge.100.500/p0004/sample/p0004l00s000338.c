#include <stdio.h>

int gcd(int x, int y)
{
	return (y ? gcd(y, x % y) : x);
}
int lcm(int x, int y)
{
	return (x / gcd(x, y) * y);
}

int main(void)
{
	int x, y;

	while (~scanf("%d %d", &x, &y)){
		if (x > y) printf("%d %d\n", gcd(x, y), lcm(x, y));
		else printf("%d %d\n", gcd(y, x), lcm(y, x));
	}

	return (0);
}