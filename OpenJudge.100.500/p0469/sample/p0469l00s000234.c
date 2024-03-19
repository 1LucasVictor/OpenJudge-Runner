#include <stdio.h>

int main()
{
	int i;
	int n, m;
	int a;
	
	scanf("%d", &a);
	scanf("%d %d", &n, &m);
	
	for(i = n; i <= m; i++)
	{
		if(i % a == 0)
		{
			printf("OK");
			return 0; 
		}
	}
	
	printf("NG");
}
	