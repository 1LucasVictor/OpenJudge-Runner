#include <stdio.h>

int main(void)
{
	int a,b,c,d;
	int n,num;
	
	
	
	while(scanf("%d",&n)!=EOF)
	{
		num=0;
		if(n<=36)
		{
			for(d=0;d<=9;d++)
			{
				for(c=0;c<=9;c++)
				{
					for(b=0;b<=9;b++)
					{
						for(a=0;a<=9;a++)
						{
							if(a+b+c+d==n)
								num++;
						}
					}
				}
			}
		}
		printf("%d\n",num);
	}
	
	
	return 0;
}