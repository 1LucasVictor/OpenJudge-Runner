#include <stdio.h>

int main(void) {

	int n, i, ii;

	scanf("%d", &n);

	for (i = 1; i <= n; i++) {
		if (i % 3 == 0) {
			printf(" %d", i);
		} else if ((i % 10 == 3) || ((i > 30) && (i < 40))) {
			printf(" %d", i);
		}
	}
	scanf("%d", &n);
	printf("\n");
	return 0;
}