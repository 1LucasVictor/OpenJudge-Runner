#include<stdio.h>
int main(void)
{
	int n,i,m;
	
	scanf("%d",&n);
	
	for(i=0; i<3; i++)
	{
		if(n%10==7)
		{
			puts("Yes");
			return 0;
		}
		
		else
		n= n/10;
	}
	
	printf("No");
	
  return 0;
	
	
}
