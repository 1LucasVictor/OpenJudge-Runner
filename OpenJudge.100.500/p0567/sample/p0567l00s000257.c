#include<stdio.h>
int main()
{
	int a, b, c, s, p;
	scanf("%d%d%d", &a, &b, &c);
	s = a - b;
	p = c - s;
	if (p < 0)
	{
		printf("0");
	}
		else
		{
			printf("%d\n", p);
		}
		 return 0;
	}