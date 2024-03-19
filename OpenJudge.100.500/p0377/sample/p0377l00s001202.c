#include <stdio.h>

int main(void)
{
	int card_number, number, card[4][13], count_1, count_2;
	char input_pattern, pattern[] = { 'S','H','C','D' }, n;

	for (count_1 = 0; count_1 < 4; count_1++)
	{
		for (count_2 = 0; count_2 < 13; count_2++)
		{
			card[count_1][count_2] = 0;
		}
	}

	scanf("%d", &card_number);

	for (count_1 = 0; count_1 < card_number; count_1++)
	{
		scanf("%c", &n);
		scanf("%c %d", &input_pattern, &number);

		if (input_pattern == 'S')
		{
			card[0][number - 1] = 1;
		}

		if (input_pattern == 'H')
		{
			card[1][number - 1] = 1;
		}

		if (input_pattern == 'C')
		{
			card[2][number - 1] = 1;
		}

		if (input_pattern == 'D')
		{
			card[3][number - 1] = 1;
		}
	}

	for (count_1 = 0; count_1 < 4; count_1++)
	{
		for (count_2 = 0; count_2 < 13; count_2++)
		{
			if (card[count_1][count_2] == 0)
			{
				printf("%c %d\n", pattern[count_1], (count_2 + 1));
			}
		}
	}

	return 0;
}
