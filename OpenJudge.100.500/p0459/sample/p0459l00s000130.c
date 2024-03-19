#include <stdio.h>

int main(void)
{
	int X, Y;
	int kame = 0, turu = 0;

	scanf("%d %d", &X, &Y);

	if (Y % 2 == 1)
	{
		printf("No\n");
		return (0);
	}

	kame = (Y - 2 * X) / 2;
	turu = X - kame;

	if (kame < 0 || turu < 0)
		printf("No\n");
	else
		printf("Yes\n");

	return (0);
}