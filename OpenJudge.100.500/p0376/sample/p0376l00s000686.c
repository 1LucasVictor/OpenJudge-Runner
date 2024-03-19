#include <stdio.h>
int main(void) {
	int n;
	scanf("%d", &n);

	int a[n],i;
	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}

	for (i = 0; i < n; i++) {
		if (i != n - 1) {
			printf("%d ", a[n - i - 1]);
		}
		else if (i == n-1) {
			printf("%d\n", a[n - i - 1]);
		}
	}
	return 0;
}