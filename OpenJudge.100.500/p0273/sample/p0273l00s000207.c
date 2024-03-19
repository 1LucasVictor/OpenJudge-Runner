#include<stdio.h>


int main(void)
{
	int fib[100];
	int n,i, j, k, l = 0;

	scanf("%d", &n);

	fib[0] = 1;
	fib[1] = 1;

	for (i = 2;i <= n;i++) {

		fib[i] = fib[i - 1] + fib[i - 2];
		
	}

	printf("%d\n", fib[n]);
	

	return 0;
}
 

