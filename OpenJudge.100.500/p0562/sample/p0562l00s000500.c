#include <stdio.h>

int main()
{
	int A, B;
	scanf("%d %d", &A, &B);
	if (B == 1) printf("0\n");
	else printf("%d\n", (B - 2) / (A - 1) + 1);
	fflush(stdout);
	return 0;
}