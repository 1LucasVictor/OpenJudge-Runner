#include <stdio.h>

int main()
{
	int n=0,x=0,count,a,b,c;
	while(1)
	{
		scanf("%d %d",&n,&x);
		if((x==0)&&(n==0))
		{
			break;
		}
		count=0;
		for(a=1;a<=n-2;a++)
		{
			for(b=a+1;b<=n-1;b++)
			{
				for(c=b+1;c<=n;c++)
				{
					if((a+b+c)==x) count++;
				}
			}
		}
		printf("%d\n",count);
	}
	return  0;
}