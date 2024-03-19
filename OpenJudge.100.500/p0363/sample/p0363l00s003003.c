#include <stdio.h>

int main(void)
{
	
	int a, b, c;
	int min, mi,m;
	
	scanf("%d %d %d", &a,&b,&c);
	
	if(a<= b)
	{
		if(c<=a)
		{
			min = c; mi = a; m = b;
		}
		else{
			min = a;
			if(b<= c)
			{
				mi = b; m = c;
			}
			else{
				mi = c; m = b;
			}
		}
	}
	else
	{
		if(c<=b)
		{
			min = c; mi = b; m = a;
		}
		else{
			min = b;
			if(a<=c)
			{
				mi = a; m = c;
			}
			else{
				mi = c; m = a;
			}
		}
	}
	printf("%d %d %d\n", min, mi, m);
	return 0;
}
			
	
	
