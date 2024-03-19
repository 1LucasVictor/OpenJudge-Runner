#include<stdio.h>
int gcd(int a, int b)
{
	if (b) {
		if (a > b)
			return gcd(b, a%b);
		else
			return gcd(b, a);
	} else {
		return a;
	}
}
int main()
{
	int a, b, g, l;
	while (scanf("%d%d", &a, &b)>0) {
		g = gcd(a, b);
		l = a / g * b;
		printf ("%d %d\n", g, l);
	}
	return 0;
}