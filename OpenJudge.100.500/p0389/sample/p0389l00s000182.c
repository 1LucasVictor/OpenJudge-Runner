#include <stdio.h>
#include <string.h>

int main(void)
{
	char card[201], tmp[201];
	int m, h, l;
	for (int i = 0; i < 10; i++) {
		scanf("%s", card);
		if (card[0] == '-') {
			break;
		}
		l = strlen(card);
		scanf("%d", &m);
		for (int j = 0; j < m; j++) {
			scanf("%d", &h);
			for (int k = 0; k < l; k++) {
				tmp[k] = card[h];
				if (++h == l) {
					h = 0;
				}
			}
			memcpy(card, tmp, l);
		}
		printf("%s\n", card);
	}
	return 0;
}

