#include <stdio.h>

int main(void)
{
	int n, i;
	int fibo[45];

	scanf("%d", &n);

	fibo[0] = 1;
	fibo[1] = 1;

	for (i = 2; i < 45; i++) {
		fibo[i] = fibo[i - 2] + fibo[i - 1];
	}

	printf("%d\n", fibo[n]);

	return 0;
}
