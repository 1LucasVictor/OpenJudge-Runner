#include <stdio.h>
int main(){
	int n, a[100],i;
	while (1)
	{
		scanf("%d", &n);
		if (n<=100)
		{
			break;
		}
	}
	for (i = n; i > 0; i--)
	{
		scanf("%d", &a[i]);
	}
	for (i = 1; i <= n; i++)
	{
		printf("%d", a[i]);
		if (i < n)
		{
			printf(" ");
		}
	}
	puts("");
	return 0;
}