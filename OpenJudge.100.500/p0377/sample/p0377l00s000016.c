#include <stdio.h>
#include <stdbool.h>

int main(void) {

	int n, num;
	bool cards[4][13] = { false };
	char mark;
	
	scanf("%d", &n);
	//scanf("%c %d\n", &mark, &num);
	
	for (int i = 0; i < n; i++) {
		scanf("%c", &mark);
		scanf("%c %d", &mark, &num);

		switch (mark) {
		case 'S':
			cards[0][num - 1] = true;
			break;
		case 'H':
			cards[1][num - 1] = true;
			break;
		case 'C':
			cards[2][num - 1] = true;
			break;
		case 'D':
			cards[3][num - 1] = true;
			break;
		}
	}

	for (int j = 0; j < 4; j++) {
		for (int k = 0; k < 13; k++) {
			if (cards[j][k] == false) {
				switch (j) {
				case 0:
					printf("S %d\n", k + 1);
					break;
				case 1:
					printf("H %d\n", k + 1);
					break;
				case 2:
					printf("C %d\n", k + 1);
					break;
				case 3:
					printf("D %d\n", k + 1);
					break;
				}
			}
		}
	}

	return 0;
}


