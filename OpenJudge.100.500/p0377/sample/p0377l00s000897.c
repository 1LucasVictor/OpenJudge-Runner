#include<stdio.h>
int main(void)
{
	int card[4][14], i, j, n, b;
	char a;

	//すべてのカードをとりあえず0に
	for (i = 0; i < 4; i++)
	{
		for (j = 1; j <= 13; j++)
		{
			card[i][j] = 0;
		}
	}

	scanf("%d", &n); //カードの枚数指定


	//持っているカードにチェックとして1をつける
	for (i = 1; i <= n*2; i++)
	{
		scanf("%c %d", &a, &b);

		if (a == 'S')
		{
			card[0][b] = 1;
		}
		if (a == 'H')
		{
			card[1][b] = 1;
		}
		if (a == 'C')
		{
			card[2][b] = 1;
		}
		if (a == 'D')
		{
			card[3][b] = 1;
		}
	}



	//持ってないカードの表示
	for (i = 0; i < 4; i++)
	{

		for (j = 1; j <= 13; j++)
		{

			if (card[i][j] == 0) // チェックがついていないとき
			{
				if (i == 0)
				{
					printf("S %d\n", j);
				}
				if (i == 1)
				{
					printf("H %d\n", j);
				}
				if (i == 2)
				{
					printf("C %d\n", j);
				}
				if (i == 3)
				{
					printf("D %d\n", j);
				}
			}
		}
	}


	return 0;
}
