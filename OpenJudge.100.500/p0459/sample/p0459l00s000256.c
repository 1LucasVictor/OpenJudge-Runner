#include<stdio.h>

int main(void)
{
	int  X, Y;
	scanf("%d%d", &X, &Y);

	if (Y % 2 == 0)
	{
		if (Y <= 4 * X&&Y>=2*X)
		{
			printf("Yes");
		}
	}
	else
	{
		printf("No");
	}
	return 0;
}
