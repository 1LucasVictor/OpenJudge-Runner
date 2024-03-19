#include <stdio.h>

int main(void)
{
	int X, Y;
	int kame = 0, turu = 0;
	int sub;

	scanf("%d %d", &X, &Y);

	if (Y % 2 == 1)
	{
		printf("No\n");
		return (0);
	}

	kame = Y / 4;
	if (Y % 4 == 2)
		turu++;

	if (kame + turu == X)
		printf("Yes\n");
	else if (X < kame + turu)
		printf("No\n");
	else
	{
		sub = X - (kame + turu);
		if (kame % sub == 0)
			printf("Yes\n");
		else
			printf("No\n");
	}
	return (0);
}