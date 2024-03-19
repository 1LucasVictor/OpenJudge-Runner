#include<stdio.h>

int main(void)
{
	int i,n,p;
	
	scanf("%d",&n);
	p=100000;
	for(i=1;i<=n;i++)
	{
		p=p*105/100;
		if(p%1000==0)
		{
		   p/=1000;
		   p*=1000;
		}
		else
		{
			p/=1000;
			p+=1;
			p*=1000;
		}
	}
	printf("%d\n",p);
	return 0;
}