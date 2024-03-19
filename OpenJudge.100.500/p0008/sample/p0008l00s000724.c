#include <stdio.h>          // printf(), scanf()

#define N 1000000
#define N2 1000

int
main(int argc, char** argv)
{
	int t[N + 1];
	int n;
	int i, j;

	for (i = 0; i <= N; ++i)
		t[i] = 1;

	t[0] = t[1] = 0;
	int count = 0;
	for (i = 2; i <= N; ++i)
	{
		if (t[i] == 1)
		{
			count++;
			if (i <= N2)
			{
				for(j = i + i; j <= N; j += i)
					t[j] = 0;
			}
		}

		t[i] = count;
	}

	while (scanf("%d", &n) != EOF)
		printf("%d\n", t[n]);

	return 0;
}