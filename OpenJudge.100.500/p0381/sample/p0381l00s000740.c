#include<stdio.h>

int main(void)
{
	int n, x, n1, n2, n3, k;

	scanf("%d %d", &n, &x);
	while( n != 0 || x != 0)
	{
		k=0;
		for(n1 = 1; n1 <= n - 2; n1++)
		{
			for(n2 = n1 + 1; n2 <= n - 1; n2++)
			{
				for(n3 = n2 + 1; n3 <= n; n3++)
				{
					if(n1 + n2 + n3 == x)
						k++;
				}
			}
		}
		printf("%d\n",k);
		scanf("%d %d", &n, &x);
	}
}

