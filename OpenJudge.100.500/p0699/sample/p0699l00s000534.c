#include<stdio.h>


int main()
{
	int n5 = 0, n7 = 0, i, A[4];
	scanf("%d %d %d", &A[1], &A[2], &A[3]);
	for (i = 1; i < 4; i++)
	{
		if (A[i] == 5)n5++;
		if (A[i] == 7)n7++;
	}
	if (n5 == 2 && n7 == 1)printf("YES");
	else printf("NO");
	return 0;
}