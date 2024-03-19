#include <stdio.h>


int
main(void)
{
	int X, A, B;
	scanf("%d %d %d", &X, &A, &B);

	if (A >= B)
		puts("delicious");
	else if (B - A <= X)
		puts("safe");
	else
		puts("dangerous");
	return 0;
}