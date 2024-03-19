#include <stdio.h>

int main(void)
{
	int doubt=100000,amari;
	int week;
	int i;
	
	scanf("%d",&week);
	
	for(i=0;i<week;i++)
	{
		doubt = doubt*1.05;
		
		amari = doubt%1000;
		if(amari!=0)
		{
			doubt += 1000-amari;
		}
	}
	
	printf("%d\n",doubt);
	
	return 0;
}
