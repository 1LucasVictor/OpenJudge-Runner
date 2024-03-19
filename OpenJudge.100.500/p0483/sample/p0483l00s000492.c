#include <stdio.h>
#include <math.h>

#define n 3
#define p 10

int main()
{
	int N;
	scanf("%d", &N);

	int x = N;
	int a[n];
	for (int i = n - 1; i--; i >= 0)
	{
		int pi = pow(p, i);
		a[i] = x / pi;

		if (a[i] == 7)
		{
			printf("Yes\n");
			return 0;
		}

		x -= a[i] * pi;
	}

	printf("No\n");
	return 0;
}