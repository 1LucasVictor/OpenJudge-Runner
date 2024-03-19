#include <stdio.h>

int main() {
	int A, B, C, N;

	scanf("%d %d %d", &A, &B, &C);

	N = A - B;
	printf("%d\n", C - N);
	return 0;
}