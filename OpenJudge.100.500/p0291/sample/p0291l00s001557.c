#include <stdio.h>
#define X 100000

int main() {
	int n, r[X], i, j;
	int max=-100000000, min;
	scanf("%d", &n);
	scanf("%d", &r[0]);
	min = r[0];
	for (i = 1; i < n; i++) {
		scanf("%d", &r[i]);
		if (max<r[i]) {
			max = r[i];
		}
		if (min>r[i-1]) {
			min = r[i - 1];
		}
	}

	printf("%d\n", max-min);
	return 0;
}
