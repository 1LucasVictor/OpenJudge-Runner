#include <stdio.h>

int main(void)
{
	int N, i;

	scanf("%d", &N);

	int A[N];

	for(i = 0; i < N; i++)
	{
		scanf("%d", &A[i]);
	}

	for(i = 0; i < N; i++)
	{
		if((A[i] %= 2) == 0)
		{
			if((A[i] %= 3) == 0 && (A[i] %= 5) == 0)
			{
				continue;
			}
			else if((A[i] %= 3) != 0 || (A[i] %= 5) != 0)
			{
				printf("DENIED");
				return 0;
			}
		}
		else
		{
			continue;
		}
	}

	printf("APPROVED");

	return 0;
}