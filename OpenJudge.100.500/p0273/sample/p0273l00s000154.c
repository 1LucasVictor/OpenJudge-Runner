#include <stdio.h>

int main(void)
{
	int n;
	int i;
	int fib1, fib2, fib3;

	fib1 = 1;
	fib2 = 1;

	scanf("%d", &n);

	for (i = 0; i < n - 1; i++){
		fib3 = fib1 + fib2;
		fib1 = fib2;
		fib2 = fib3;
	}

	printf("%d\n", fib3);
	return (0);

}