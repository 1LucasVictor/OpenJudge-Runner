#include <stdio.h>

int main(void) {
	int a, b, times;

	scanf("%d",&a);
	scanf("%d", &b);

	times = (a * b) % 2;
	if (times == 0)
	{
		printf("Even\n");
	}
	else 
	{
		printf("Odd\n");
	}
	return 0;
}