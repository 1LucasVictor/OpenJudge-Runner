#include <stdio.h>
#include <stdlib.h>
int main() 
{
	int a;
	scanf("%d",&a);
	int i;
	int judge = 0;
	for(i=1;i<=a;i++)
	{
		if(a%i==0)
		{
			if((a/i)<10 && i<10)
			{
				judge = 1;
				printf("Yes");
				i=a+1;
				break;
			}
		}
	}
	if(judge == 0)
		printf("No");
	return 0;
}