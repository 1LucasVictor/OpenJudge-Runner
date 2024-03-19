#include <stdio.h>
#include <malloc.h>

int main()
{
	int* A = 0;
	int N = 0;
	int c = 0;
	scanf("%d",&N);
	A = (int*)malloc(sizeof(int) * N);
for (int i=0 ; i < N; i++)
	{
		scanf("%d", &A[i]);
	}
for (int j=0 ; j < N-1; j++)
{
	for (int k = j+1; k < N; k++)
	{
		if (A[j] == A[k]) c++; break;
	}
}

if(c>0)printf("NO");
else printf("YES");

    return 0;
}