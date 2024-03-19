#include<stdio.h>

int main(void) {
	int x, y;
	scanf("%d %d", &x, &y);
	int i, n;
	for (i = 0; i <= x; i++) {
		n = 2 * i + 4 * (x - i);
			if (n == y) {
				printf("Yes");
				break;
			}
			else {
			}
	}
	if (n != y) {
		printf("No");
	}

	return 0;

}