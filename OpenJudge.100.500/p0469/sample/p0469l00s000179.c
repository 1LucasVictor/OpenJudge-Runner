#include <stdio.h>

main()
{
	int k,a,b;
	
	scanf("%d",&k);
	scanf("%d",&a);
	scanf("%d",&b);
	
	
	if(a!=b)
	{
		if(k<=b-a)
		{
			printf("OK");
		}
		else
		{
			printf("NG");
		}
	}
	
	if(a==b)
	{
		if(k==1)
		{
			printf("OK");
		}
		else
		{
			printf("NG");
		}
	}
	
	return 0;
	
}

