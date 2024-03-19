#include <stdio.h>

int main(void) {

	int n, i, ii;

	scanf("%d", &n);

	for (i = 1; i <= n; i++) {
		if (i % 3 == 0) {
			printf(" %d", i);
		} else if (i % 10 == 3) {
			if ((30 >= i) || (40 <= i)) {
				printf(" %d", i);
			}
		} else if ((31 < i) && (i < 41)) {
			ii = i;
			ii -= 30;
			if (i % 3 == 0) {
				printf(" %d", i);
			}
		}
	}
	printf("\n");
	return 0;
}