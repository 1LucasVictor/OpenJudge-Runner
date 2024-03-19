#include <stdio.h>

int main (int argc,char **argv)
{
	int a = 0,b = 0,x = 0;
	int f = 0;

	scanf("%d %d %d",&a,&b,&x);

	f = a + b;
	if((f >= x) && (a < x))
	{
		printf("YES\n");
	}

	else
	{
		printf("NO\n");
	}

	return 0;
}