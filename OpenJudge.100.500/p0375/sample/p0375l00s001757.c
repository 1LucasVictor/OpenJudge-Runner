#include<stdio.h>

#define MAX 10000
#define MIN 3

void Call(int n);

int main(void)
{
	int n;
	
	if( scanf("%d", &n)==1 )
	{
		if((n>=MIN) && (n<=MAX))
		{
			Call(n);
		}
		else
		{
			return -1;
		}
	}
	else
	{
		return -1;
	}
	
	return 0;
}

void Call(int n)
{
	for(int i=1; i-1<n; i++)
	{
		int x=i;
		
		while( x!=0 )
		{
			if( x%3==0 )
			{
				printf(" %d", x);
				break;
			}
			if( x%10==3 )
			{
				printf(" %d", x);
				break;
			}
			
			x/=10;
		}
	}
	
	printf("\n");
}