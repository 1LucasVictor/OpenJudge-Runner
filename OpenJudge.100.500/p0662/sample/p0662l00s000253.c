#include <stdio.h>

int main()
{
	int a, b, c, d, num, x, y;
	scanf("%d%d%d%d", &a, &b, &c, &d);
		if (a<=c) 
			x=c;
		else 
			x=a;
		if (b>=d)
			y=d;
		else 
			y=b;
		if (y>x)
			printf("%d\n", y-x);
		else
			printf("0");
			
	return 0;
}
