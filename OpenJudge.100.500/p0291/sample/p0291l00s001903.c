#include <stdio.h>

int main(int argc, char const *argv[]) {
	int n, i, j, max = -1000000000;
	int a[200000];
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", a + i);
	}
	for (i = 0; i < n; i++) {
		for (j = i + 1; j < n; j++) {
			if (a[j] - a[i] > max) {
				max = a[j] - a[i];
			}
		}
	}
	printf("%d\n", max);
	return 0;
}