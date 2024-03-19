#include <stdio.h>

int main(void)
{
	int A, B;
	scanf("%d %d", &A, &B);

	if ((A + B) % 2)
		puts("IMPOSSIBLE");
	else
		printf("%d\n", (A + B) / 2);
	return 0;
}