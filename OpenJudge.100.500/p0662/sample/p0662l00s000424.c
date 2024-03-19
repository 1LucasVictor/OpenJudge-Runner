#include<stdio.h>
int main()
{
	int A, B, C, D;
	scanf("%d", &A);
	scanf("%d", &B);
	scanf("%d", &C);
	scanf("%d", &D);
	if (B < C || D < A)
		printf("%d",0);
	else
	{
		if (A < C)
		{
			if (B < D)
			{
				printf("%d", B - C);
			}
			else
			{
				printf("%d", D - C);
			}
		}
		else 
		{
			if (B < D)
			{
				printf("%d", B - A);
			}
			else
			{
				printf("%d", D - A);
			}
		}
	}
	return 0;
}
