#include <stdio.h>

int main() {
	long long int a;
	double b;
	scanf("%lld%lf", &a, &b);
	printf("%lld",(long long int)(a * b));
	return 0;
}