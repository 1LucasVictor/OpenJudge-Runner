#include<stdio.h>

int main()
{
	int week,i;
	int debt=100000;
	scanf("%d",&week);
	for(i=0;i<week;i++)
	{
		debt*=1.05;
		if(debt%1000>0)
		{
			debt/=1000;
			debt=(debt+1)*1000;
		}
	}
	printf("%d\n",debt);
	return 0;
}