#include<stdio.h>

int main()
{
	char str[100];
	int count;
	int i,N;
	scanf("%d",&N);
	for(i=0;i<N;i++)
	{
		scanf(" %c",&str[i]);
		
	}
	for(i=N-1;i>=1;i--)
	{
		printf("%c ",str[i]);
	}
	printf("%c\n",str[0]);

 return 0;
}