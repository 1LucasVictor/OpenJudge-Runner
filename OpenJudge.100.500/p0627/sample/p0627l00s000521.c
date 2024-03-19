#include <stdio.h>


int main() {
	int A, B, max;
	scanf("%d %d", &A, &B);
	max = A + B;
	if (max < A - B) {
		max = A - B;
	}
	if (max < A*B) {
		max = A*B;
	}

	printf("%d\n", max);
	return 0;
}