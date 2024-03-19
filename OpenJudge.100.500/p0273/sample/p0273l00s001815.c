#include <stdio.h>

#define MAX 45

int FIB[MAX] = {0};

int fibonacci(int n) {
	if (n == 0 || n == 1) {
		FIB[n] = 1;
	}
	if (FIB[n] != 0) {
		return FIB[n];
	}
	FIB[n] = fibonacci(n-2) + fibonacci(n-1);
	return FIB[n];
}

int main(void) {
	int n;
	scanf("%d", &n);
	printf("%d\n", fibonacci(n));

	return 0;
}