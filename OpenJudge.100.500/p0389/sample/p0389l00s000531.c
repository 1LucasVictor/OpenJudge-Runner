#include <stdio.h>

int main(void)
{
	char card[2][208];
	int n, h, f, len, i, j;
	int curr, next;

	for (;;) {
		for (i = 0; i < 2; i++)
			for (j = 0; j < 208; j++)
				card[i][j] = '\0';
		scanf("%s", &card[0][0]);
		if (card[0][0] == '-') break;
		scanf("%d", &n);
		for (len = 0; card[0][len] != '\0'; len++) ;
		curr = 0;
		while (n--) {
			scanf("%d", &h);
			next = (curr + 1) % 2;
			for (i = 0; i < h; i++) {
				card[next][len - h + i] = card[curr][i];
			}
			for (i = 0; i < len - h; i++) {
				card[next][i] =  card[curr][h + i];
			}
			curr = (curr + 1) % 2;
		}
		printf("%s\n", &card[next][0]);
	}
	return 0;
}

