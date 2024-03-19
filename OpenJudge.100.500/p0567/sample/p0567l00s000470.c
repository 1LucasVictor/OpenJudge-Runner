#include<stdio.h>
int main(void)
{
	int a, b, c, d, e;

	
	scanf("%d%d%d", &a, &b, &c);
	d = a - b;
	e = c - d;


	if (e > 0)
		printf("%d", e);
	else
		printf("0");

	return 0;


}