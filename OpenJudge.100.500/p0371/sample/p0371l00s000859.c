#include<stdio.h>
main(void)
{
	int a, b,i,max,min,sum;

	scanf("%d", &a);

	max = -1000000;
	min = 1000000;
	sum = 0;

	for (i = 0; i < a; i++)
	{
		scanf("%d", &b);

		if (max < b)
		{
			max = b;
		}
		if (min > b)
		{
			min = b;
		}
		sum = sum + b;
	}

	printf("%d %d %d\n", min, max,sum);
	
	return 0;
}
