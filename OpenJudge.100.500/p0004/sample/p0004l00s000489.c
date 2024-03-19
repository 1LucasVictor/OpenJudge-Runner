#include <stdio.h>

int gcd(int a, int b){
	int r;
	
	if ((a % b) == 0){
		return (b);
	}
	else {
		r = a % b;
		return (gcd(b, r));
	}
}
int lcm(int a, int b)
{
	return ((a / gcd(a, b)) * b);
	
}
int main(void)
{
	int a, b;
	int g, l;
	while (scanf("%d %d", &a, &b) != EOF){
		g = gcd(a, b);
		l = lcm(a, b);
		printf("%d %d\n", g, l);
	}
	return (0);
}