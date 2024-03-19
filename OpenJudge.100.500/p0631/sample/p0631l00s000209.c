#include <stdio.h>

int main()
{
	int A, B, X;
	scanf("%d %d %d", &A, &B, &X);
	if (X >= A && X <= A + B) printf("YES\n");
	else printf("NO\n");
	fflush(stdout);
	return 0;
}