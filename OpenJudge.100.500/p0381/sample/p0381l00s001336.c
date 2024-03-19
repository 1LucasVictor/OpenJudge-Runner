#include<stdio.h>

int main()
{
	int base, num, answer=0;
	int a, b, c,n=0;
	while (1)
	{
		scanf("%d%d", &base, &num);
		if (base == 0 && num == 0) break;
		for (a = 1; a <= base; a++)
		{
			for (b = a + 1; b <= base; b++)
			{
				for (c = b + 1; c <= base; c++)
				{
					if ((a + b + c) == num)
						answer = answer + 1;
				}
			}
		}
		printf("%d\n", answer);
	}
	

	return 0;
}