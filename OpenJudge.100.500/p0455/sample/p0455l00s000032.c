#include<stdio.h>

void main()
{
	int scanCheck;
	int a;

	scanCheck = scanf("%d", &a);
	printf("%d", a + a * a + a * a * a);
}