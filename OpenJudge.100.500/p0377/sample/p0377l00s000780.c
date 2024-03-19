#include <stdio.h> 
int main(void)
{
	int card[4][13];
	int n, j, i, card1, a, b;
	char mark;
	for (a= 0;a < 4;a++)
	{
		for (b = 0;b < 13;b++)
		{
			card[a][b] = 0;
		}
	}
	scanf("%d", &n);
	for(i = 0;i < n*2;i++)
	{
		scanf("%c %d", &mark, &card1);
		if (mark == 'S')
		{
			card[0][card1-1] = 1;
		}
		else if (mark == 'H')
		{
			card[1][card1-1] = 1;
		}
		else if (mark == 'C')
		{
			card[2][card1-1] = 1;
		}
		else if (mark == 'D')
		{
			card[3][card1-1] = 1;
		}
	}
	for(i=0;i<4;i++)
	{
		for (j = 0;j < 13;j++)
		{
			if (card[i][j] == 0)
			{
				if (i == 0)
				{
					printf("S %d\n",j+1);
				}
				else if (i == 1)
				{
					printf("H %d\n",j+1);
				}
				else if (i == 2)
				{
					printf("C %d\n",j+1);
				}
				else if (i == 3)
				{
					printf("D %d\n",j+1);
				}
			}
		}
	}

	return 0;
}