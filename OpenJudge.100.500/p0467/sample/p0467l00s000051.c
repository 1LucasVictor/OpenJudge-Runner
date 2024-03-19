#include<stdio.h>

int main() {
	int a, b, c, k;
	int total;
	scanf("%d %d %d %d", &a, &b, &c, &k);
	if (k <= a) {
		total = a;
	}
	if (k > a && k <= a + b) {
		total = a;
	}
	if (k > a + b) {
		total = a - (c-b);
	}

	printf("%d\n", total);

	return 0;
}