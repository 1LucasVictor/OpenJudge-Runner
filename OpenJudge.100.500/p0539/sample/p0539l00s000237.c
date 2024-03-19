#include<stdio.h>

int main()
{
    //UG02-53-20-014
	int x,i,j;
	scanf("%d",&x);
	int ans=0;
	
	for(i=1;i<=9;i++)
	
	{for(j=1;j<=9;j++)
	
	{if(i*j==x)
	
	{ans=1;}	}	}
	
	if(ans==0)
		printf("No");
	else
		printf("Yes");
	return 0;
}
		
