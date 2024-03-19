#include <stdio.h>

int main(void) {
	int i = 0;
	int n = 0;
	int r[200000];

	int minv = 0;
	int maxv = 0;

	scanf("%d", &n);

	for (i = 0; i < n; i++)
		scanf("%d", &r[i]);

	minv = r[0];
	maxv = r[1] - r[0];

	for (i = 0; i < n; i++) {
		maxv = maxv > r[i] - minv ? maxv : r[i] - minv;
		minv = minv < r[i] ? minv : r[i];
	}

	printf("%d\n", maxv);

	return 0;
}