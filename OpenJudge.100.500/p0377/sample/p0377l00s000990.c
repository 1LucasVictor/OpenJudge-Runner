#include <stdio.h>

int main(void) {

	int n, i, j;
	int all[52];
	int cards[52];
	char symbol;
	int number;
	int snum;
	int card;

	for (i = 0; i < 52; i++) {
	
		all[i] = 1;

	}

	scanf("%d", &n);

	for (j = 0; j < n; j++) {
		scanf("\n%c %d", &symbol, &number);

		switch (symbol) {

		case 'S':
			snum = 0;
			break;
		case 'H':
			snum = 1;
			break;
		case 'C':
			snum = 2;
			break;
		case 'D':
			snum = 3;
			break;
		}

		cards[j] = snum * 13 + number - 1;

	}

	for (j = 0; j < n; j++) {

		card = cards[j];

		all[card] = 0;

	}

	for (i = 0; i < 52; i++) {

		if (all[i] == 1) {

			number = (i + 1) % 13;
			if (number == 0) {
				number = 13;
			}

			snum = (i - number + 1) / 13;

			switch (snum) {

			case 0:
				symbol = 'S';
				break;
			case 1:
				symbol = 'H';
				break;
			case 2:
				symbol = 'C';
				break;
			case 3:
				symbol = 'D';
				break;

			}

			printf("%c %d\n", symbol, number);

		}
	}

	return(0);

}
