#include <stdio.h>

int main(void)
{
	int limit = 10000;
	int H[limit], W[limit];
	int i, j;
	for (i = 0; i < limit; i++) {
		scanf("%d %d", &H[i], &W[i]);
		if (H[i] == 0 && W[i] == 0) {
			break;
		}
	}
	for (j = 0; j < i; j++) {
		for (int h = 0; h < H[j]; h++) {
			for (int w = 0; w < W[j]; w++) {
				if (h == 0 || h == H[j] - 1 || w == 0 || w == W[j] - 1) {
					printf("#");
				} else {
					printf(".");
				}
			}
			printf("\n");
		}
		printf("\n");
	}
}

