#include <stdio.h>

int main(void)
{
	int i, j, howmanycards, card_num, card_suit;
	int cards[4][14];
	char suit; 

	for(i=0; i < 4; i++)
	{
		for(j=0; j < 13; j++)
		{
			cards[i][j] = 0;
		}
	}

	scanf("%d", &howmanycards);
	for(i = 0; i < howmanycards; i++)
	{
		scanf("%s %d", &suit, &card_num);
		switch(suit)
		{
			case 'S':
				card_suit = 0;
				break;
			case 'H':
				card_suit = 1;
				break;
			case 'C':
				card_suit = 2;
				break;
			case 'D':
				card_suit = 3;
		}
		cards[card_suit][card_num] = 1;
	}

	for(i = 0; i < 4; i++)
	{
		for(j = 1; j < 14; j++)
		{
			if(!cards[i][j])
			{
				switch(i)
				{
					case 0:
						printf("S ");
						break;
					case 1:
						printf("H ");
						break;
					case 2:
						printf("C ");
						break;
					case 3:
						printf("D ");
						break;
				}
				printf("%d\n", j);
			}
		}
	}
}