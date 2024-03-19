#include <stdio.h>
const int N =305;
const int M =305;
int main()
{
	int m, n;
	while(scanf("%d %d", &n, &m))
	{
		if(n == 0 && m == n)
		{
			break;
		}
		for(int i = 0; i < m ; i++)
			{
				printf("#");
			}
		printf("\n");
		
		for(int i = 0; i < n - 2 ; i++)
		{
			printf("#");
			for(int j = 0; j < m - 2 ; j++)
			{
				printf(".");
			}
			printf("#");
			printf("\n");
		}
	
		for(int i = 0; i < m ; i++)
			{
				printf("#");
			}
			printf("\n\n");
			
	}
}
