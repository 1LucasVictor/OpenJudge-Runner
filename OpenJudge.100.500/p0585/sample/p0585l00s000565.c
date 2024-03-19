#include <stdio.h>

int main(void) {
	int A, B, T;
	int sum = 0;
	int i;

	scanf("%d %d %d", &A, &B, &T);

	for(i = A; i <= T; i += A) {
		sum += B;
	}

	printf("%d\n", sum);

	return 0;
}