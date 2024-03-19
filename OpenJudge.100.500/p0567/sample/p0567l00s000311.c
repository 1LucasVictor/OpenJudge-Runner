#include <stdio.h>

#define max(a, b) ((a) > (b) ? (a) : (b))

int main(void)
{
	int A, B, C;
	scanf("%d %d %d", &A, &B, &C);

	int ans = max(0, C - (A - B));
	printf("%d\n", ans);
	return 0;
}
