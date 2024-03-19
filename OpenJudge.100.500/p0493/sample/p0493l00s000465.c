#include <stdio.h>

int main() {
	long long int X;
	scanf("%lld", &X);
	printf("%lld", 1000 * (X / 500) + 5 * ((X % 500) / 5));
	return 0;
}