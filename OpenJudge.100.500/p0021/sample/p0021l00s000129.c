#include<stdio.h>

int main()
{
	int data[5000];
	int n,i,j;
	int max;
	scanf("%d",&n);
	while(n!=0)
	{
		max=-500000000;
		for(i=0;i<n;i++)
		{
			scanf("%d",&data[i]);
		}
		for(i=0;i<n-1;i++)
		{
			if(data[i]*data[i+1]>=0)
			{
				data[i]+=data[i+1];
				for(j=i+1;j<n-1;j++)
				{
					data[j]=data[j+1];
				}
				n--;
				i--;
			}
		}
		
		for(i=0;i<n-2;i++)
		{
			if(data[i]>0)
			{
				if(data[i+1]+data[i+2]>=0)
				{
					data[i]+=data[i+1]+data[i+2];
					for(j=i+1;j<n-2;j++)
					{
						data[j]=data[j+2];
					}
					n-=2;
					i--;
				}
			}
		}
		
		for(i=0;i<n;i++)
		{
			if(data[i]>max)
			{
				max=data[i];
			}
		}
		printf("%d\n",max);
		scanf("%d",&n);
	}
	return 0;
}