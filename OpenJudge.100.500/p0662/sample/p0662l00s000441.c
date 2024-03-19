#include<stdio.h>
int main()
{
	int a,b,c,d,re,x,y;
	while (scanf("%d%d%d%d",&a,&b,&c,&d)!=EOF)
	{
		if (a>=c)
		x=a;
		else
		x=c;
		if (b>=d)
		y=d;
		else
		y=b;
		if (y>x)
		re=y-x;
		else
		re=0;
		printf("%d\n",re);
	}
	return 0;
 } 