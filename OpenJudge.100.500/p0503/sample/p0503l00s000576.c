#include <stdio.h>

int main(void)
{
	int N, A[200000];
	int i = 0, j, k;

	scanf("%d\n", &N);

	do
	{
		scanf("%d", &A[i]);
		i++;
	}while(i < N);

	for(j = 0; j < N; j++)
	{
		for(k = j+1; k < N-j-1; k++)
		{
			if(A[j] == A[k])
			{
				printf("NO");
				return 0;
			}
		}
	}

	printf("YES");
	return 0;
}