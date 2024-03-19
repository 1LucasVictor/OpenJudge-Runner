#include <stdio.h>

int main() {
	int A, B, T, kei;

	scanf("%d %d %d", &A, &B, &T);

	kei = T / A * B;
	printf("%d\n", kei);

	return 0;
}