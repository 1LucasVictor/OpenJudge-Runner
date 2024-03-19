#include <string.h>

char *suits = "SHCD";
int cards[4][13];

int indexof(char *str, char ch) {
	return (int)(strchr(str, ch) - str);
}

int main() {
	char suit;
	int n, rank, i, j;
	scanf("%d\n", &n);
	for (; n > 0; n--) {
		scanf("%c %d\n", &suit, &rank);
		cards[indexof(suits, suit)][rank - 1] = 1;
	}
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 13; j++) {
			if (!cards[i][j]) {
				printf("%c %d\n", suits[i], j + 1);
			}
		}
	}
}
