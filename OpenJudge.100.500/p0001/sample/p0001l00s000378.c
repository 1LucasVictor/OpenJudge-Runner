#include<stdio.h>
int main()
{
	int a,b,c,k;
	while(scanf("%d%d",&a,&b)!=EOF)
	{
		k=0;
		c=a+b;
		for(;c!=0;)
		{
			c=c/10;
			k++;
		}
		printf("%d\n",k);
	}
	return 0;
}