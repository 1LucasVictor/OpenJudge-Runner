#include<stdio.h>

int main(void)
{
	int a[2];
	int i, d;
	while(1)
	{
		scanf("%d %d", &a[0], &a[1]);
		if ((a[0] == 0 && a[1] == 0))
		{
			break;
		}
		for (i=0; i<a[0]; i++)
		{
			for (d=0; d<a[1]; d++)
			{
				if (i == 0 || d == 0 || i == a[0] - 1 || d == a[1] -1)
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
		printf("\n");
	}
	return 0;
}
