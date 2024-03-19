#include <stdio.h>

int main(void)
{
	int i,j,k;
	int h,w;

	for(i =0; 1; i++)
	{
		scanf("%d %d",&h,&w);

		if(h == 0 && w == 0)break;

		for(j = 0; j < h; j++)
		{
			for(k = 0; k < w; k++)
			{
				if (j == 0 || j == h-1)
				{
					printf("#");
				}else
				{
					if (k == 0 || k == w-1)
					{
						printf("#");
					}else
					{
						printf(".");
					}
				}

			}

			printf("\n");
		}

		printf("\n");
	}

	return 0;
}