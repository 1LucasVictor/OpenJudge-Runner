#include<stdio.h>
#define m 100001

int main(void)
{
	int g[m];
	int num = 0;
	int h, n;
	scanf("%d", &h);
	scanf("%d", &n);

	for (int i = 0; i<n; i++)
	{
		scanf("%d", &g[i]);
	}

	for (int i = 0; i < n; i++)
	{
		num += g[i];
	}

	if (num >= h) printf("Yes");
	else
		printf("No");

	return 0;
}