#include <stdio.h>
int main(void)


{
	int a, b, c, d;
	scanf("%d %d %d", &a,&b,&c);
	if(a>b)
	{
		d = b;
		b = a;
		a = d;
	}
	if(b>c)
	{
		d = b;
		b = c;
		c = d;
		
	}
	if(b<a)
	{
		d = b;
		b = a;
		a = d;
	}
	printf("%d %d %d\n",a,b,c);
	return 0;
}