#include <stdio.h>
int main(void)
{
	int a;
	int b;
	int c;
	int d;
	int e;
	scanf("%d", &a);
	a=a+1;
	for (b=1;b<a;b++)
	{
		for (d=0;d<a;d=d+100)
			{
			e=(b-d)/10;
		
			c=b/10;
			
			if (b%1000==3)
			{
				printf(" %d", b);
				break;
			}
			else if (b%100==3)
			{
				printf(" %d", b);
				break;
			}
			else if (b%10==3)
			{
				printf(" %d", b);
				break;
			}
			if (b%3==0 || c==3 || e==3)
			{
				printf(" %d", b);
				break;
			}
		}	

	}
	printf("\n");
	return 0;
}