#include <stdio.h>

int main(void)
{
	int A, B;
	scanf("%d %d", &A, &B);

	int ab = A + B;
	if (ab % 2)
		puts("IMPOSSIBLE");
	else
		printf("%d\n", ab / 2);
	return 0;
}