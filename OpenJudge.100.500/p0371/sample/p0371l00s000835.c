#include <stdio.h>
int main() {
	long a[10000], n, i, b = 0, c, d;
	scanf("%d",&n);
	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	for (i = 0; i < n; i++) {
		b=b+a[i];
	}
	c = a[0];
	for (i = 1; i < n; i++) {
		if (a[i] > c) {
			c = a[i];
		}
	}
	d = a[0];
	for (i = 1; i < n; i++) {
		if (a[i] < d) {
			d = a[i];
		}
	}
	printf("%d %d %d\n", d, c, b);
	return 0;
}