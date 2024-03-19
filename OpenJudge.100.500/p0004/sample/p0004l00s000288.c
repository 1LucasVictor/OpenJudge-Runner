#include <stdio.h>

int gcd(int a, int b);

int main(void)
{
	int a, b;
	int g;
	
	while (scanf("%d%d", &a, &b) != EOF){
		g = gcd(a, b);
		
		printf("%d %d\n", g, a / g * b);
	}
	
	return (0);
}

int gcd(int a, int b)
{
	if(a % b == 0)return (b);
	
	return (gcd(b, a % b));
}