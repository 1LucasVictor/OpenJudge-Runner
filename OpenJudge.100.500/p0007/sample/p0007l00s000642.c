#include <stdio.h>

int main(void)
{
	int x, answer, i, j, k;
	while(scanf("%d", &x)==1)
	{

		if(x > 18)
		{
			x = 36 - x;
		}
		
		answer = 0;
		i = 0;
		while(i <= 9 && i <= x)
		{
			j = 0;
			while(j <= 9 && i + j <= x)
			{
				k = 0;
				while(k <= 9 && i + j + k <= x)
				{
					answer++;
					k++;
				}
				j++;
			}
			i++;
		}
		
		printf("%d\n", answer);
	}
	return 0;
}