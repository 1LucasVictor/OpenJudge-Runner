#include <stdio.h>

int main(void)
{
	int a, b, i;
	int count = 1;

	scanf("%d %d", &a, &b);

	if (b == a) 
	{
		printf("1\n");
		return 0;
	}
	else if (b == 1) 
	{
		printf("0\n");
		return 0;
	}

	i = a;
	while (i < b)
	{
		i += (a - 1);
		count++;
	}

	printf("%d\n", count);

	return 0;
}

