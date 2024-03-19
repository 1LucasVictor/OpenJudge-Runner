#include<stdio.h>

int main(void)
{
	int a,b;
	scanf("%d", &a);
	b = a % 10;
	if (b == 3)
		printf("bon");
	else if (b == 0 || b == 1 || b == 6 || b == 8)
		printf("pon");
	else
		printf("hon");
	return 0;
}
