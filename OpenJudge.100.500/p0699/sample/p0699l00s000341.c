#include <stdio.h>

int main()
{
	int A, B, C;
	scanf("%d %d %d", &A, &B, &C);
	if (A + B + C == 17 && A * B + B * C + C * A == 95 && A * B * C == 175) printf("YES\n");
	else printf("NO\n");
	fflush(stdout);
	return 0;
}