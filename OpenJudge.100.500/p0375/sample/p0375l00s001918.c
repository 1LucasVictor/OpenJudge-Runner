#include <stdio.h>

int main(void) 
{
	int n = 0;
	int a = 1;
	int i = 0;
	
	while(a > n)
	{
		scanf("%d", &n);
		for(i = 1; i <= n; i++)
		{
			if(i % 3 == 0 || i % 10 == 3)
			{
				printf(" %d", i);
			}
		}
	}
	printf("\n");	
	return 0;
}