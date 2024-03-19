#include <stdio.h>
#include <stdlib.h>
#pragma warning (disable:4996)
int main() {
	int n, i;
	scanf("%d", &n);
	int *c;
	c = malloc(sizeof(int)*n);
	int min = 1000001, max = -1000001, sum = 0;
	for (i = 0; i < n; i++) {
		scanf("%d", &c[i]);
		if (c[i] < min) min = c[i];
		if (c[i] > max) max = c[i];
		sum += c[i];
	}
	printf("%d %d %d\n", min, max, sum);
	return 0;
}