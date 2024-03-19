#include <stdio.h>
int main(void)
{
	int n;
	int a;
	scanf("%d", &n);
	n=n+1;
	for (a=1;a<n;a++)
	{
		if (a%3==0)
		{
			printf(" %d", a);
		}
		else if (a%10==3)
		{
			printf(" %d", a);
		}
		else if (a/10==3)
		{
			printf(" %d", a);
		}
		else if (a/100==3)
		{
			printf(" %d", a);
		}
	}
	printf("\n");
	return 0;
}