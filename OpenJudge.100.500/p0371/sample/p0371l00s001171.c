#include <stdio.h>

int main() {
	int n, i, a[10000], max, min, sum;

	scanf("%d", &n);

	for ( i = 1; i <= n; i++ ) {
		scanf("%d", &a[i]);
	}

	max = a[1];
	min = a[1];
	sum = 0;

	for ( i = 1; i <= n; i++ ) {
		sum = sum + a[i];
		if ( a[i] >= max ) {
			max = a[i];
		}
		if ( a[i] <= min ) {
			min = a[i];
		}
	}
	printf("%d %d %d\n", min, max, sum);

	return 0;
}