#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
	char card[205] = { 0 };
	char copy_card[205] = { 0 };
	int m;
	int h;
	int i, j;
	int length;

	while (1) {
		for (j = 0; j < sizeof(card); j++) { //cardを初期化
			card[j] = '\0';
		}
		scanf("%s", card);
		
		if (strcmp(card, "-") == 0) {
			break;
		}

		for (length = 0; card[length] != '\0' ; length++);

		scanf("%d", &m);

		for (i = 0; i < m ;i++) {
			scanf("%d", &h);

			for (j = 0; j < sizeof(copy_card); j++) { //copy_cardを初期化
				copy_card[j] = '\0';
			}
			memcpy(copy_card, card, h);

			for (j = h; j < length + 1;j++) {
				card[j - h] = card[j];
			}
			for (j = 0; j < h; j++) {
				card[length - j] = '\0';
			}
			strcat(card, copy_card);
		}

		printf("%s\n" ,card);

	}

	return 0;
}
