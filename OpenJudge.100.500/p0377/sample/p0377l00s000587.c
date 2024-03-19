#include <stdio.h>

int main(void) {
	char cardtype[4] = { 'S','H','C','D' };				//
	char card[4][13] = {};								//絵柄*数字の2次配列
	char type;											//
	int num = 0, i = 0, j = 0, cardnum;
	scanf("%d", &num);
	getchar();											//改行コードの読み飛ばし
	do {
		scanf("%c", &type);								//絵柄の取得
		scanf("%d", &cardnum);							//数字の取得
		getchar();										//改行コードの読み飛ばし
		switch (type) {
		case 'S':
			card[0][cardnum - 1] = 1;
			i++;
			break;
		case 'H':
			card[1][cardnum - 1] = 1;
			i++;
			break;
		case 'C':
			card[2][cardnum - 1] = 1;
			i++;
			break;
		case 'D':
			card[3][cardnum - 1] = 1;
			i++;
			break;
		}
	} while (i != num);									//手持ち枚数分繰り返す
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 13; j++) {
			if (card[i][j] == 0) {
				printf("%c %d\n", cardtype[i], j + 1);
			}
		}
	}
	return 0;
}
