#include <stdio.h>


// ABC 120 B問題　５２～１２分

int main() {

	int A, B, K;
	int T[100];
	int count = 0;
	int i;
	int N;

	scanf("%d %d %d", &A, &B, &K);

	for (i = 1; i < 100; i++) {
		if (A%i == 0 && B%i == 0) {
			T[count] = i;
			count++;

		}
	}
	N = T[K - 1];

	printf("%d\n", N);

	return 0;
}
