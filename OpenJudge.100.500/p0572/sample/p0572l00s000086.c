#include<stdio.h>
#include<stdlib.h>


int main()
{
	long int L, R;
	int l, k, i, j, c;
	scanf("%d", &L);
	scanf("%d", &R);

	l = L % 2019;

	k = R - L;

	if (k > 2018)
	{
		printf("0");
		return 0;
	}

	c = l * (l + 1) % 2019;

	for (i = l; i < l + k; i++) 
	{
		for (j = i + 1; j < l + k + 1; j++) 
		{	
			if ( (i * j) % 2019 < c) 
			{ 
				c = (i * j) % 2019;
			}
		}
	}
	printf("%d", c);
	return 0;
}