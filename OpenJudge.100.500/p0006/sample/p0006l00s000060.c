#include<stdio.h>
int main(void)
{
	int n=0;
	int i=0;
	int kane=100000;
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		kane=kane*0.05+kane;
		if (kane%1000!=0)
		{
			kane/=1000;
			kane*=1000;
			kane+=1000;
		}
	}
	printf("%d\n",kane);
	return 0;
}