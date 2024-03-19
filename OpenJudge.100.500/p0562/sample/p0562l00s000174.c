#include<stdio.h>

int main()
{
	int A, B;
	scanf("%d %d", &A, &B);

	int sumT = 1;
	int count = 0;
	while (sumT < B)
	{
		sumT = sumT - 1 + A;
		count++;
	}
	
	// 出力
	printf("%d\n", count);
	return 0;
}
