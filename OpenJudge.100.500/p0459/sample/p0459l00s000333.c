#include<stdio.h>

int main(void) {
	int X,Y;
	scanf("%d", &X);
	scanf("%d", &Y);

	if (Y % 2 == 0 && (Y / 2 )<(X*2)) {
		printf("Yes\n");
	}
	else {
		printf("No\n");
	}
	return 0;
}