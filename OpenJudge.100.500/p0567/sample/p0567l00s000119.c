#include<stdio.h>
int main()
{
	int i,j,k,l,m;
	scanf("%d",&k);
	scanf("%d",&l);
	scanf("%d",&m);
	if(m-(k-l)>0)
	{
		printf("%d",m-(k-l));
	}
	else
	{
		printf("0");
	}
}