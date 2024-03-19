#include <stdio.h>

int main(void)
{
	int n, a;				//Value n, a.
	int i;
	int min, max;			//Answers.
	long sum;

	scanf("%d", &n);

	i = 0;
	sum = 0;
	while(i < n)
	{
		scanf("%d", &a);
		if(i == 0)
		{
			min = a;
			max = a;
		}

		if(min > a)
			min = a;
		if(max < a)
			max = a;

		sum = sum + a;
		i++;
	}

	printf("%d %d %ld\n", min ,max, sum);
	return (0);
}

