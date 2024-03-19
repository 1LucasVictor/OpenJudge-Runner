#include<stdio.h>

int main() {
	int i, j, n, num, card, a[4][13] = {0, 0};
	char c;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf(" %c", &c);
		scanf("%d", &num);

		if (c == 'S') {
			card = 0;
		}
		else if (c == 'H') {
			card = 1;
		}
		else if (c == 'C') {
			card = 2;
		}
		else if (c == 'D') {
			card = 3;
		}
		a[card][num - 1] = 1;
	}
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 13; j++) {
			if (a[i][j] == 0) {
				if (i == 0) {
					printf("S %d\n", j + 1);
				} else if (i == 1) {
					printf("H %d\n", j + 1);
				} else if (i == 2) {
					printf("C %d\n", j + 1);
				} else if (i == 3) {
					printf("D %d\n", j + 1);
				}
			}
		}
	}
	return 0;
}