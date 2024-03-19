#include <stdio.h>
#define N 45

int main()
{
	int n,i,F[N];

	F[0] = 1;
	F[1] = 1;

	scanf("%d",&n);

	for(i = 2;i < N;i++)
	{
		F[i] = F[i-2] + F[i-1];
	}

	printf("%d\n",F[n]);

	return 0;
}