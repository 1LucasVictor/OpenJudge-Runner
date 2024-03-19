#include <stdio.h>
int main(void)
{
	int a;
	int b;
	scanf("%d", &a);
	a=a+1;
	for (b=1;b<a;b++)
	{
		if (b%3==0)
		{
			printf(" %d", b);
		}
		else if (b%10==3)
		{
			printf(" %d", b);
		}
	}
	printf("\n");
	return 0;
}