#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc,char **argv)
{
	int a = 0,b = 0;
	int e = 0;

	scanf("%d %d",&a,&b);

	if((a >= 1)&&(b <= 10000))
	{
		e = a * b;
		if (e % 2 == 0)
		{
			printf("Even\n");
		}
		else
		{
			printf("Odd\n");
		}
	}

	
}