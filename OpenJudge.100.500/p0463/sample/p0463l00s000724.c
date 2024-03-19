#include <stdio.h>

int main(void)
{
	int num;

	scanf("%d", &num);

	if (num % 10 == 3)
	{
		printf("bon\n");
	}
	else if(num % 10 == 0 || num % 10 == 1 || num % 10 == 6 || num % 10 == 8)
	{
		printf("pon\n");
	}
	else
	{
		printf("hon\n");
	}

	return 0;
}