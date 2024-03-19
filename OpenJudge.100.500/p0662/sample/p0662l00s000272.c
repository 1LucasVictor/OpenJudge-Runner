#include<stdio.h>
int main()
{
	int a,b,c,d;
	while(~scanf("%d%d%d%d",&a,&b,&c,&d))
	{
		if(b>=c)
		{
			if(a<=c&&b<=d)
			printf("%d\n",b-c);
			if(a<=c&&b>=d)
			printf("%d\n",d-c);
			if(a>=c&&b>=d)
			printf("%d\n",d-a);
			if(a>=c&&b<=d)
			printf("%d\n",b-a);
		}
		else
		{
			printf("0\n");
		}
		
	}
}