#include<stdio.h>
int main()
{
	int num[100];
	int unum[100];
	int i,j,a=0,n;
	
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&num[i]);
	}
	
	for(i=n-1;i>=0;i--)
	{
		printf("%d",num[i]);
		if(i!=0)
		{
			printf(" ");
		}
	}
	printf("\n");
	return 0;
}