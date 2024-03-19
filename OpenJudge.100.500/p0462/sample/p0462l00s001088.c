#include <stdio.h>

int main() {
	long double A;
	long double B;

	scanf("%Lf %Lf", &A, &B);
	printf("%lld\n", (long long)(A * B));
}
