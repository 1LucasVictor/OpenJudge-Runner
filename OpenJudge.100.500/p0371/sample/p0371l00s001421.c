#include <stdio.h>
int main(void)


{
	int a, b, i, max, min;
	long sum;
	sum = 0;
	scanf("%d", &a);
	for (i = 0;i < a;i++)
	{
		scanf("%d", &b);
		sum = sum + b;
		if (i == 0)
		{
			min = b;
			max = b;
		}
		if (b < min)
		{
			min = b;
		}
		if (b > max)
		{	
			max = b;
		}
	}
	printf("%d %d %ld\n",min, max, sum);
	return 0;
}