#include <stdio.h>

int main(void) {
	int i, j, x, N;
	int num = 0;
	scanf("%d", &N);

	for (i = 0; i < N; i++) {
		scanf("%d", &x);
		for (j = 2; j < N/2 + 1; j++) {
			if (x % j == 0 && x != j) {
				break;
			}
		}
		if (j == N/2 + 1) {
			num++;
		}
	}

	printf("%d\n", num);

	return 0;
}