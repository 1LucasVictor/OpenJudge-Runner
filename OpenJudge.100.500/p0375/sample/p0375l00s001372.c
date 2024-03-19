#include<stdio.h>

int main(void)
{
	int n;
	scanf("%d", &n);

	int i = 1;

	do{

		int x = i;

		if (x % 3 == 0)
		{
			printf(" %d", i);
		}
		else
		{
			for (;;)
			{
				if (x % 10 == 3)
				{
					printf(" %d", i);
					break;
				}
				else
				{
					x = x / 10;
					if (x == 0)
					{
						break;
					}
				}
			}
		}
	}while (++i <= n);

	printf("\n");

	return 0;
}