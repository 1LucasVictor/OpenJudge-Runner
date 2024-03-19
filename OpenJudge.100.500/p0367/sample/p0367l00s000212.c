#include <stdio.h>

int main(void)
{
	int a;
	int b;
	int c;
	int x;
	int y=0;
	int z;

	scanf("%d %d %d", &a, &b, &c);

	for(x=a; x<=b; x++)
	{

		z=c%x;

		//printf("%d\n", z);

		if (z==0)
		{
			y=y+1;
		}
		
	}

	printf("%d\n", y);
}