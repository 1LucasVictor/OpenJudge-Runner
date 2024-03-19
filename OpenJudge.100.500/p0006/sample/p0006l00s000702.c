#include<stdio.h>

int main()
{
	int n,m=100000;
	scanf("%d",&n);
	while(--n >=0)
	{
		m+=m*0.05;
		if(m%1000!=0)
			m=m-(m%1000)+1000;
	}
	printf("%d\n",m);
	return 0;
}