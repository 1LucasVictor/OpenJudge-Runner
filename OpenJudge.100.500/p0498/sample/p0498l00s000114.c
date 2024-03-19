#include <stdio.h>

int main(void)
{
	int n, oneSide;

	scanf("%d", &n);

	/* 片面印刷の紙を後から足す */
	oneSide = n % 2;

	printf("%d\n", n / 2 + oneSide);

	return 0;
}