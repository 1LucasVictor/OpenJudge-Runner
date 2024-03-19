#include <stdio.h>

int main() {
	int D, N;
	scanf("%d %d", &D, &N);
	if (D == 0) {
		printf("%d", N);
		return 0;
	}
	else {
		for (int i = 0; i < D; i++) {
			N = N * 100;
		}
		printf("%d", N);
		return 0;
	}
}