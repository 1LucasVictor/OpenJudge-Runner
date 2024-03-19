#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int card[4][13] = { 0 };
	char pattern;
	int number, n, i=0, j;
	scanf("%d", &n);
	for (i = 0; i < n;i++) {
		scanf(" %c %d", &pattern, &number);
		if (pattern == 'S')
			card[0][number - 1] = 1;
		else if (pattern == 'H')
			card[1][number - 1] = 1;
		else if (pattern == 'C')
			card[2][number - 1] = 1;
		else
			card[3][number - 1] = 1;
	}
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 13; j++) {
			if (card[i][j] != 1) {
				if (i == 0)
					printf("S %d\n", j+1);
				else if (i == 1)
					printf("H %d\n", j+1);
				else if (i == 2)
					printf("C %d\n", j+1);
				else
					printf("D %d\n", j+1);
			}
		}
	}
}
