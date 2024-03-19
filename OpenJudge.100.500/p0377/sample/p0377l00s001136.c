#include<stdio.h>

int main(void)
{
	int car[4][13], i, num = 0, n, a = 0, b;
	char card[4][13], in;
	
	scanf("%d", &a);
	for (i = 0; i < 4; i++)
	{
		for (n = 0; n < 13; n++)
		{
			car[i][n] = 0;
			switch (i)
			{
			case 0:
				card[i][n] = 'S';
				break;
			case 1:
				card[i][n] = 'H';
				break;
			case 2:
				card[i][n] = 'C';
				break;
			case 3:
				card[i][n] = 'D';
			}
		}
	}
	i = 0;
	for (b = 0; b < a * 2; b++)
	{
		scanf("%c %d", &in,&num);
		switch (in)
		{
		case 'S':
			car[0][num - 1] = 1;
			break;
		case 'H':
			car[1][num - 1] = 1;
			break;
		case 'C':
			car[2][num - 1] = 1;
			break;
		case 'D':
			car[3][num - 1] = 1;
			break;
		default:;
			break;
		}
		i++;
	}
	
	for (i = 0; i < 4; i++)
	{
		for (n = 0; n < 13; n++)
		{
			if (car[i][n] == 0)
			{
				printf("%c %d\n", card[i][n], n + 1);
			}
		}
	}
	
	return 0;
}