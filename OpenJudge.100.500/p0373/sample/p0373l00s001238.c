#include <stdio.h>
int main(void) {

	int h, w;
	int i, j;

	while (1)
	{
		scanf("%d %d", &h, &w);

		if (h == 0 && w == 0)
		{
			break;
		}

		for (j = 0; j < w; j++)
		{
			printf("#");
		}

		printf("\n");
		for (i = 0; i < h-2; i++)
		{
			for (j = 0;j < w;j++)
			{
				printf("#");

				for (j = 1;j < w - 1;j++)
				{
					printf(".");
				}

				printf("#\n");
			}

		}

		for (j = 0; j<w; j++)
		{
			printf("#");
		}

		printf("\n\n");
	}

	return 0;
}
