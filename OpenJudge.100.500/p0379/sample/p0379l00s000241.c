#include <stdio.h>
void Store_A(int A[100][100], int n, int m)
{
    int i,j;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
		    scanf("%d", &A[i][j]);
		}
	}
}

void Store_b(int* b, int m)
{
    int i;
	for (i = 0; i < m; i++)
	{
	    scanf("%d", b+i);
	}
}

void Print_Ans(int* Ans, int n, int m, int A[100][100], int* b)
{
    int i,j;
    
    for (i = 0; i < n; i++)
    {
		for (j = 0; j < m; j++)
		{
		    *(Ans+i) += A[i][j] * b[j];
		}
	}
	
	for (i = 0; i < n; i++)
	{
		printf("%d\n", *(Ans+i));
	}
    
}

int main()
{
	int A[100][100], b[100], Ans[100]={0};
	int n, m;

	scanf("%d%d", &n, &m);
	Store_A(A, n, m);
    Store_b(b, m);
    Print_Ans(Ans, n, m, A, b);
	return 0;
}
