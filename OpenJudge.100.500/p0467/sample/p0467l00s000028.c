#include<stdio.h>

int main(void)
{
	int a, b, c, k;
	scanf("%d %d %d %d", &a, &b, &c, &k);
	if (k <= a)
	{
		printf("%d\n", k);
		return 0;
	}
	else
	{
		if (k - a <= b)
		{
			printf("%d\n", a);
			return 0;
		}
		else
		{
			if (a - c < 0)
			{
				printf("0\n");
				return 0;
			}
			else
			{


				printf("%d\n", a - c);
				return 0;
			}
		}
	}

	return 0;
}