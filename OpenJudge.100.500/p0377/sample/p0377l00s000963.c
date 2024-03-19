#include <stdio.h>

int main(void)
{
	int cards[4][13] = { 0 };
	int n = 0, i, num = 0, j, k;

	char suit_inputvalue;
	char suit[5] = "SHCD";

	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		scanf(" %c %d", &suit_inputvalue, &num);

		if ((suit_inputvalue == suit[0]) || (suit_inputvalue == suit[1]))
		{
			if (suit_inputvalue == suit[0])
			{
				cards[0][num - 1] = 1;
			}
			else
			{
				cards[1][num - 1] = 1;
			}
		}
		else
		{
			if (suit_inputvalue == suit[2])
			{
				cards[2][num - 1] = 1;
			}
			else
			{
				cards[3][num - 1] = 1;
			}
		}
	}

	for (j = 0; j < 4; j++)
	{
		for (k = 0; k < 13; k++)
		{
			if (cards[j][k] == 0)
			{
				printf("%c %d\n", suit[j], k + 1);
			}
		}
	}

	return 0;
}
