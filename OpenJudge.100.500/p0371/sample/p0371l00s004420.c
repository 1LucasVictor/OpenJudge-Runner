#include<stdio.h>

int main()
{
	int i, j = 0, seisu[10000], max = -10000000, min = 10000000, sum = 0, num;

	scanf("%d", &i);

	while(j != i)
	{
		scanf("%d", &seisu[j]);

		j++;
	}

	j = 0;

	for(j=0; j<i; j++)
	{
		num = seisu[j];

		if(max < num)
		{
			max = num;
		}
		
		if(min > num)
		{
			min = num;
		}

		sum = sum + num;
	}

	printf("%d %d %d\n", min, max, sum);

	return 0;
}