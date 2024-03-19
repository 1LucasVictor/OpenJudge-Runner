#include<stdio.h>

int main()
{
	int z;
	char x,y,c;
	scanf("%c ", &x);
	scanf("%c", &y);
	scanf("%c", &c);
	if ( c!= '\n')
	{
		printf("-1");
	}
	else
	{
		z = (x-'0') * (y-'0');

		printf("%d", z );

	}
}