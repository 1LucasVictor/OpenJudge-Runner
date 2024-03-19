#include<stdio.h>

int main(void)
{
	int A = 0, B = 0;
	scanf("%d%d", &A, &B);
	printf("%d\n", ((1<=A && A<=9)&&(1<=B && B<=9)) ? A*B : -1);
	return 0;
}