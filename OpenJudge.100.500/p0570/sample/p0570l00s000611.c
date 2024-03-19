#include<stdio.h>

int main(void)
{
	int a, b,c;

	scanf("%d %d",&a,&b);

	c = a + b;

		if (c % 2 == 1)
			printf("IMPOSSIBLE");
	else
	printf("%d",c/2);

	return 0;
}