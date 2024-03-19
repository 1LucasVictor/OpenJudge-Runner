#include <stdio.h>

int main (int argc,char **argv)
{
	int x,a,b;
	
	scanf("%d%d%d",&x,&a,&b);

	if (a - b >= 0)
	{
		printf("delicious\n");
	}

	else if ((a - b < 0) && (a - b >= -x))
	{
		printf("safe\n");
	}

	else
	{
		printf("dangerous\n");
	}

	return 0;
}