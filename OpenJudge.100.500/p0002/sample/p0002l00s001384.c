#include<stdio.h>

#define X(x)	(x * x)

int main(void)
{
	int N = 0;
	int a = 0, b = 0, c = 0;

	do
	{
		scanf("%d", &N);
	}
	while(N > 1000 || N < 0);


	while(N)
	{
		do
		{
			scanf("%d %d %d", &a, &b, &c);
		}
		while(a < 1 || b < 1 || c < 1 || a > 1000 || b > 1000 || c > 1000);

		if(X(a) + X(b) == X(c))
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}

		N--;
	}

	return 0;
}