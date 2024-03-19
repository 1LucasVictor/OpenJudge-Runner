#include <stdio.h>

int main() {

	while (1) {
		int H, W;
		scanf("%d %d", &H, &W);

		if (H == 0 && W == 0) {
			return 0;
		}

		for (int i2 = 0; i2 < W; i2++) {
			printf("#");
		}
		printf("\n");

		for (int i = 0; i < (H - 2); i++) {
			printf("#");

			for (int i2 = 0; i2 < (W - 2); i2++) {
				printf(".");
			}

			printf("#");
			printf("\n");
		}

		for (int i2 = 0; i2 < W; i2++) {
			printf("#");
		}

		printf("\n");
		printf("\n");
	}


	return 0;
}
