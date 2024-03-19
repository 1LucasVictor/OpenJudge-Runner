#include<stdio.h>

int main() {
	int i, n, max, min, sum = 0, a[10001];
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	min = a[0];
	for (i = 1; i < n; i++) {
		if (min > a[i]) {
			min = a[i];
		}
	}
	max = a[0];
	for (i = 1; i < n; i++) {
		if (max < a[i]) {
			max = a[i];
		}
	}
	for (i = 0; i < n; i++) {
		sum += a[i];
	}
	printf("%d %d %d\n", min, max, sum);
	return 0;
}