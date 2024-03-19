#include<stdio.h>

int main()
{
	int a, b, x;

	scanf("%d %d %d", &x, &a, &b);
	
	if (b - a <= 0) {
		printf("delicious\n");
	}
	else if (b - a <= x) {
		printf("safe\n");
	}
	else {
		printf("dangerous\n");
	}

	return 0;

}