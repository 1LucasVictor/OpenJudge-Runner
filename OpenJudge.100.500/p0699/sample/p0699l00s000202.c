#include <stdio.h>

int main() 
{
	int a,b,c;
	int i = 0;
	scanf("%d %d %d",&a ,&b ,&c);
	
	if(a+b+c != 17)
	{
		printf("NO");
	}
	else 
	{
		if(a != 5)
		{
			if(a != 7)
			{
				printf("NO");
				return 0;
			}
		}
		else
		{
			if(b != 5)
			{
				if(b != 7)
				{
					printf("NO");
					return 0;
				}
			}
			else 
			{
				if(c != 5)
				{
					if(c != 7)
					{
						printf("NO");
						return 0;
					}
					
				}
			}
		
		}
	printf("YES");
	return  0;
	}
}