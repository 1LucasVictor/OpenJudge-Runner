#include <stdio.h>

int main(void)
{
	int a;
	int b;
	int c;

	scanf("%d %d %d", &a, &b, &c);

	if (a>b)
	{
		if (b>c)
		{
			printf("%d %d %d\n", c, b, a);
		}

		else if (c>b)
		{
			if (a>c)
			{
				printf("%d %d %d\n", b, c, a);
			}

			else 

				printf("%d %d %d\n", b, a, c);

			return 0;
		}


	}

	if (a<b)
	{
		if (b<c)
		{
			printf("%d %d %d\n", a, b, c);
		}

		else if (b>c)
		{
			if (a<c)
			{
				printf("%d %d %d\n", a, c, b);
			}

			else

				printf("%d %d %d\n", c, a, b);
		}

		return 0;
	}

	if (a==b)
	{
		if (a<c)
		{
			printf("%d %d %d\n", a, b, c);
		}

		else if (a>c)
		{
			printf("%d %d %d\n", c, b, a);
		}

		return 0;
	}

	if (a==c)
	{
		if (a<b)
		{
			printf("%d %d %d\n", a, c, b);
		}

		else if (a>b)
		{
			printf("%d %d %d\n", b, c, a);
		}

		return 0;
	}

	if (c==b)
	{
		if (a<c)
		{
			printf("%d %d %d\n", a, b, c);
		}

		else if (a>c)
		{
			printf("%d %d %d\n", c, b, a);
		}

		return 0;
	}

	


	return 0;
}