#include <stdio.h>

int
main(void)
{
	int A, B;
	scanf("%d %d", &A, &B);
	puts(A <= 8 && B <= 8 ? "Yay!" : ":(");
	return (0);
}
