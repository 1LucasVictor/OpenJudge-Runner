#include<stdio.h>
int main()
{
	int i,j,k,l,n,m,a,b,c,d;
	while(scanf("%d%d%d%d",&a,&b,&c,&d)!=EOF)
	{
		if(b<=c)
		printf("0\n");
		else
		{
			if(b<=d)
			{
				if(a<=c)
				printf("%d\n",b-c);
				else
				printf("%d\n",b-a);
			}
			else
			{
				if(a<=c)
				printf("%d\n",d-c);
				else
				printf("%d\n",d-a);
			}
		}
		
	}
	return 0;
}