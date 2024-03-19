#include <stdio.h>
int main() {

	int n, i, j, k, card[4][13], y;
	char x;

	for (i = 0; i < 4; i++)//初期化処理
	{
		for (j = 0; j < 13; j++) 
		{
			card[i][j] = 0;
		}
	}

	scanf("%d", &n);

	for (k = 0; k < n * 2; k++) //フラグ立て
	{
		scanf("%c %d", &x, &y);

		if (x == 'S') 
		{
			card[0][y - 1] = 1;
		}

		else if (x == 'H') 
		{
			card[1][y - 1] = 1;
		}

		else if (x == 'C')
		{
			card[2][y - 1] = 1;
		}

		else if (x == 'D')
		{
			card[3][y - 1] = 1;
		}
	}

	for (i = 0; i < 4; i++) //文字の方
	{

		for (j = 0; j < 13; j++)//数字
		{

			if (card[i][j] == 0) //フラグが立ってなかったら「ないよ」って表示
			{
				if (i == 0) 
				{
					printf("S %d", j + 1);
				}

				else if (i == 1) 
				{
					printf("H %d", j + 1);
				}

				else if (i == 2)
				{
					printf("C %d", j + 1);
				}

				else if (i == 3) 
				{
					printf("D %d", j + 1);
				}
				printf("\n");
			}
		}
	}
	return 0;//おわり
}

