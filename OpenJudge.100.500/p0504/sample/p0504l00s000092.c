#include<stdio.h>

int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	if (a%b != 0) {
		printf("%d\n", (a / b) + 1);
	}
	else {
		printf("%d\n", a / b);
	}

	return 0;
}