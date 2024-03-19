#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void)
{
	int n;
	char mark[100];
	int num;
	int card[4][13] = { 0 };
	int i, j;
	int sim[5] = { 'S', 'H', 'C', 'D' };

	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		scanf("%s", mark);
		scanf("%d", &num);
		for (j = 0; j < 4; j++) {
			if (mark[0] == sim[j]) {
				card[j][num - 1] = 1;
			}
		}
	}


	for (i = 0; i < 4; i++) {
		for (j = 0; j < 13; j++) {
			if (card[i][j] == 0)
				printf("%c %d\n", sim[i], j + 1);
		}
	}

	return 0;
}

