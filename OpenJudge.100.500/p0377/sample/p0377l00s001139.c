#include <stdio.h>

#define MAX (52)

int main(void) {
	char SUITS[] = "SHCD";
	char suit;
	int cards[MAX] = {};
	int count, number;
	int i;
	
	scanf("%d\n", &count);
	for (i = 0; i < count; i++) {
		scanf("%c %d\n]", &suit, &number);
		switch (suit) {
		case 'H': number += 13; break;
		case 'C': number += 13 * 2; break;
		case 'D': number += 13 * 3; break;
		default: break;
		}
		cards[number - 1] = 1;
	}
	for (i = 0; i < MAX; i++) {
		if (!cards[i]) {
			printf("%c %d\n", SUITS[i / 13], (i % 13) + 1);
		}
	}

	return 0;
}