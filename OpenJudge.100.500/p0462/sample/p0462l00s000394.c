#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	long long a, b, c, output;

	scanf("%lld", &a);
	scanf("%lld.%lld", &b, &c);


	output = a * (b*100+c);

	output /= 100;

	printf("%lld", output);

	return 0;
}