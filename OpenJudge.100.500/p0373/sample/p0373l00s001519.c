#include <stdio.h>

int main(void) {
	int h, w;
	int i, j;
	
	while (scanf("%d %d", &h, &w), h || w) {

		for (i = 0; i < h; i++) {
			for (j = 0; j < w; j++) {
				if (i == 0 || i == h - 1 || j == 0 || j == w - 1) putchar('#');
				else putchar('.');
			}
			puts("");
		}
		puts("");
	}
	return 0;
}