#include<stdio.h>
int main(void)
{
	int n,i,x=100000;
	
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		x=x*1.05;
		if(x%1000!=0)
			x=(x/1000+1)*1000;
	}
	printf("%d\n",x);
	return 0;
}