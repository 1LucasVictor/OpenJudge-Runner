#include <stdio.h>

int main(void) {
	int n, t;
	int diff = 0;
	int a[200000];
	int i, j;

	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		scanf("%d", &t);
		a[i] = t;

		if (i == 1) {
			diff = a[i] - a[j];
		}

		for (j = i - 1; j >= 0 ;j--) {
			if (diff < a[i] - a[j]) {
				diff = a[i] - a[j];
			}
		}
	}

	printf("%d\n", diff);
	return 0;
}
