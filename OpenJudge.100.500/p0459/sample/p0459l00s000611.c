#include<stdio.h>
int main() {
	int x, y;
	int a, b, c=0;
	scanf("%d %d", &x, &y);
	for (int i = 0; i <= x; i++) {
		if (2 * i + 4 * (x - i) == y) {
			c = 1;
		}
	}
	if (c == 0) {
		printf("No\n");
	}
	else {
		printf("Yes\n");
	}
	return 0;
}