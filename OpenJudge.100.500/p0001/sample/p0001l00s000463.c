#include<stdio.h>

int main(void)
{
	int i;
	int a, b, ans;
	int order;
	int judge;
	
	while( scanf("%d %d",&a, &b) != EOF )
	{	
		judge = 10;
		ans = a + b;
		
		for( i = 1 ; i <= 10 ; i++ )
		{
			if( ans / judge == 0 )
			{
				order = i;
				break;
			}
			judge *= 10;
		}
		printf("%d\n",order);
	}
	return 0;
}