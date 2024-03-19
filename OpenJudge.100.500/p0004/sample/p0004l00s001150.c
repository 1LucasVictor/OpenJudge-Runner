#include <stdio.h>

int main(void)
{
	unsigned int a, b;
	unsigned int l, s;
	unsigned int gcd, lcm;
	
	while (scanf("%d %d", &a, &b) != EOF){
		l = a;
		s = b;
		if (l < s){
			l = b;
			s = a;
		}
		while (s){
			l %= s;
			l += s;
			s = l - s;
			l -= s;
		}
		gcd = l;
		lcm = a / gcd * b;
		
		printf("%d %d\n", gcd, lcm);
	}
	return (0);
}