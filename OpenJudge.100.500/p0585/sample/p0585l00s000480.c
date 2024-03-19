#include<stdio.h>

int main()
{
	int A, B, T;
	scanf("%d%d%d", &A, &B, &T);
	int times;
	times = T/A;
	printf("%d", times*B);
	return 0;
}