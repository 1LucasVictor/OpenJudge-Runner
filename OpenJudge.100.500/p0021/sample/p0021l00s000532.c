#include<stdio.h>

int main()
{
	int i,n,max,sum,array[5000]={0};
	
	while(scanf("%d",&n)!=EOF)
	{
		if(n==0)
		{
			break;
		}
		
		max=-1000000;
		sum=0;
    	for(i=0;i<n;i++) 
		{
        	scanf("%d",&array[i]);
        	
        	sum+=array[i];
        	
        	if(max<sum)
        	{
        		max=sum;
			}
			
			if(sum<0)
			{
				sum=0;
			}
		}
		
		printf("%d\n",max);
	}
	
	return 0;
}
