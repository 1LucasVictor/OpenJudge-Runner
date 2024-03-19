#include <stdio.h>

int main() {
	int n, a[200003] = { 0 }, i, j;
	scanf("%d", &n);

	for (i = 2; i <= n; i++) {
		scanf("%d", &j);
		a[j]++;
	}
	for (i = 1; i <= n; i++) {
		printf("%d\n", a[i]);
	}
}