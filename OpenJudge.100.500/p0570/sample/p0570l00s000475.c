#include<stdio.h>
#include<stdlib.h>
int main(void) {
	int a, b, k, x, y;
	x = 1;
	y = 1;
	k = 0;
	scanf("%d %d", &a, &b);
	while (x > 0 || y > 0) {
		x = a - k;
		y = b - k;
		if (abs(x) == abs(y)) {
			break;
		}
		else
			k++;
	}
	if (abs(x) == abs(y)) {
		printf("%d", k);
	}
	else
		printf("IMPOSSIBLE");
	return 0;
}