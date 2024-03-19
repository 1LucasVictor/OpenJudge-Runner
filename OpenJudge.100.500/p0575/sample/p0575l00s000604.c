#include <stdio.h>

int main(void)
{
	int X, A, ans = 0;
	scanf("%d %d", &X, &A);

	ans = X < A ? 0 : 10;
	printf("%d\n", ans);
	return 0;
}
