#include <stdio.h>

int main(void) {
	long long a = 0;
	float b = 0;
	long long c = 0;

	scanf("%lld", &a);
	scanf("%f", &b);

	c =(long long)( b * 100);

	a = (c * a) / 100;
	
	printf("%lld", a);

	return 0;
}