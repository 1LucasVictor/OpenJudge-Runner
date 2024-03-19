#include<stdio.h>

int main()
{
	int a,n,m;
	scanf("%d",&n);
	a=100000;
	for(m=0;m<n;m++)
	{
		a=a*1.05;
		if(a%1000!=0)
			a=a-a%1000+1000;

	}
	printf("%d\n",a);
	return 0;
}