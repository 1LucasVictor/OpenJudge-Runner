#include <stdio.h>

int main()
{
	unsigned int a, b;

	scanf("%d %d", &a, &b);

	if (0 == (a*b) % 2) {
		printf("Even\n");
	}else{
		printf("Odd\n");
	}

	return 0;
}