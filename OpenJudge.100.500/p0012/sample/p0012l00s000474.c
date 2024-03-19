#include <stdio.h>

int main(void)
{
	int i;
	int number,count=0,out=0;
	int stack[20],hyouji[20];
	
	while(scanf("%d",&number)!=EOF)
	{
		if(number!=0)
		{
			stack[count]=number;
			count++;
		}
		else
		{
			count--;
			hyouji[out]=stack[count];
			out++;
		}
	}
	
	for(i=0;i<out;i++)
		printf("%d\n",hyouji[i]);
	
	
	return 0;
}