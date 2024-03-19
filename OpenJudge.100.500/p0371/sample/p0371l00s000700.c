#include<stdio.h>
int main(void)
{
	int n,i=0,suu,max=0,min=0,sum=0;
		
	scanf("%d",&n);
	
	while(i<n)
	{
		scanf("%d",&suu);

		sum = sum+suu;
		
		if(suu>max)
		{
			max = suu;
		}
		
		if(i==0)
		{
			min = suu;
		}
		else
		{
			if(min>=suu)
			{
				min = suu;
			}
		}
	
			i++;
	}
		
		printf("%d %d %d\n",min,max,sum);
		
	return 0;
}