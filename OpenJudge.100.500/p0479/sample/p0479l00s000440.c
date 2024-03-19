#include <stdio.h>

void main()
{
	int N, A[200000],i,jo;
	scanf("%d", &N);
	for (i = 0; i < N; i++)
	{
		A[i]=0;
	}
	for (i = 0; i < N-1; i++)
	{
		scanf("%d", &jo);
		A[jo-1]++;
	}
	for (i = 0; i < N; i++)
	{
		printf("%d\n",A[i]);
	}

}