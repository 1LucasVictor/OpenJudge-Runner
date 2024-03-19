#include <stdio.h>

int main(void)
{
	int N;
	int i = 0, j, k;

	scanf("%d\n", &N);

	int A[N];
	do
	{
		scanf("%d", &A[i]);
		i++;
	}while(i < N);

	for(j = 0; j < N; j++)
	{
		for(k = 1; k < N-j; k++)
		{
			if(A[j] == A[j + k])
			{
				printf("NO");
				return 0;
			}
		}
	}
	printf("YES");
	return 0;
}
