#include <stdio.h>

int main()
{
	int H, W;
	int h, w;

	while (1) {
		scanf("%d%d", &H, &W);
		if (H == 0 && W == 0) break;
		
		for (w = 0; w < W; w++) putchar('#');
		putchar('\n');

		for (h = 2; h < H; h++) {
			putchar('#');
			for (w = 2; w < W; w++) putchar('.');
			putchar('#');
			putchar('\n');
		}

		for (w = 0; w < W; w++) putchar('#');
		putchar('\n');

		putchar('\n');
	}
	return 0;
}

