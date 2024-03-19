#include <stdio.h>

int main()
{
	int n,x;
  int i,j,k,count=0;

	

	for(;;)
	{
			count =0;

		scanf("%d%d",&n,&x);
			if(n==0&&x==0) break;
	for(i=1; i<=n; i++)
	{
		
		for(j=1; j<=n; j++)
		{
			for(k=1; k<=n; k++)
			{
				if(i!=j&&j!=k&&k!=i&&i+j+k==x)
				{
					// printf("%d+%d+%d=%d\n",i,j,k,x);
					count++;	
				} 
			}
		}
	}
		printf("%d\n",count/6);
	}
    return 0;
}

