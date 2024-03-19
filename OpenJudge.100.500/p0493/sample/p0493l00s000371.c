#include <stdio.h>

int main()
{
	long int x, s = 0;
	scanf("%ld", &x);
	s = s + 1000 * (x / 500);
	x = x % 500;
	s = s + 5 * (x / 5);
	printf("%ld", s);
}