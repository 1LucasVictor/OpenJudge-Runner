#include<stdio.h>




int main()
{
	int a, b, c, k,sum=0;

	scanf("%d %d %d %d", &a, &b, &c, &k);
	
	for (k;k > 0;k--)
	{
		if (a != 0)
		{
			sum++;
			a--;
		}
		else if (b != 0)
		{
			b--;
		}
		else if (c != 0)
		{
			sum--;
			c--;
		}
	}
	printf("%d", sum);

	return 0;
}