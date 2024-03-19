#include <stdio.h>
#pragma warning(disable:4996)
	unsigned long long h, n, a[10000];
	unsigned long long b = 0;

int main()
{

	scanf("%llu %llu", &h, &n);
	for (int i = 0; i != n; i++) {
		scanf("%llu", &a[i]);
	}
	for (int i = 0; i != n; i++) {
		b = b + a[i];
	}
	if (b >= h) {
		printf("Yes");
	}
	else {
		printf("No");
	}
	return 0;
}