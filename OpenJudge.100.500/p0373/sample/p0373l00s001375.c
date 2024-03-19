#include <stdio.h>

int main(void)
{
	int H, W, i, t;	

	while (1)
	{
		scanf("%d %d", &H, &W);

		if (H == 0 && W == 0)
			break;

		for (i = 0; i < W; i++)
		{
			printf("#");
		}

		printf("\n");

		for ( i = 0; i < H - 2; i++)
		{
			for (t = 0; t < W; t++)
			{
				if ((t == 0) || (t + 1 == W))
				{
					printf("#");
				}
				else
				{
					printf(".");
				}
			}
			printf("\n");
		}
		for (i = 0; i < W; i++)
		{
			printf("#");
		}

		printf("\n");
	}
	return 0;
}
