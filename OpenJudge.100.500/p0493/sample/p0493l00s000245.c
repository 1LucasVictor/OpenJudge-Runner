#include<stdio.h>
int main(void) {
	int X, c500, c5, Y, u500, u5, u;
	scanf("%d", &X);
	if (X >= 500) {
		c500 = X / 500;
		Y = X - (c500 * 500);
		c5 = Y / 5;
		u500 = 1000 * c500;
		u5 = 5 * c5;
		u = u500 + u5;
		printf("%d\n",u);
	}
	else if (X >= 5) {
		c5 = X / 5;
		u5 = 5 * c5;
		u = u5;
		printf("%d\n",u);
	}
	else {
		u = 0;
		printf("%d\n",u);
	}
	return 0;
}