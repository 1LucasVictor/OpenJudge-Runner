#include <stdio.h>

int main() {
	int w, h, x, y, r;
	scanf("%d %d %d %d %d", &w, &h, &x, &y, &r);

	if (x - r >= 0 && y - r >= 0) {
		if (x + r <= w && y + r <= h) {
			printf("Yes\n");
			return 0;
		}
	}

	printf("No\n");
	return 0;
}