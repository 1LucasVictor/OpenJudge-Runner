// AOJ ALDS1_1_B Greatest Common Divisor
// 2018.4.26 bal4u

#include <stdio.h>

//#define getchar_unlocked()  getchar()
int in()
{
	int n = 0, c = getchar_unlocked();
	do n = 10*n + (c & 0xf), c = getchar_unlocked(); while (c >= '0');
	return n;
}

int gcd(int a, int b)
{
	int r;
	while (b != 0) r = a % b, a = b, b = r;
	return a;
}

int main()
{
	int a, b;

	a = in(), b = in();
	printf("%d\n", gcd(a, b));
	return 0;
}

