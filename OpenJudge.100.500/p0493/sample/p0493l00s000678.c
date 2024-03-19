#include<stdio.h>

int main(void) {
	int X,y;
	scanf("%d", &X);
	y = X / 500 * 1000 + (X % 500) / 5 * 5;
	printf("%d",y);

	return 0;
}