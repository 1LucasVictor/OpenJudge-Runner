#include <stdio.h>

typedef long long lld;

int gcd(lld a, lld b)
{
	return  ((b > 0) ? gcd(b, a % b) : a);
}
int lcm(lld a, lld b)
{
	return (a / gcd(a, b) * b);
}

int main(void)
{
	lld a, b;

	while (~scanf("%lld %lld", &a, &b)){
		printf("%d %d\n", gcd(a, b), lcm(a, b));
	}
	return (0);
}