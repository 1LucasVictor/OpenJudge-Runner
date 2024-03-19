#include <stdio.h>

int main()
{
	int N, i, judge = 0;

	scanf("%d", &N);

	int A[101][4];

	for(i = 0; i < N; i++)
	{
		scanf("%d", &A[i][0]);

		if((A[i][0] %= 2) == 0)
		{
			if((A[i][0] %= 3) == 0 && (A[i][0] %= 5) == 0)
			{
				;
			}
			else
			{
				judge++;
			}
		}
		else
		{
			;
		}
	}

	if(judge > 0)
	{
		printf("DENIED");
	}
	else
	{
		printf("APPROVED");
	}
	return 0;
}
