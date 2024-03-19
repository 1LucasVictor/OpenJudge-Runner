#include<stdio.h>
int main(void)
{
	int i;
	
	while(1)
	{
		char x[1000];
		int sum=0;
		
		
		scanf("%s",x);
		
		for(i=0;i<1000;i++)
		{
			if(x[i]=='\0')
		{
			break;
		}
			sum+=x[i]-48;
		}
		if(sum==0)
		{
			break;
		}
		printf("%d\n",sum);
	}
	return 0;
}
