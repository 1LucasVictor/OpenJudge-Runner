#include<stdio.h>
int main()
{
	int a, b, i=0, n[100002], c=0;
	scanf("%d%d", &a, &b);
	for (i = 0; i < b; i++)
	{
		scanf("%d", &n[i]);
		c = c + n[i];
	}
	if (n[0] >= a || c < a)
	{
		printf("No");
	}
	else
	{
		printf("Yes");
	}
	return 0;
}