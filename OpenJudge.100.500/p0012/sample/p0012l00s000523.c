#include<stdio.h>

int main()
{
	int input;
	int stack[10]={0};//-1=empty(not train)
	int sp=-1;
	int outtrain[11]={0};
	int i=0;

	while(scanf("%d",&input)!=EOF)
	{
		if(input==0)
		{	
			outtrain[i]=stack[sp];
			stack[sp]=0;
			i++;
			sp--;
		}
		else
		{
			sp++;
			stack[sp]=input;
		}
	}
	i=0;
	while(outtrain[i]!=0)
	{
		printf("%d\n",outtrain[i]);
		i++;
	}
	return 0;
}