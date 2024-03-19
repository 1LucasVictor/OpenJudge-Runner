#include <stdio.h>

int main() {
	unsigned long long a, output =  0;
	double b;
	scanf("%lld%lf", &a,&b);
	output = (double)a * b;
	printf("%lld", output);
	return 0;
}