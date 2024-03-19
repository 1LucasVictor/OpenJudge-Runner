#include <stdio.h>

#define max(a, b) ((a) > (b) ? (a) : (b))

int main(void)
{
	int A, B, C, ans = 0;
	scanf("%d %d %d", &A, &B, &C);

	ans = max(0, C - max(0, A - B));
	printf("%d\n", ans);
	return 0;
}
