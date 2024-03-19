#include<stdio.h>
int main(void)
{
	int n,i,x = 0;
	scanf("%d",&n);
	for(i=1;i<n+1;i++)
	{
		x=i;
		x=x/10;
		if((i%3==0)||(i%10==3)||(x==3)||(x%10==3))
		{
			printf(" ");
			printf("%d",i);
		}	
	}
	printf("\n");
	return 0;
}
