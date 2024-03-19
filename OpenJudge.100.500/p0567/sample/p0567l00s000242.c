#include <stdio.h>

int main() {
	int A, B, C, N;

	scanf("%d %d %d", &A, &B, &C);

	N = A - B;

	if (C - N < 0) {
		printf("%d\n", 0);
	}
	else {
		printf("%d\n", C - N);
	}
	
	return 0;
}