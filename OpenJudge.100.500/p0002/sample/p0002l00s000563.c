#include <stdio.h>

int main(void)
{
	int n,a,b,c,d,i,j;
	j=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(j==1)
		{
			printf("\n");
		}
		scanf("%d%d%d",&a,&b,&c);
		if(a>b)
		{
			if(a<c)
			{
				d=a;
				a=c;
				c=d;
			}
		}
		if(a<b)
		{
			if(b<c)
			{
				d=a;
				a=c;
				c=d;
			}
			if(b>c)
			{
				d=a;
				a=b;
				b=d;
			}
		}
		if(a*a==b*b+c*c)
		{
			printf("YES");
		}
		if(a*a!=b*b+c*c)
		{
			printf("NO");
		}
		j=1;
	}
	return 0;
}