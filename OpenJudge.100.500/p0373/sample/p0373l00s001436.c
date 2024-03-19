#include<stdio.h>

int main(void)
{
	int i, j,k, l,h=0, w=0;

	while (1)
	{
		scanf("%d%d", &h, &w);
		if ((h == 0) && (w == 0)) break;
		for (i = 0;i < h;i++)
		{
			if ((i == 0) || (i == h - 1))
			{
				for (j = 0;j < w;j++) printf("#");
			}
			else {
				printf("#");
				for (k = 0;k < w - 2;k++)
				{
					printf(".");
				}
				printf("#");
			}
			printf("\n");
		}
		printf("\n");
	}
		return 0;
}
