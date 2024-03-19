#include<stdio.h>

int main() {
	int h, w, i, j;
	while (1) {
		scanf("%d %d", &h, &w);
		if (h == 0 && w == 0) {
			break;
		}
		if (h == 1 && w == 1) {
			printf("#\n\n");
			continue;
		}
		for (i = 0; i < w; i++) {
			printf("#");
		}
		printf("\n");
		for (i = 0; i < h - 2; i++) {
			printf("#");
			for (j = 0; j < w - 2; j++) {
				printf(".");
			}
			printf("#");
			printf("\n");
		}
		for (i = 0; i < w; i++) {
			printf("#");
		}
		printf("\n\n");
	}
	return 0;
}