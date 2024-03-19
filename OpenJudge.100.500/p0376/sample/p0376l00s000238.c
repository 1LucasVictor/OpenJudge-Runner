#include <stdio.h>

int main(void)
{
	int i;
	int n;
	int a[100];

	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}

	for(i = 0; i < n; i++)
	{
		if(i == n-1)
		{
			printf("%d", a[0]);
			printf("\n");
		}else
		{
			printf("%d", a[n-i-1]);
			printf(" ");
		}
	}

	return 0;
}