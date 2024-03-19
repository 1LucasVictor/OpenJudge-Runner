#include<stdio.h>
#include<math.h>

int main(void)
{
	int n;
	int i,j,c,k=0,t=0;
	
	scanf("%d",&n);
	
	int a[n];
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		
	}
	
	for(i=0;i<n;i++)
	{
		c=0;
		c=sqrt(a[i]);
		for(j=3;j<=c+1;j++)
		{
			if(a[i]<2||a[i]%2==0)
			{
				k++;
				break;
			}
			else if(a[i]%j==0)
			{
				k++;
			}
		}
		
		if(k==0)
		{
			t++;
		}
		else k=0;
	}
	
	printf("%d\n",t);
	
	return 0;
}
