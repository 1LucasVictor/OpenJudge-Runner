// AtCoder ABC133: A - T or T
// 2019.9.2 bal4u

#include <stdio.h>

int main()
{
	int N, A, B;
	
	scanf("%d%d%d", &N, &A, &B);
	printf("%d\n", N*A <= B? N*A: B);
	return 0;
}
