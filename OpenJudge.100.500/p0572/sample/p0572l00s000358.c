#include <stdio.h>
long long int L, R;
long long int j, i;
long min, temp;

int find()
{
	min = 4072324;
	scanf("%lld %lld", &L, &R);
	for (j = L + 1;j <= R;j++)
	{
		for (i = L;i < j;i++)
		{
			temp = (i % 2019) * (j % 2019);
			if (temp == 0)
			{
				return 0;
			}
			if (temp < min)
			{
				min = temp;
			}
		}
	}
	return min;
}

int main()
{
	printf("%d", find());
}