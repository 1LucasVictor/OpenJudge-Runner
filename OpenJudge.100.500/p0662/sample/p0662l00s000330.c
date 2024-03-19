#include<stdio.h>

int main()
{
	int i,j,k,l,n,m,a,b,c,d,min,max;
	while(scanf("%d%d%d%d",&a,&b,&c,&d)!=EOF)
	{
		if(b<=d)
		min=b;
		else
		min=d;
		if(a<=c)
		max=c;
		else
		max=a;
		if(max>min)
		printf("0\n");
		else
		printf("%d\n",min-max);
	}
	return 0;
}