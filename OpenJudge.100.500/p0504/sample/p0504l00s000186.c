#include<stdio.h>
int main(void)
{
	int n,a;
	int i=0;
	scanf("%d%d",&n,&a);
	
	while(n>0)
	{	
		n=n-a;
		i++;
	}
	printf("%d",i);
	
	return 0;
}