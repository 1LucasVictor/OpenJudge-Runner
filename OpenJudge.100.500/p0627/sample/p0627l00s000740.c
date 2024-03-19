#include<stdio.h>

int main() {

	int a, b, i, j, fake;
	int c[3];

	scanf("%d %d", &a, &b);

	c[0] = a + b;
	c[1] = a - b;
	c[2] = a * b;

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 2; j++) {
			if (c[j] < c[j + 1]) {
				fake = c[j];
				c[j] = c[j + 1];
				c[j + 1] = fake;
			}
		}
	}

	printf("%d", c[0]);

	return 0;

}