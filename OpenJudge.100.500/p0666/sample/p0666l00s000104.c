#include <stdio.h>

int main()
{
	int i, X, A, B;
	scanf("%d %d %d", &X, &A, &B);
	if (A >= B) printf("delicious\n");
	else if (A + X >= B) printf("safe\n");
	else printf("dangerous\n");
	fflush(stdout);
	return 0;
}