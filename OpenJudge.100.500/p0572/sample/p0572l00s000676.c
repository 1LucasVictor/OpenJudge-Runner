#include <stdio.h>
long long int L, R;
long long int j, i;
long min, temp;

int find()
{
	min = 4076361;
	scanf("%lld %lld", &L, &R);
	if (L / 2019 != R / 2019)
	{
		return 0;
	}
	for (j = L + 1;j <= R;j++)
	{
		for (i = L;i < j;i++)
		{
			temp = ((i * j) % 2019);
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