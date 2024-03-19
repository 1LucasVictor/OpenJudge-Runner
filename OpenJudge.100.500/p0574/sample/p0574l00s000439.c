#include <stdio.h>

int main()
{
	char x=0,y=0;
	int i,flag=1;
	for(i=0;i<4;i++)
	{
		if(i!=0)
		{
			y=x;
		}
		scanf("%c",&x);
		if(y==x)flag=0;
	}
	if(flag)printf("Good");
	else printf("Bad");
	
	return 0;
}