#include<stdio.h>

int main(void)
{
	int i,j,a,b,c=0;
	while(c!=1)
	{
		scanf("%d %d", &a,&b);
		if(a==0 && b==0)
		{
			c=1;
			break;
		}
		
		for(j=0;j<b;j++)
		{
			printf("#");
		}
		printf("\n");
		
		for(i=1;i<a-1;i++)
		{
			printf("#");
			
			for(j=1;j<b-1;j++)
			{
				printf(".");
			}
			printf("#\n");
		}
		
		for(j=0;j<b;j++)
		{
			printf("#");
		}
		printf("\n\n");
	}
	return 0;
}
