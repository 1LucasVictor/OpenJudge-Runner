#include<stdio.h>
int main()
{
	int A,B,C,D;
	scanf("%d%d%d%d",&A,&B,&C,&D);
	if(A>=D||B<=C)
	{
		printf("0");
	}
	else if(A<=C&&D<=B)
	{
		printf("%d",(D-C));
	}
	else if(C<=A&&B<=D)
	{
		printf("%d",(B-A));
	}
	else if(A<=C&&C<=B&&B<=D)
	{
		printf("%d",(B-C));
	}
	else if(C<=A&&A<=D&&D<=B)
	{
		printf("%d",(D-A));
	}
	return 0;
	}