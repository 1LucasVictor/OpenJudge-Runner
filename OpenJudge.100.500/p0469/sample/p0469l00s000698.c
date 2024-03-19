#include <stdio.h>

main()
{	int k,a,b;
	int count=0;
	
	scanf("%d",&k);
	scanf("%d",&a);
	scanf("%d",&b);
	
	while(a<=b)
	{
		if(a%k!=0)
		{
			++a;
		}
		else
		{
			++a;
			++count;
		}
	}
	
	if(count==0)
	{
		printf("NG");
	}
	else
	{
		printf("OK");
	}
}
