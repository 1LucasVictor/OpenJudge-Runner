#include <stdio.h>

int main(void)
{
	int num=0;
	int card[4][13];
	int N=0;
	char M;

	int i, j;

	//???????????????.
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 13; j++)
		{
			card[i][j] = 0;
		}
	}

	scanf("%d", &num);

	//????????????????????????.
	for (i = 0; i<num; i++) {
		scanf(" %c %d", &M, &N);
		if (M == 'S')
			card[0][N - 1] = 1;
		else if (M == 'H')
			card[1][N - 1] = 1;
		else if (M == 'C')
			card[2][N - 1] = 1;
		else if (M == 'D')
			card[3][N - 1] = 1;
	}

	//??????.
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 13; j++)
		{
			if (card[i][j] == 0)
			{
				if (i == 0)
					printf("S %d\n", j + 1);
				else if (i == 1)
					printf("H %d\n", j + 1);
				else if (i == 2)
					printf("C %d\n", j + 1);
				else if (i == 3)
					printf("D %d\n", j + 1);
			}
		}
	}

	return 0;
}