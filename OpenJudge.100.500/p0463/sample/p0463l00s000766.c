#include <stdio.h>

main()
{
	int n;
	scanf("%d",&n);
	
	if(n>=0&&n<=9)
	{
		if(n==3)
		{
			printf("bon");
		}
		else if(n==0||n==1||n==6||n==8)
		{
			printf("pon");
		}
		else if(n==2||n==4||n==5||n==7||n==9)
		{
			printf("hon");
		}
	}
	else if(n>=10&&n<=99)
	{
		if(n%10==3)
		{
			printf("bon");
		}
		else if(n%10==0||n%10==1||n%10==6||n%10==8)
		{
			printf("pon");
		}
		else if(n%10==2||n%10==4||n%10==5||n%10==7||n%10==9)
		{
			printf("hon");
		}
	}
	else if(n>=100&&n<=999)
	{
		if(n%10==3)
		{
			printf("bon");
		}
		else if(n%10==0||n%10==1||n%10==6||n%10==8)
		{
			printf("pon");
		}
		else if(n%10==2||n%10==4||n%10==5||n%10==7||n%10==9)
		{
			printf("hon");
		}
	}		
}
