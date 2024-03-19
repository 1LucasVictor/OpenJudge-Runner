#include<stdio.h>

int main(void) {
	int x, y;
	scanf("%d %d", &x, &y);
	int i, n;
	for (i = 0; i <= x; i++) {
		n = 2 * i + 4 * (x - 1);
			if (n == y) {
				printf("Yes");
			}
			else {
				printf("No");
			}
			break;
	}
	return 0;

}