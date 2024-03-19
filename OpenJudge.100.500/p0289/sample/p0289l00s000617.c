#include <stdio.h>
#include <string.h>
#include <ctype.h>


int main(void)
{
	int i,j,k;
	int a,b,x,y,rem;


	scanf("%d %d", &a, &b);
	
	if (a < b)
	{
		x = a;
		y = b;
	}else
	{
		x = b;
		y = a;
	}

	while(1)
	{
		rem = y % x;

		if (rem == 0)
		{
			printf("%d\n", x);
			break;
		}
		y = x;
		x = rem;

	}



	return 0;
}