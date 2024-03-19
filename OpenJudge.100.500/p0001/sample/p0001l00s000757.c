#include <stdio.h>
int main(void)
{ 
	int a, b, c;
	int x;
	int i=1;
	for (;scanf("%d%d", &a, &b) != EOF;)
	{
		c=0;
		x=0;
		i=1;
		c=a+b;
    	x=c;
		for (;;)
		{
			x=x/10;
			if (x!=0)
			{
				i=i+1;
			}
			if (x==0)
			{
				break;
			}
		}
		if (c==0)
		{
			printf("0\n");
		}
		else
			printf("%d\n", i);
		
	}
	return 0;
}