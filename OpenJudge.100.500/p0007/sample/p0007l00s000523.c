#include <stdio.h>

int main(void)
{
	int x, answer, i, j, k;
	while(scanf("%d", &x)==1)
	{
		answer = 0;
		
		for(i = 0; i <= 9; i++)
		{
			if(i > x || i + 27 < x)
			{
				continue;
			}
			for(j = 0; j <= 9; j++)
			{
				if(i + j > x || i + j + 18 < x)
				{
					continue;
				}
				for(k = 0; k <= 9; k++)
				{
					if(i + j + k > x || i + j + k + 9 < x)
					{
						continue;
					}
					answer++;
				}
			}
		}
		
		printf("%d\n", answer);
	}
	return 0;
}