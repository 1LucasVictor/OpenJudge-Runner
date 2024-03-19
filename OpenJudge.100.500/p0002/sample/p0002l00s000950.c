#include<stdio.h>

int main(void)
{
	int i,j,k,l;
	int flag=0;
	
	scanf("%d",&i);
	for(;i>0;i--)
	{
		scanf("%d %d %d",&j,&k,&l);
		if(j*j+k*k==l*l||k*k+l*l==j*j||l*l+j*j==k*k)
		{
			flag = 1;
		}
		if(flag==1)
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
		flag=0;
	}
	
	return 0;
}