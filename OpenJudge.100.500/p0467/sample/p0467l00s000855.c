#include<stdio.h>
int main()
{
	int a,b,c,k;
	scanf("%d %d %d %d",&a,&b,&c,&k);
	if(k>=a+b+c)
	{
		printf("%d\n",a+c*(-1) );
	}
	else if(k>a+b)
	{
		printf("%d\n",a+(k-a-b)*(-1) );
	}
	else if(k>a)
	{
		printf("%d\n",a);
	}
	else
	{
		printf("%d\n",k );
	}
}