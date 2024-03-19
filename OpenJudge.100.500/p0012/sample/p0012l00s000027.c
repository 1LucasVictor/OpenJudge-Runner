#include <stdio.h>

int main(void)
{
	int i;
	int number,count=0,out=0;
	int stack[10],hyouji[10];
	
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