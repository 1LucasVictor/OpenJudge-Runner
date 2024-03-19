#include <stdio.h>

int main() {
	int A, B, T;
	int N;

	scanf("%d %d %d", &A, &B, &T);



	N = T / A;
	printf("%d\n", N*B);

		return 0;
}