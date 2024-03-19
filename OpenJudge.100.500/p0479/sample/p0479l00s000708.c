#include <stdio.h>
#include <stdlib.h>
int cmpint(const void *x, const void *y) {
	return *(int *)x - *(int *)y;
}
int main() {
	int n, a[200000], num[200000] = {0};
	scanf("%d", &n);
	for (int i = 1; i < n; i++) {
		scanf("%d", &a[i]);
		num[a[i] - 1]++;
	}
	qsort(a, n, sizeof(int), cmpint);
	for (int i = 0; i < n; i++) {
		printf("%d\n", num[i]);
	}
	return 0;
}