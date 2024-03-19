#include <stdio.h>

int main(void)
{
	int x,y;
	int i;
//	int count=0;
		
	scanf("%d",&x);
	scanf("%d",&y);
	
	if(y/2==x||y/4==x)
	{
		printf("Yes\n");
//		count++;
	}
	else
	{
		for(i=1;i<x;i++)
		{
			if(   (2*i+4*(x-i))   ==y)
			{
				printf("Yes\n");
//				count++;
				return(0);
			}
		}
	}
	printf("No\n");
	
/*	
	if(count!=0)
	{
		printf("Yes");
	}
	else
	{
		printf("No");
	}
*/
}