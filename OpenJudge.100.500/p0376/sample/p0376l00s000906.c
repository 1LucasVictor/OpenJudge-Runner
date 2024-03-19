#include <stdio.h>

int main(void)
{
	int n[100];
	
	int i;
	int num;
	
	scanf("%d",&num);
	
	for(i=0;i<num;i++)
	{
		scanf("%d",&n[i]);
	}
	
	for(i=num-1;i>=0;i--)
	{
		printf("%d",n[i]);
		if(i!=0)
		{
			printf(" ");
		}
	}
	
	printf("\n");
	
	return 0;
}