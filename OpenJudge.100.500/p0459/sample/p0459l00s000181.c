#include <stdio.h>

int main(void) {
	int X, Y, kame, turu, c = 1, T = 0;
	scanf("%d", &X);
	scanf("%d", &Y);
	for (kame = 0; kame <= 100; kame++) {
		for (turu = 0; turu <= 100; turu++) {
			if (kame + turu == X) {
				if (kame * 4 + turu * 2 == Y) {
					printf("Yes");
					T = 1;
				}
			}
		}
	}
	if (T == 0) {
		printf("No");
	}

	return 0;
}