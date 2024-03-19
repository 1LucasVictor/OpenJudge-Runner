#include<stdio.h>

int main(void) {
	int a, b, x;

	scanf("%d %d %d", &x, &a, &b);

	if (0 >= b - a) {
		printf("delicious\n");
	}
	else if (x >= b - a) {
		printf("safe\n");
	}
	else {
		printf("dangerous\n");
	}
}
