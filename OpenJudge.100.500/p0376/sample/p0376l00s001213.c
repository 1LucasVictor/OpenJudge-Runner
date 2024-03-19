#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	int array[100+10];
	for(int i = 0; i < n ; i++)
	{
		scanf("%d", &array[i]);
	}
	for(int i = n-1; i >= 0 ; i--)
	{
		printf("%d", array[i]);
		
		if(i != 0)
		{
			printf(" ");
		}
	}
	printf("\n");
	return 0;
}
