#include<stdio.h>
#include <ctype.h>

int main(void)
{
	char Chr[1200];
	char a[1200];
	int n, i;
	n = 0;
	while(1)
	{
		scanf("%c",&Chr[n]);
		if (Chr[n] == '\n')
		{
			break;
		}
		a[n] = Chr[n];
		if ('A' <= Chr[n] && Chr[n] <='Z')
		{
			a[n] = Chr[n] + 32;
		}
		else if(Chr[n] >= 'a' && Chr[n]<='z')
		{
			a[n] = Chr[n] - 32;
		}
		n = n + 1;
	}
	for (i= 0; i < n; i++)
	{
		printf("%c", a[i]);
	}
	printf("\n");
	return 0;
}
