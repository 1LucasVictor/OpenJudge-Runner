#include <stdio.h>

int main (int argc,char **argv)
{
	int a = 0,b = 0,x = 0;

	scanf("%d %d %d",&a,&b,&x);

	if((a <= x) && (x <= a+b))
	{
		printf("YES\n");
	}

	else
	{
		printf("NO\n");
	}

	return 0;
}