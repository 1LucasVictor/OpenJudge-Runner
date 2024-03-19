#include <stdio.h>

int suit_to_int(char c)
{
	switch (c) {
		case 'S':
			return 0;
		case 'H':
			return 1;
		case 'C':
			return 2;
		case 'D':
			return 3;
		default:
			return 9;
	}
}

char int_to_suit(int m)
{
	switch (m) {
		case 0:
			return 'S';
		case 1:
			return 'H';
		case 2:
			return 'C';
		case 3:
			return 'D';
		default:
			return 'U';
	}
}

int main(void)
{
	char c;
	int n, m;
	int card[4][13];
	scanf("%d\n", &n);
	
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 13; j++) {
			card[i][j] = 0;
		}
	}
	
	for (int i = 0; i < n; i++) {
		scanf("%c %d\n", &c, &m);
		card[suit_to_int(c)][m - 1] = 1;
	}
	
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 13; j++) {
			if (card[i][j] != 1) {
				printf("%c %d\n", int_to_suit(i), j + 1);
			}
		}
	}
}

