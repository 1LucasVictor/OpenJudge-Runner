#include <stdio.h>

int main(void)
{
	int i,x,n;
	
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		x = i;
		if(x % 3 == 0)
			printf(" %d",i);
		else if(x % 10 == 3)
			printf(" %d",i);
		else
		{
			while( (x /= 10) > 0)
			{
				if(x % 10 == 3)
				{
					printf(" %d",i);
					break;
				}
			}
		}
		
	}
	printf("\n");
	
	return 0;
}