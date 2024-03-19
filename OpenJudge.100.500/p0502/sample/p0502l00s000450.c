#include <stdio.h>
#include <malloc.h>

int main()
{
	int* A = 0;
	int N = 0;
	int d = 0;
	
	scanf("%d", &N);
	A = (int*)malloc(sizeof(int) * N);

	int c = 0;

	for (int i = 0; i < N; i++)
	{
		scanf("%d", &A[i]);
	}
	for (int j = 0; j < N; j++) {
	
		if (A[j] % 2 == 0)
		{
			if (A[j] % 3 == 0 || A[j] % 5 == 0)
				d++;
			else 
			{
			c++;
			break;
			}
		}
	}
	if(c==0)
	printf("APPROVED");
	if(c!=0)
	printf("DENIED");


	
	return 0;
}
