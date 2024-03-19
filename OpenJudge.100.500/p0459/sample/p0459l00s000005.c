#include <stdio.h>
int main() {
	int x, y;
	scanf("%d%d", &x, &y);
	for (int i = 0; i < 100; i++) {
		for (int j = 0; j < 100; j++) {
			if (2 * i + 4 * j == y && i + j == x) {
				printf("Yes\n");
				return 0;
			}
		}
	}
	printf("No\n");
	return 0;
}