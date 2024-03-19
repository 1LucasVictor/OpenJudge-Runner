#include<stdio.h>
#include<stdlib.h>

int main(void) {
	long long int n, k,a,b;

	scanf("%lld %lld", &n, &k);

	a = n % k;
	b = abs(a - k);

	if (a > b) {
		printf("%lld", b);
	}
	else {
		printf("%lld", a);
	}
}