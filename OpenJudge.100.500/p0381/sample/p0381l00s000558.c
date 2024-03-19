#include <stdio.h>

int main(void)
{
	int n,x,i,j,k,cnt;
	
	while(1)
	{
		cnt = 0;
		
		scanf("%d %d",&n,&x);
		if(n==0 && x==0)
			break;
			
		for(i=1;i<=n;i++)
		{	
			if(i >= x)
				break;
			
			for(j=i+1;j<=n;j++)
			{
				if(i+j >= x)
					break;
					
				for(k=j+1;k<=n;k++)
				{
					if(i+j+k == x)
						cnt++;
					else if(i+j+k >x)
						break;
				}
			}
		}
		printf("%d\n",cnt);	
	}
		
	return 0;
}