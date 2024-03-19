#include <stdio.h>

int gcd(int a, int b);

int main(void)
{
	int a, b;
	
	while (scanf("%d %d", &a, &b) != EOF){
		printf("%d %d\n", gcd(a, b), a / gcd(a, b) * b);
	}
	
	return (0);
}

int gcd(int a, int b)
{
	int tmp, tmp2;
	
	if (a < b){
		tmp = a;
		a = b;
		b = tmp;
	}
	
	while (a % b != 0){
		tmp2 = b;
		b = a % b;
		a = tmp2;
	}
	
	return (b);
}