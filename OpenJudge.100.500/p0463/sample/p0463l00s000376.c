#include <stdio.h>

int main(void)
{
	int num, surplus;

	scanf("%d", &num);

	surplus = num % 10;

	if (surplus == 3)
	{
		printf("bon\n");
	}
	else if(surplus == 0 || surplus == 1 || surplus == 6 || surplus == 8)
	{
		printf("pon\n");
	}
	else
	{
		printf("hon\n");
	}

	return 0;
}