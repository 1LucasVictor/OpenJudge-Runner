#include<stdio.h>
int main()
{
	int a,b,f=0,n=10,o=1;
	while(scanf("%d %d",&a,&b)  != EOF)
	{
		o=1;f=0;
		a=a+b;
		while(o==1)
		{
			if(a / n)
			{
				f++;
				n=n*10;
				o=1;
			}
			else
			{
				printf("%d\n",f+1);
				o=0;n=10;
			}		
		}
	}
	return 0;
}