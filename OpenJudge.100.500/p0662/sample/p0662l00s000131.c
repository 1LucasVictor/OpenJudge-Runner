#include<stdio.h>
int main()
{
	int a,b,c,d,i,n;
	scanf("%d%d%d%d",&a,&b,&c,&d);
	if(a<c)
	{
		if(b<c)
		printf("0");
		else
		{
			if(b>d)
			printf("%d\n",d-c);
			else
			printf("%d\n",b-c);
		}
	}
	else
	{
		if(d<a)
		printf("0");
		else
		{
			if(d>b)
			printf("%d\n",b-a);
			else
			printf("%d\n",d-a);
		}
	}
	return 0;
}