#include<stdio.h>
int main()
{
	int j,i,a,b,c,d,s;
	s=0;
	while(~scanf("%d%d%d%d",&a,&b,&c,&d))
	{
		if(a>=d||b<=c)
			printf("%d",s);
	else
	{
		j=a;
		if (j<c)
		{
			j=c;
		}
		i=b;
		if (i>d)
		{
			i=d;
		}
		s=i-j;
		printf("%d\n",s);
	}
	}
	return 0;
 } 		