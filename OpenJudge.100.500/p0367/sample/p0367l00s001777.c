
#include<stdio.h>

int main(void)
{
	int a,b,c,i,count;
	count=0;
	scanf("%d %d %d",&a,&b,&c);
	(((a>=1)&&(a<=10000))&&((b>=1)&&(b<=10000))&&((c>=1)&&(c>=10000)));
	(a>=b);
	for(i=a;i<=b;i++)
	{
		if(c%i==0)
		{
			count++;
		}
	}
		printf("%d\n",count);
	
	return 0;
}