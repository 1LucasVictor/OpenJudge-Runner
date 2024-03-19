#include<stdio.h>
#include<math.h>

int main()
{
	int n,a,b,c,d ,i, cnt, k = 0;
	int num[50] = { 0 };

	while (scanf("%d", &n) != EOF)
	{
		if ((n > 0 && n <= 50))
		{
			cnt = 0;
			for (a = 0; a <10; a++)
			{
				for (b = 0; b <10; b++)
				{
					for (c = 0; c < 10; c++)
					{
						for (d = 0; d < 10; d++)
						{
							if (a + b + c + d == n)
							{
								++cnt;
							}
						}
					}
				}
			}
			num[k] = cnt;
			++k;
		}
	}

	for (i = 0; i < k;i++)
	{
		printf("%d\n", num[i]);
	}

	return 0;
}
