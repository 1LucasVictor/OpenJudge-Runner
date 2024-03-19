#include <stdio.h>

int main(void)
{
	int n,i;
    scanf("%d",&n);
    ((n>=3)&&(n<=10000));
    
	
	for(i = 3;i <= n;i++)
	{
		if((i%3 == 0)||(i%10 == 3))
		{
			printf(" %d",i);
		}
	}
	printf("\n");
	return 0;
}