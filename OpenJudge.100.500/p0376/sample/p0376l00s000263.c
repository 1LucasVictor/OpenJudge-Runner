#include<stdio.h>
int main(void)
{
	int n=0, a[100],i=0;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	for (int i = n - 1; i > 0; i--)
	{
		printf("%d ", a[i]);
	}
	printf("%d\n",a[0]);
	return 0;
}