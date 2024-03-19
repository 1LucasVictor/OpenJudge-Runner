#include <stdio.h>

void line(int w) {
	int i;
	printf("#");
	for (i = 0; i < w - 2; i++) {
		printf(".");
	}
	printf("#\n");
	return;
}

int main(void) {
	int h, w, i;
	while (1) {
		scanf("%d%d", &h, &w);
		if (h == 0 && w == 0) break;
		for (i = 0; i < w; i++)
		{
			printf("#");
		}
		printf("\n");
		for (i = 0; i < h - 2; i++)
		{
			line(w);
		}
		for (i = 0; i < w; i++)
		{
			printf("#");
		}
		printf("\n\n");
	}
	return 0;
}

