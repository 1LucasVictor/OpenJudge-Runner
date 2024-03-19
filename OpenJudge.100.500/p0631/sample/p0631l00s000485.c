#include <stdio.h>

int main(void)
{
	int A, B, X;
	scanf("%d", &A);
	scanf("%d", &B);
	scanf("%d", &X);
	if (A + B >= X && A <= X)
		printf("YES\n");
	else
		printf("NO\n");
	return 0;
}