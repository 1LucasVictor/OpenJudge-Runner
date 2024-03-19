#include<stdio.h>
int main() {

	unsigned long long int n, k, a;
	int x1, x2;

	scanf("%lld%lld", &n, &k);

	a = n / k;

	x1 = n - k * a;
	x2 = n - k * (a + 1);
	x2 = x2 * -1;

	if (x1 > x2)
		printf("%d", x2);

	else
		printf("%d", x1);

	return 0;
}

