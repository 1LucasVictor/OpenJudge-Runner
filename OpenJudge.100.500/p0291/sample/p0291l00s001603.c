#include <stdio.h>
#define X 10000

int main() {
	int max = -1000000000, n, r[X], i, j;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &r[i]);
		if (i>0) {
			for (j = 0; j < i;j++) {
				if (max < (r[i]-r[j])) {
					max = r[i] - r[j];
				}
			}
		}
	}

	printf("%d\n", max);
	return 0;
}
