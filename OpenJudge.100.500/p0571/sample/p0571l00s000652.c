#include <stdio.h>

#define min(a, b) ((a) < (b) ? (a) : (b))

int main(void)
{
	int N, A, B;
	scanf("%d %d %d", &N, &A, &B);

	int ans = min(N * A, B);
	printf("%d\n", ans);
	return 0;
}
