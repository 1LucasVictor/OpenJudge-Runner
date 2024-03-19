#include<stdio.h>
int main()
{
	char str[20];
	int i,j;
	for(i=0;str[i-1]!='\n';i++)
	{
		scanf("%c",&str[i]);
	}
	for(j=i-1;j>=0;j--)
	{
		printf("%c",str[j]);
	}
	
	return 0;
} 