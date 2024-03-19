#include<stdio.h>

int main(void) {
	int a, b, c, k, max;
	scanf("%d %d %d %d", &a, &b, &c, &k);

	if (k < a) {
		max = k;
	} else if (a <= k && k <= a + b) {
		max = a;
	} else if (a + b < k) {
		max = a - (k - (a + b));
	}

	printf("%d",max);
	return 0;
}
