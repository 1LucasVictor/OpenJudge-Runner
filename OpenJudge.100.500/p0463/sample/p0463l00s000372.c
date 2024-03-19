#include <stdio.h>

int main()
{
	int a,N;

	scanf("%d",&N);

	if(N/10==0)
	{
		a=N%10;
	}
	else if(N/100==0)
	{
		a=N/10%10;
	}
	else
	{
		a=N/100%10;
	}
	
	if(a==2 || a==4 || a== 5 || a==7 || a==9)
	{
		printf("hon\n");
	}
	else if(a==3)
	{
		printf("bon\n");
	}
	else
	{
		printf("pon\n");
	}
	return 0;
}