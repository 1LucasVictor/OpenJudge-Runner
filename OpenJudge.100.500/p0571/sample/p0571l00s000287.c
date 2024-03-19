#include <stdio.h>

int main()
{
	int N, A, B;
	scanf("%d %d %d", &N, &A, &B);
	printf("%d", (A * N > B)? B: A * N);
	fflush(stdout);
	return 0;
}