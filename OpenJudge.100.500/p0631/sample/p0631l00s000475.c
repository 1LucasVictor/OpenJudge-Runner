#include <stdio.h>

int
main(void)
{
	int A, B, X;
	scanf("%d %d %d", &A, &B, &X);

	if (X <= A || X - A <= B)
		puts("YES");
	else
		puts("NO");
	return (0);
}
