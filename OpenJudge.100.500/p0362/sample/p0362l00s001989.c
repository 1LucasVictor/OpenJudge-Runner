#include <stdio.h>

int main(void)
{
	int a,b,c;

	scanf("%d %d %d",&a,&b,&c);

	if(b <= c && a <= b)
	{
		printf("Yes\n");
	}else
	{
		printf("no\n");
	}

	return 0;
}