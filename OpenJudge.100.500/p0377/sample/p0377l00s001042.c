#include<stdio.h>

int main(void)
{
	int cards;   //持ってるカード枚数
	int flag[4][14] = { 0 };
	flag[0][0] = 1;   //トランプのランクに0はないから
	int d = 0;   //カードのランク
	int i, j;   //くり返し用
	char pattern;   //トランプの絵柄

	scanf("%d", &cards);
	for (i = 0; i < cards; i++)
	{
		scanf(" %c %d", &pattern, &d);
		if (pattern == 'S')
		{
			flag[0][d] = 1;
		}
		else if (pattern == 'H')
		{
			flag[1][d] = 1;
		}
		else if (pattern == 'C')
		{
			flag[2][d] = 1;
		}
		else if (pattern == 'D')
		{
			flag[3][d] = 1;
		}
	}
	/*flagに1が入ってなければそれは持っていないカード*/
	for (i = 0; i < 4; i++)
	{
		for (j = 1; j <= 13; j++)
		{
			if (flag[i][j] == 0)
			{
				if (i == 0)
					printf("S %d\n", j);
				if (i == 1)
					printf("H %d\n", j);
				if (i == 2)
					printf("C %d\n", j);
				if (i == 3)
					printf("D %d\n", j);
			}
		}
	}
	return 0;
}
