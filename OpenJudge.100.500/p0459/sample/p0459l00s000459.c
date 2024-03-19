#include <stdio.h>

int main(void)
{
	int x,y;
	
	scanf("%d",&x);
	scanf("%d",&y);
	
	int i;
	int count=0;
	
	if(y/2==x||y/4==x)
	{
		count++;
	}
	else
	{
		for(i=1;i<x;i++)
		{
			if(   (2*i+4*(x-i))   ==y)
			{
				count++;
			}
		}
	}
	
	if(count!=0)
	{
		printf("Yes");
	}
	else
	{
		printf("No");
	}
}