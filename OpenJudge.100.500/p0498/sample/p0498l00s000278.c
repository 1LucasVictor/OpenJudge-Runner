#include <stdio.h>

int main() {
	int N = 0;
	scanf("%d", &N);
	if (N % 2 == 0) {
		printf("%d\n", (N / 2));
	}
	else {
		printf("%d\n", ((N + 1) / 2));
	}

	return 0;
}