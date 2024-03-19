#include <stdio.h>

int main()
{
	int A, B, T, n;
	scanf("%d", &A);
	scanf("%d", &B);
	scanf("%d", &T);
	n = T / A * B;
	printf("%d\n", n);
	return 0;
}