#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int memo[50], isok[50] = { 0 };

int fib(int n) {
	if (isok[n])
		return memo[n];
	else {
		isok[n] = 1;
		return memo[n] = fib(n - 1) + fib(n - 2);
	}
}

int main(void) {
	int n;

	memo[0] = 1, memo[1] = 1;
	isok[0] = 1, isok[1] = 1;

	scanf("%d", &n);

	printf("%d\n", fib(n));

	return 0;
}
