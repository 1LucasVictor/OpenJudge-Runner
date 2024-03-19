#include<stdio.h>

int main()
{
	int h, w, i, j;

	scanf("%d %d", &h, &w);
	while (h && w)
	{
		for (i = 0; i < w; i++)
			printf("#");
		printf("\n");

		for (i = 0; i < h - 2; i++)
		{
			printf("#");
			for (j = 0; j < w - 2; j++)
			{
				printf(".");
			}
			printf("#\n");
		}
		for (i = 0; i < w; i++)
			printf("#");
		printf("\n\n");
		scanf("%d %d", &h, &w);
	}
	return 0;
}
